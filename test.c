#include<stdio.h>

int main(){

    int size = 5;

    for(int i = 0; i < size; i++){

        if(i == 3){

            fprintf(stderr,"Error! it's a number 3!\n");
            return 1;
        }

        printf("\n %d",i);

    }


    return 0;
}
