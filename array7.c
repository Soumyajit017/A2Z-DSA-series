/*Rotate an array by one space
Brute force approach:-
using two arrays, one original and one dummy
time complexity O(N)
space complexity O(N)*/

#include<stdio.h>

/*Left rotation function*/
 void left_rotate(int a[],int n){
    int temp=a[0];
    int dummy[n];

    for(int i=0;i<n-1;i++){
        dummy[i]=a[i+1];
    }
    a[n-1]=temp;

    for(int i=0;i<n-1;i++){
        a[i]=dummy[i];
    }

}

void print_the_array(int a[],int n) {
    printf("elementes of array are: \n");
    for(int i=0;i<n;i++){
        printf("%d\n",a[i]);
    }
}

/*Main function*/

int main(){
    int n,temp;

    printf("enter the size of array\n");
    scanf("%d",&n);

    int a[n];

    printf("enter the elements of array\n");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }

    left_rotate(a,n);

    print_the_array(a,n);

    return 0;
}


/*optimal approach:- single traversal array
time complexity O(N)
space complexity O(1)*/

#include<stdio.h>

/*left rotation function*/
void reversed_array(int a[],int n){
    int temp=a[0];

    for(int i=0;i<n-1;i++){
        a[i]=a[i+1];
    }
    a[n-1]=temp;
}

/*printing function*/
void print_the_array(int a[],int n) {
        printf("elements of the array are: \n");
        for(int i=0;i<n;i++){
            printf("%d \n",a[i]);
        }
}

/*main function*/
int main(){
    int n,temp;
    printf("enter the size of array\n");
    scanf("%d",&n);

    int arr[n];

    printf("enter the elements of array\n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    reversed_array(arr,n);

    print_the_array(arr,n);
    return 0;
}