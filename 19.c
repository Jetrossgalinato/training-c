// Problem: Count Vowels in a String
// Write a program that takes a string as input from the user and counts how many vowels 
// (a, e, i, o, u - both uppercase and lowercase) are present in the string

#include<stdio.h>
#include<string.h>
#include<ctype.h>
#define MAX 15

int main(){

    char word[MAX];

    printf("Input: ");
    fgets(word, MAX, stdin);

    int size = strlen(word);
    int count = 0;
    for(int i = 0;i < size; i++){
        
        word[i] = tolower(word[i]);
        if(word[i] == 'a' || word[i] == 'e' || word[i] == 'i' || word[i] == 'o' || word[i] == 'u'){
            count++;
        }
    }

    if(!count){
        printf("\nThere are no vowels!");
    }else{
        printf("\nOutput: Vowels: %d",count);
    }

    return 0;
}