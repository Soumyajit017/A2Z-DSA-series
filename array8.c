/*Move all zeros to the end of the array
Brute force approach:-
using two arrays, one original and one dummy
time complexity O(2N)
space complexity O(N)*/

#include<stdio.h>
 
/*zero_swap function*/
void zero_swap(int a[],int n){
    int temp[n];
    int index=0;
    /*storing the non zero elements*/
    for(int i=0;i<n;i++){
        if(a[i]!=0){
            temp[index++] = a[i]; 
        }
    }
    while(index<n){
        temp[index++]=0; /*adding the zeros*/
    
    /*copying the non zero elements to the original array*/
    for(int i=0;i<n;i++){
        a[i]=temp[i];
        }
    }
}

    /*printing the array function*/
    void print_the_array(int a[],int n){
        printf("elements of array are: \n");
        for(int i=0;i<n;i++){
            printf("%d\n",a[i]);
        }
    }
 

/*Main function*/
int main(){
    int n;

    printf("enter the size of array\n");
    scanf("%d",&n);

    int a[n];
    printf("enter the elements of array\n");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }

    zero_swap(a,n);
    print_the_array(a,n);
    return 0;   
} 

/*optimal solution:- single traversal array using
two pointers i & j
time complexity O(N)
space complexity O(1)*/

#include<stdio.h>

/*zero swap function*/
void zero_swap(int a[],int n){
    int j=-1;
    int temp[n];
    /*finding out the first non-zeroth element*/
    for(int index=0;index<n;index++){
        if(a[index]==0){
            j=index;
            break;
        }
    }
    if(j==-1)
    return ;

    /*assigning i to the next element of j & swap if found non zeroth*/
    for(int i=j+1;i<n;i++){
        if(a[i]!=0){
           int temp=a[i];
           a[i]=a[j];
           a[j]=temp;
           j++;

        }
    }
}    

void print_the_array(int a[],int n){
        printf("elements of the array are: \n");
        for(int i=0;i<n;i++){
            printf("%d \n",a[i]);
        }
}   

/*main function*/
int main(){
    int n;

    printf("enter the size of array\n");
    scanf("%d",&n);

    int a[n];
    printf("enter the elements of array\n");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }

    zero_swap(a,n);
    print_the_array(a,n);
    return 0;
}