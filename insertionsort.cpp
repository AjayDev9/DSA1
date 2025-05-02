#include <stdio.h>
#define MAX 100

int main()
{
    int arr[MAX], n, i,j,k;
    printf("Enter he number of Elements in array: ");
    scanf("%d", &n);

    // initialize array
    for (i = 0; i < n; i++)
    {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // insertion sort
    for (i=1; i<n; i++)
    {
        k = arr[i]; /* k is to be inserted at proper place*/

        for(j=i-1; j>=0 && k<arr[j]; j--)
        {
            arr[j+1] = arr[j];
        }

        arr[j+1] = k;
    }

    // display array
    printf("Sorted list is : \n");
    for (i = 0; i < n; i++)
    {
        printf("%d \n", arr[i]);
    }
    printf("\n");

    return 0;
}