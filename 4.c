// Problem: Rotate Array to the Right
// Description:
// Write a C program that rotates an array to the right by a given number of positions. 
// Each rotation moves every element one position to the right, and the last element wraps around to the first position.

#include <stdio.h>

int main(){

    int size = 0;

    printf("Enter the number of elements: ");
    scanf("%d",&size);

    int arr[size];
    printf("Input %d elements: ",size);
    for(int i = 0; i < size; i++){

        scanf("%d",&arr[i]);
    }

    int rot = 0;
    printf("Enter number of rotations: ");
    scanf("%d",&rot);

    int temp;
    for(int i = 0; i < rot; i++){
        temp = arr[size - 1];
        for(int j = size - 1; j > 0; j--){
            
            arr[j] = arr[j-1];
        }
        arr[0] = temp;
    }

    printf("Array after %d rotations: ", rot);
    int k = 0;
    while(k < size){

        printf("%d ",arr[k]);
        k++;
    }

    return 0;
}