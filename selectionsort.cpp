#include <stdio.h>
#define MAX 100

int main() 
{
    
    int arr[MAX], i, j, n, temp, min;
    
    // number of elements
    printf("Enter the number of elements :");
    scanf("%d", &n);

    // initializing array
    for(i=0 ; i<n ; i++) {
        printf("Enter element %d  :", i+1);
        scanf("%d", &arr[i]);
    }

    // selection sort
    for(i=0 ; i<n ; i++) 
    {
        min = i;
        for(j=i+1 ; j<n ; j++) {
            if(arr[j] < arr[min]) 
                min = j;
        }
        
        if(i != min) 
        {
            temp = arr[i];
            arr[i] = arr[min];
            arr[min] = temp;
        }
    }

    // print sorted list
    printf("After Selection sort..Array elements");
    for(i=0 ; i<n ; i++) {
        printf("%d  :", arr[i]);
    }

    printf("/n");
} //end of