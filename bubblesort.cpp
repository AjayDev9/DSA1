#include <stdio.h>
#define MAX 100

int main() {
    
    int arr[MAX],j, temp,n,xchanges;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // initialize array
    for (int i=0; i<n; i++) {
        printf("Enter element %d: ", i+1);
        scanf("%d", &arr[i]);
    }
    
    // bubble sort
    for(int i=0;i<n-1; i++) 
    {
            xchanges = 0;
            for (j=0; j<n-1; j++)
            {
                if (arr[j] < arr[j-1]) 
                {
                    // swap
                    temp = arr[j];
                    arr[j] = arr[j-1];
                    arr[j-1] = temp;
                    xchanges++;        
                }
            }
            if (xchanges == 0) {
                break; // array is already sorted
            }
     }// end of bubble sort

    //display sorted array
    printf("The array is: \n");               
    for (int i=0; i<n; i++) {
        printf("%d", arr[i]);
        printf("\n");
    }

    printf("\n");

} //end of main 