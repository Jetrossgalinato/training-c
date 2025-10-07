// Problem: Merge Two Sorted Arrays
// Description:
// Write a C program that takes two already sorted arrays as input and merges them into a single sorted array. 
// The resulting array should contain all elements from both arrays in sorted order.

#include <stdio.h>

int main(){

    int first_size;
    printf("Enter size of first array: ");
    scanf("%d",&first_size);

    printf("Input %d sorted elements: ",first_size);
    
    int arr1[first_size];
    for(int i = 0; i < first_size; i++){

        scanf("%d",&arr1[i]);
    }

    int second_size;
    printf("Enter size of second array: ");
    scanf("%d",&second_size);

    printf("Input %d sorted elements: ",second_size);
    
    int arr2[second_size];
    for(int j = 0; j < second_size; j++){

        scanf("%d",&arr2[j]);
    }

    int merge_size = first_size + second_size;
    int arr3[merge_size];

    int i = 0,j = 0, k = 0;
    

    while(i < first_size && j < second_size){
        if(arr1[i] < arr2[j]){
            arr3[k] = arr1[i];
            i++;
        }else{
            arr3[k] = arr2[j];
            j++;
        }
        k++;
    }

    while(i < first_size){

        arr3[k] = arr1[i];
        i++;
        k++;
    }
    
    while(j < second_size){

        arr3[k] = arr2[j];
        j++;
        k++;
    }

    printf("Merged sorted array: ");
    for(i = 0; i < merge_size; i++){

        printf("%d ",arr3[i]);
    }

    return 0;
}