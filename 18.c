// Problem: Find the Sum and Average of Array Elements
// Task:
// Write a C program that takes an array of integers as input, calculates the sum of all elements, 
// and computes the average. Print both the sum and average.

#include<stdio.h>

int main(){

    int size;

    printf("Enter the number of elements: ");
    scanf("%d",&size);

    float arr[size];

    printf("Input %d elements: ",size);

    for(int i = 0; i < size; i++){

        scanf("%f",&arr[i]);
    }

    float sum = 0;
    for(int i = 0; i < size; i++){

        sum += arr[i];
    }

    printf("\nSum: %.2f", sum);

    float average = sum / size;

    printf("\nAverage: %.2f", average);

    return 0;
}