#include <stdio.h>

int main(){

    int size;
    printf("Enter the number of elements: ");
    scanf("%d",&size);

    int arr[size];
    printf("Input %d elements: ", size);
    for(int i = 0; i < size; i++){

        scanf("%d", &arr[i]);
    }

    printf("Element frequences: ");
    int count = 0;

    for(int i = 0; i < size; i++){

        int duplicate = 0;
        //duplicate checker
        for(int j = 0; j < i; j++){
            if(arr[j] == arr[i]){
                duplicate = 1;
                break;
            }
        }

        //if not duplicate
        if(!duplicate){
            for(int k = 0; k < size; k++){

                if(arr[k] == arr[i]){
                    count++;
                }
            }
            if(count > 1){
                printf("\n%d occurs %d times",arr[i],count);
                count = 0;
            }else{
                printf("\n%d occurs %d time",arr[i],count);
                count = 0;
            }
        }
        
    }
    return 0;
}