// Problem: Find the Second Largest Element
// Description:
// Write a C program that finds the second largest element in an array. 
// The second largest is the largest element that is smaller than the maximum value.

#include<stdio.h>

int main(){

    int size;
    printf("Enter number of elements: ");
    scanf("%d",&size);

    printf("Input %d elements: ", size);
    
    int arr[size];
    for(int i = 0; i < size; i++){

        scanf("%d",&arr[i]);
    }

    int largest = arr[0];
    int second = arr[0];

    for(int i = 0; i < size; i++){

        if(arr[i] > largest){
            second = largest;
            largest = arr[i];
        }else if(arr[i] > second && arr[i] < largest){
            second = arr[i];
        }
    }

    if(second == largest){
        printf("No second largest element (all elements are the same)");
    }else{
        printf("Second largest element: %d", second);
    }
}   