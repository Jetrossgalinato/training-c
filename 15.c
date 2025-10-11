// Problem: Find the Longest Consecutive Sequence Length
// Description:
// Write a C program that finds the length of the longest sequence of consecutive identical elements in an array.
// For example, in [1][2][2][2][3][4][4], the longest sequence is three 2's in a row.

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

    int maxCount = 1, maxElement = arr[0];
    int currentCount = 1, currentElement = arr[0];

    for(int i = 1; i < size; i++){

        if(arr[i] ==  currentElement){
            currentCount++;
        }else{
            if(currentCount > maxCount){
                maxCount = currentCount;
                maxElement = currentElement;
            }
            currentElement = arr[i];
            currentCount = 1;
        }
    }
    
    if(currentCount > maxCount){
        maxCount = currentCount;
        maxElement = currentElement;
    }

    if(maxCount > 1){
        printf("Longest consecutive sequence: %d appears %d times",maxElement,maxCount);
    }else{
        printf("Longest consecutive sequence: %d appears %d time",maxElement,maxCount);
    }
    return 0;
}