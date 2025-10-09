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

    //get the maximum value
    int max = arr[0];
    for(int j = 1; j < size; j++){

        if(arr[j] > max){
            max = arr[j];
        }
    }

    int missing = 0;
    int firstMiss = 1;
    for(int i = 1; i <= max; i++){

        int found = 0;
        for(int j = 0; j < size; j++){

            if(arr[j] == i){
                found = 1;
                break;
            }
        }

        if(!found){
           if(firstMiss){
                printf("Missing numbers: ");
                firstMiss = 0;
           }

           printf("%d ", i);
           missing = 1;
        }
    }

    if(!missing){
        printf("No missing numbers");
    }
    
    return 0;
}