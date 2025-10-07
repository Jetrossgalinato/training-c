// Problem: Find All Pairs with a Given Sum
// Description:
// Write a C program that reads an array of integers and a target sum, then finds and prints all pairs of elements whose sum equals the target value.

#include <stdio.h>

int main() {


    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    printf("Enter %d elements: ",size);

    int i,j;
    int arr[size];

    for(i = 0; i < size; i++){

        scanf("%d", &arr[i]);
    }

    int target = 0;
    printf("Enter target sum: ");
    scanf("%d", &target);

    printf("Pairs with sum %d: \n",target);

    int pairs = 0;
    for(i = 0; i < size; i++){
        for(j = i+1; j < size; j++){
            if(arr[i] + arr[j] == target){

               printf("(%d, %d)\n",arr[i],arr[j]);
               pairs++;
            }
        }
    }

    if(pairs == 0)
        printf("No pairs found.");


    return 0;
}
