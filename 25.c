// Create a program to print out the number of lines in the text file

#define MAX 100
#include<stdio.h>

int main(){

    FILE *fp = fopen("text1.txt","r");

    if(fp == NULL){

        printf("Error opening a file. \n");
        return 1;
    }

    char buffer[MAX];
    int count = 0;

    
    while(fgets(buffer, sizeof(buffer),fp)) {
        count++;
    }

    printf("The file text1.txt has %d lines",count);

    fclose(fp);
    return 0;
}
