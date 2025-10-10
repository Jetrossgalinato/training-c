// Problem: Separate Even and Odd Numbers
// Description:
// Write a C program that separates all even and odd numbers from an array into two different arrays. 
// Then print both arrays.

#include<stdio.h>

int main(){
    int size;

    printf("Enter the number of elements: ");
    scanf("%d",&size);

    int arr[size], odd[size], even[size];
    int firstodd = 1, firsteven = 1;
    int evenCount = 0, oddCount = 0;

    printf("Input %d elements: ",size);
    for(int i = 0; i < size; i++){

        scanf("%d",&arr[i]);
    }
    int i = 0;
    while(i < size){

        if(arr[i]%2 == 0){
            even[evenCount] = arr[i];
            evenCount++;
            
        }else if(arr[i]%2 != 0){
            odd[oddCount] = arr[i];
            oddCount++;
            
        }
    i++;
    }

    if(evenCount == 0){
        printf("\nEven numbers: No even numbers");
    }else{
        printf("\nEven numbers: ");
        for(int i = 0; i < evenCount; i++){
            printf("%d ",even[i]);
        }
    }
    
    if(oddCount == 0){
        printf("\nOdd numbers: No odd numbers");
    }else{
        printf("\nOdd numbers: ");
        for(int i = 0; i < oddCount; i++){
            printf("%d ",odd[i]);
        }
    }

    
    return 0;
}