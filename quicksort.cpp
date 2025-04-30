#include <stdio.h>
#define MAX 100

int partition (int arr[], int low, int up){
    int pivot = arr[low];
    int i = low + 1;
    int j = up;

    while (i <= j) {
        while (arr[i] <= pivot && i <= up) {
            i++;
        }
        while (arr[j] > pivot && j >= low) {
            j--;
        }
        if (i < j) {
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }
    arr[low] = arr[j];
    arr[j] = pivot;
    return j;
}

void quick(int arr[], int low, int up){
    if (low < up) {
        int pivot = partition(arr, low, up);
        quick(arr, low, pivot - 1);
        quick(arr, pivot + 1, up);
    }
}
   

int main() {
    int arr[MAX], n, i;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d integers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    quick(arr, 0, n - 1);

    printf("Sorted list in ascending order:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}