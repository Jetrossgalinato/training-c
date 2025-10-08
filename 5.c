// Problem: Rotate Array to the Left
// Description:
// Write a C program that rotates an array to the left by a given number of positions. 
// Each rotation moves every element one position to the left, and the first element wraps around to the last position.

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

    int rot;
    printf("Enter number of rotations: ");
    scanf("%d",&rot);

    int temp;
    for(int i = 0; i < rot; i++){

        temp = arr[0];
        for(int j = 0; j < size - 1; j++){

            arr[j] = arr[j+1];
        }
        arr[size - 1] = temp;
    }

    printf("Array after %d rotation: ",rot);

    int k = 0;
    while ( k < size){

        printf("%d ",arr[k]);
        k++;
    }

    return 0;
}