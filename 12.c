// Problem: Count Positive, Negative, and Zero Elements
// Description:
// Write a C program that counts how many positive numbers, 
// negative numbers, and zeros are in an array. Then print the counts for each category.

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

    int posCount = 0, negCount = 0, zeroCount = 0;

    for(int i = 0; i < size; i++){

        if(arr[i] > 0){
            posCount++;
        }else if(arr[i] < 0){
            negCount++;
        }else{
            zeroCount++;
        }
    }

    printf("\nPositive numbers: %d",posCount);
    
    printf("\nNegative numbers: %d",negCount);

    printf("\nZeros: %d",zeroCount);
    return 0;
}