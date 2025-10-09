// Problem: Check if Array is Palindrome
// Description:
// Write a C program that checks if an array is a palindrome. 
// An array is a palindrome if it reads the same forwards and 
// backwards (i.e., the first element equals the last, the second equals the second-to-last, etc.).

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

    int palindrome = 1;
    for(int i = 0; i < size/2; i++){

        if(arr[i] != arr[size - 1 - i]){
            palindrome = 0;
            break;
        }
    }
    
    if(palindrome){
        
        printf("Array is a palindrome");
    }else{
        printf("Array is not a palindrome");
    }

    return 0;
}