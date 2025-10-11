// Problem: Find Sum of Elements at Even and Odd Positions
// Description:
// Write a C program that calculates the sum of elements at even positions (indices 0, 2, 4, ...) 
// and the sum of elements at odd positions (indices 1, 3, 5, ...) separately. Then print both sums.

#include<stdio.h>

int main(){

    int size;
    printf("Enter the number of elements: ");
    scanf("%d",&size);

    printf("Input %d elements: ", size);
    int arr[size];

    for(int i = 0; i < size; i++){

        scanf("%d",&arr[i]);
    }

    int evenSum = 0, oddSum = 0;

    for(int i = 0; i < size; i++){

        if(i%2 == 0){
            evenSum += arr[i];
        }else{
            oddSum += arr[i];
        }
    }

    printf("\nSum of elements at even positions: %d", evenSum);

    printf("\nSum of elements at odd positions: %d", oddSum);

    return 0;
}