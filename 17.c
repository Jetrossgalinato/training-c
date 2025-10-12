// Problem: Find Duplicates in an Array
// Task: Write a C program that takes an array of integers as input and identifies all duplicate elements in the array, 
// printing each duplicate element only once.

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

    int firstDuplicate = 0, duplicate = 0;
    for(int i = 0; i < size - 1; i++){
        int count = 0;
        for(int j = i + 1; j < size; j++){
            int firstOccurence = 1;
            if(arr[i] == arr[j]){

                count++;
                firstDuplicate = 1;
                duplicate = 1;
                for(int k = 0; k < i; k++){

                    if(arr[i] == arr[k]){

                        firstOccurence = 0;
                    }
                }
                if(firstDuplicate){
                    printf("Duplicate elements: ");
                    firstDuplicate = 0;
                }

                if(firstOccurence){
                    printf("%d ",arr[i]);
                    break;
                }
            }
        }
    }

    if(!duplicate){
        printf("No Duplicates found");
    }
    
    return 0;
}