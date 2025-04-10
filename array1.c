//recursive approach
#include<stdio.h>
#define MAX 100 // Define a maximum size for the array

int main() {
    int arr[MAX], n, i, largest;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    // Validate the input size
    if (n <= 0 || n > MAX) {
        printf("Invalid number of elements. Please enter a value between 1 and %d.\n", MAX);
        return 1; // Exit the program with an error code
    }

    printf("Enter the elements of the array:\n");
    for (i = 0; i < n; i++) { // Start from i = 0
        scanf("%d", &arr[i]);
    }

    largest = arr[0]; // Initialize largest with the first element
    for (i = 1; i < n; i++) { // Start from the second element
        if (arr[i] > largest) {
            largest = arr[i]; // Update largest
        }
    }

    printf("Largest element is %d\n", largest);
    return 0;
}


/*Brute Force approach*/
#include <stdio.h>

int main(){
    int arr[100],n,i,largest;
    printf("Enter the number of elements in the array: ");
    scanf("%d",&n);

    printf("Enter the elements of the array:\n");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    for(i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1])
                {
                    int temp=arr[j];
                    arr[j]=arr[j+1];
                    arr[j+1]=temp;
                }
        }
    }
    
    printf("array after sorting:\n");
    for(i=0;i<n;i++){
        printf("%d\n",arr[i]);
    }

    printf("the largest element is %d\n",arr[n-1]);

    return 0;
}


