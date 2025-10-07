// Problem: Concatenate Two Arrays
// Description:
// Write a C program that takes two arrays as input and combines them into a single array
//  by placing all elements from the first array followed by all elements from the second array. 
//  No sorting needed—just simple concatenation!

#include <stdio.h>

int main(){

    int first_size;
    printf("Enter size of first array: ");
    scanf("%d",&first_size);

    printf("Input %d elements: ",first_size);
    int arr1[first_size];
    for(int i = 0; i < first_size; i++){

        scanf("%d",&arr1[i]);
    }

    int second_size;
    printf("Enter size of second array: ");
    scanf("%d",&second_size);

    printf("Input %d elements: ",second_size);
    int arr2[second_size];
    for(int j = 0; j < second_size; j++){

        scanf("%d",&arr2[j]);
    }

    printf("Concatenated array: ");

    int i = 0, j = 0, k = 0;

    int catsize = first_size + second_size;
    int arr3[catsize];
    while (i < first_size)
    {
        arr3[k] = arr1[i];
        printf("%d ",arr3[k]);
        i++;
        k++;
    }
    
    while (j < second_size)
    {
        arr3[k] = arr2[j];
        printf("%d ",arr3[k]);
        j++;
        k++;
    }

    return 0;
}