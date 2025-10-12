// Problem: Reverse Array in Groups
// Description:
// Write a C program that reverses an array in groups of a specified size. 
// If the array size is not perfectly divisible by the group size, the remaining elements should be reversed as a smaller group.

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

    int group;
    printf("Enter group size: ");
    scanf("%d",&group);

    for(int start = 0; start < size; start += group){

        int end = start + group - 1;
        if(end >= size){
            end = size - 1;
        }

        int left = start;
        int right = end;

        while(left < right){

            int temp = arr[left];
            arr[left] = arr[right];
            arr[right] = temp;
            
            left++;
            right--;
        }
    }

    printf("Array after reversing in groups: ");
    for(int i = 0; i < size; i++){

        printf("%d ",arr[i]);
    }
    return 0;
}