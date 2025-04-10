/*Brute force approach to rotate an array by one space,by adding a dummy array dummy[i]=arr[i+1] and then adding the first element of arr to the dummy
time complexity O(n)
space complexity O(n):- using another array so*/
/*
#include<stdio.h>
#define MAX 100

int main(){
    int arr[MAX],dummy[MAX],n;

    printf("enter the number of elements");
    scanf("%d",&n);

    printf("enter the array elements");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    for(int i=0;i<n-1;i++){
        dummy[i]=arr[i+1];
    }
    dummy[n-1]=arr[0];
    printf("The Left rotated array by one space is");
    for(int i=0;i<n;i++){
        printf("%d \n",dummy[i]);
    }

    return 0;

}*/

/*optimal solution*/

#include<stdio.h>
#define MAX 100

int main() {
    int arr[MAX],n;
    printf("enter the number of elements");
    scanf("%d",&n);

    printf("enter the array elements");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int temp=arr[0];
    for(int i;i<n-1;i++){
        arr[i]=arr[i+1];
    }
    arr[n-1]=temp;
    
    printf("the left sorted array by one space is");
    for(int i=0;i<n;i++){
        printf("%d\n",arr[i]);
    }
    return 0;
 }