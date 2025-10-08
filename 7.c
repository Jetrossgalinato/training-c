// Problem: Find the Element with the Highest Frequency
// Description:
// Write a C program that finds the element that appears most frequently in an array and prints 
// both the element and its frequency. If there are multiple elements with the same highest frequency, print any one of them.

#include<stdio.h>

int main(){

    int size;
    printf("Enter the number of elements: ");
    scanf("%d",&size);

    printf("Input %d elements: ",size);
    int arr[size];

    for(int i = 0; i < size; i++){

        scanf("%d", &arr[i]);
    }

    printf("Element with the highest frequency: ");

    int max = 0;
    int mostFreq = 0;
    for(int i = 0; i < size; i++){
        int duplicate = 0;
        int count = 0;
        //duplicate checker
        for(int j = 0; j < i; j++){

            if(arr[i] == arr[j]){
                duplicate = 1;
                break;
            }
        }

        //start counting if not duplicate
        if(!duplicate){

            for(int k = 0; k < size; k++){

                if(arr[k] == arr[i]){
                    count++;
                }
            }
            
            if(count > max){
                max = count;
                mostFreq = arr[i];
            }  
            
        }
    }

    printf("\n%d (occurs %d times)",mostFreq,max);

    return 0;
}