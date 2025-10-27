// Create a program that converts the characters from uppercase to lowercase, and vice versa.

#define MAX 20
#include<stdio.h>
#include<ctype.h>

int main(){

    FILE *fp = fopen("text2.txt","r");

    if(fp == NULL){

        fprintf(stderr,"Error opening the file!\n");
        return 1;
    }

    int current;

    while ((current = fgetc(fp)) != EOF){

        if(islower(current)){
            printf("%c",toupper(current));
        }else if(isupper(current)){
            printf("%c",tolower(current));
        }else{
            printf("%c",current);
        }
    }

    printf("\n");

    fclose(fp);
    return 0;
}