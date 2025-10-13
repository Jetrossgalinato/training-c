// Problem: Reverse a String
// Write a program that takes a string as input from the user and prints the string in reverse order.
#define MAX 50
#include<stdio.h>
#include<string.h>

int main(){

    char word[MAX];

    printf("Input: ");
    fgets(word,MAX,stdin);

    char temp;
    int size = strlen(word);
    
    if(word[size - 1] == '\n'){
        word[size - 1] = '\0';
        size--;
    }

    for(int i = 0; i < size/2; i++){

        temp = word[size - i - 1];
        word[size - i - 1] = word[i];
        word[i] = temp;
    }

    printf("\nOutput: %s",word);

    return 0;
}