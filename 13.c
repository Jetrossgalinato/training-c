// Problem: Remove All Occurrences of a Specific Element
// Description:
// Write a C program that removes all occurrences of a specific element from an array. 
// The user provides the element to remove, and the program creates a new array without that element.

#include<stdio.h>

int main(){

    int size;

    printf("Enter the number of elements: ");
    scanf("%d",&size);

    int arr[size];

    printf("Input %d elements: ",size);
    for(int i = 0; i < size; i++){

        scanf("%d",&arr[i]);
    }

    int target;
    printf("\nEnter element to remove: ");
    scanf("%d",&target);

    int newArr[size];
    int count = 0;
    for(int i = 0; i < size; i++){

        if(arr[i] != target){
            newArr[count] = arr[i];
            count++;
        }else{
            continue;
        }
    }

    if(!count){
        printf("Array is empty (All elements removed)");
    }else{
        printf("Array after removal: ");
        for(int i = 0; i < count; i++){

            printf("%d ",newArr[i]);
        }
    }

}