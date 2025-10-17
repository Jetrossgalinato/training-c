// Count Words in a Sentence

// Description: Count how many words are in a string (words are separated by spaces).

#define MAX 100
#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main(){

    char string[MAX];
    printf("Enter a string: ");
    fgets(string, MAX, stdin);

    int size = strlen(string);

    if(string[size - 1] == '\n'){
        string[size - 1] = '\0';
        size--;
    }

    int count = 0, in_word = 0;

    for(int i = 0; i < size; i++){

        if(!isspace(string[i]) && in_word == 0){
            count++;
            in_word = 1;
        }

        if(isspace(string[i])){
            in_word = 0;
        }
    }

    printf("Output: %d",count);

    return 0;
}