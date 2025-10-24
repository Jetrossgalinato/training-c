//Problem: Create a program to print out the number of words in the text file

#include<stdio.h>
#include<ctype.h>

int main(){

    FILE *fp = fopen("text2.txt","r");

    if(fp == NULL){

        printf("Error opening the file! \n");
    }

    int current, prev = ' ';
    int words = 0;

    while ((current = fgetc(fp)) != EOF)
    {
        if(!isspace(current) && isspace(prev)){
            words++;
        }
        prev = current;
    }

    printf("The file text2.txt contains %d words",words);
    
    fclose(fp);
    return 0;
}