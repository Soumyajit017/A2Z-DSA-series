/*Brute force approach Time complexibility=o(n^2)
2nd largest & 2nd smallest elements */

include<stdio.h>

int main(){
    int n,i,j;
    printf("enter the number of elements");
    scanf("%d",&n);

    int arr[n];

    printf("enter the elements");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    for(i=0;i<n-1;i++){
        for(j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
               int temp=arr[j];
               arr[j]=arr[j+1];
               arr[j+1]=temp;
            }
        }
    }
    printf("the 2nd largest element is %d\n",arr[n-2]);
    printf("the 2nd smallest element is %d\n",arr[1]);

    return 0;
} 

/*optimal solution time complexibility=O(n)*/

#include<stdio.h>

int main(){
    int small,second_small,large,second_large;
    int n,i,j;
    printf("enter the number of elements");
    scanf("%d",&n);

    int arr[n];

    printf("enter the array elements");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    large = small = arr[0];
    second_large = second_small = __INT_MAX__;

    for(i=0;i<n;i++){
        if(arr[i] > large){
            second_large = large;
            large = arr[i];
        } else if(arr[i] > second_large && arr[i] != large){
            second_large = arr[i];
        }

        if(arr[i] < small){
            second_small = small;
            small = arr[i];
        } else if(arr[i] < second_small && arr[i] != small){
            second_small = arr[i];
        }
    }

    printf("the second largest element is %d\n",second_large);
    printf("the second smallest element is %d\n",second_small);

    return 0;

}
