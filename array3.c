/*Brute force approach, time complexibility:- O(n^2)*/

#include<stdio.h>

int main(){
    int i,j,n;

    printf("enter the no of array elements");
    scanf("%d",&n);

    if (n<=0)
    {
        printf("invalid array size.\n");
        return 1;
    }
    

    int arr[n];

    printf("enter the array elements");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    if (n == 1){
        printf("the array is already sorted:");
        return 0;
    }
    for(i=0;i<n-1;i++){
        for(j=0;j<n-i-1;j++){
            if(arr[i]>arr[j]){
                printf("False..the array isn't sorted");
                return 0;
            } 
        }
    }
    printf("the array is already sorted");
    return 0;
}

/*single traversal (optimal approach) time complexibility:-O(n) */

#include<stdio.h>

int main(){
    int i,j,n;

    printf("enter the no of array elements");
    scanf("%d",&n);

    if (n<=0)
    {
        printf("invalid array size.\n");
        return 1;
    }
    

    int arr[n];

    printf("enter the array elements");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    if (n == 1){
        printf("the array is already sorted:");
        return 0;
    }
    for(i=0;i<n-1;i++){
            if(arr[i]>arr[i+1]){
                printf("False..the array isn't sorted");
                return 0;
        }
    }
    printf("the array is already sorted");
    return 0;
}
