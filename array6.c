/*rotate array by k elements
Brute force approach
time complexity O()
space complexity O()*/

#include<stdio.h>
#define MAX 100

int main(){
    int arr[MAX],k,n;

    printf("enter the number of elements");
    scanf("%d",&n);

    printf("enter the array elements");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    printf("enter the number of elements to rotate");
    scanf("%d",&k);

    for(int i=0;i<k;i++){
        int temp=arr[0];
        for(int j=0;j<n-1;j++){
            arr[j]=arr[j+1];
        }
        arr[n-1]=temp;
    }

    printf("the rotated array is");
    for(int i=0;i<n;i++){
        printf("%d\n",arr[i]);
    }
    return 0;   
}