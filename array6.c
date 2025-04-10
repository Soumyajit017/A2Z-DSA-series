/*rotate array by k elements either in left or right direction
Brute Force Approach
time complexity O(N)
space complexity O(K)*/
#include<stdlib.h>
#include<stdio.h>

void rotateright(int a[], int k, int n) {
    int i;
    int temp[k];

    k = k % n;

    // Store last k elements
    for(i = 0; i < k; i++) {
        temp[i] = a[n - k + i];
    }

    // Shift remaining elements to the right
    for(i = n - 1; i >= k; i--) {
        a[i] = a[i - k];
    }

    // Copy back k elements at beginning
    for(i = 0; i < k; i++) {
        a[i] = temp[i];
    }
}

void rotateleft(int a[], int k, int n) {
    int i;
    int temp[k];

    k = k % n;

    // Store first k elements
    for(i = 0; i < k; i++) {
        temp[i] = a[i];
    }

    // Shift remaining elements to the left
    for(i = k; i < n; i++) {
        a[i - k] = a[i];
    }

    // Copy back k elements at end
    for(i = 0; i < k; i++) {
        a[n - k + i] = temp[i];
    }
}

int main() {
    int i, j, k, n;

    printf("Enter the size of the array:\n");
    scanf("%d", &n);
    int a[n];

    printf("Enter the elements of the array:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    printf("Enter the number of elements to rotate:\n");
    scanf("%d", &k);

    printf("Enter the direction (1:left, 2:right):\n");
    scanf("%d", &j);

    if(j == 1) {
        rotateleft(a, k, n);
    } else if(j == 2) {
        rotateright(a, k, n);
    } else {
        printf("Invalid direction.\n");
        return 1;
    }

    printf("Rotated array:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");

    return 0;
}

/*Optimal approach:- Reversal method
time complexity O(N)
space complexity O(1):- single array traversal*/

#include<stdio.h>

/*Reverse the array logic*/

void reverse(int a[],int start,int end){
    while(start<end){
        int temp=a[start];
        a[start]=a[end];
        a[end]=temp;
        start++;
        end--;
    }
}

/*Function to reverse array & right rotation*/
    void reverse_right(int a[],int k,int n){
        reverse(a,n-k,n-1);
        reverse(a,0,n-k-1);
        reverse(a,0,n-1);
    }
    /*function to reverse array & left rotation*/

    void reverse_left(int a[],int n,int k){
        reverse(a,0,k-1);
        reverse(a,k,k-n-1);
        reverse(a,0,n-1);
    }

    /*print the rotated array*/
    void print_rotated_array(int a[],int n){
        printf("elements of array are: \n");
        for(int i=0;i<n;i++){
            printf("%d\n",a[i]);
        }
    }

/*Main function*/
int main(){
    int n,i,j,k;
    printf("enter the size of array\n");
    scanf("%d",&n);
    int a[n];
    printf("enter the elements of array\n");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }

    printf("enter the number of elements to rotate\n");
    scanf("%d",&k);

    printf("enter the direction(1:left,2:right)\n");
    scanf("%d",&j);

    if(j==1){
        reverse_left(a,k,n);
    }
    else if(j==2){
        reverse_right(a,k,n);
    } else {
        printf("invalid direction\n");
        return 1;
    }
    print_rotated_array(a,n);
    return 0;
}
