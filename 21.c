// Vowel and Consonant Counter
// Write a C program that counts the number of vowels and consonants in a string provided by the user.

#define MAX 50
#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main(){

    char word[MAX];

    printf("Enter a string: ");
    fgets(word,MAX,stdin);

    int size = strlen(word);
    int vowelCount = 0, consonantCount = 0;

    for(int i = 0; i < size; i++){

        word[i] = tolower(word[i]);
        
        if(isalpha(word[i])){

            if(word[i] == 'a' || word[i] == 'e' || word[i] == 'i' || word[i] == 'o' || word[i] == 'u'){

                vowelCount++;
            }else{

                consonantCount++;
            }
        }
    }

    if(!vowelCount){
        printf("\nVowels: None");
    }else{
        printf("\nVowels: %d",vowelCount);
    }

    if(!consonantCount){
        printf("\nConsonants: None");
    }else{
        printf("\nConsonants: %d",consonantCount);
    }

    return 0;
}