// Problem: Check if a String is a Palindrome

// Description:
// Write a C program that checks whether a given string is a palindrome — meaning it reads the same backward and forward (ignoring spaces and case).

#define MAX 50
#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main(){

    char string[MAX], clean[MAX];
    int j = 0;

    printf("Enter a string: ");
    fgets(string,MAX,stdin);

    

    for(int i = 0; string[i] != '\0'; i++){

        if(isalpha(string[i])){
            clean[j++] = tolower(string[i]);
        }
    }
    clean[j] = '\0';

    int size = strlen(clean);
    int isPalindrome = 1;
    for(int i = 0; i < size/2; i++){

        if(clean[i] != clean[size - 1 - i]){

            isPalindrome = 0;
            break;
        }
    }

    if(isPalindrome){
        printf("\nThe string is a palindrome");
    }else{
        printf("\nThe string is not a palindrome");
    }

    return 0;
}