// // "Create a C structure named Reindeer with two members: name and year. 
// Then create an array of reindeers using malloc() containing the original 8 reindeers. 
// Afterwards, increase the size of the array using realloc() to accommodate Rudolph as well. 
// Finally, print out the name and birth year of the 9th reindeer following the format below."

#define MAX 20
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct Reindeer
{
    char name[MAX];
    int age;
};


int main(){

    struct Reindeer *arr = malloc(8 * sizeof(struct Reindeer));

    strcpy(arr[0].name , "Dasher");
    arr[0].age = 1820;
    strcpy(arr[1].name , "Dancer");
    arr[1].age = 1823;
    strcpy(arr[2].name , "Prancer");
    arr[2].age = 1800;
    strcpy(arr[3].name , "Vixen");
    arr[3].age = 1812;
    strcpy(arr[4].name , "Comet");
    arr[4].age = 1758;
    strcpy(arr[5].name , "Cupid");
    arr[5].age = 1799;
    strcpy(arr[6].name , "Donner");
    arr[6].age = 1776;
    strcpy(arr[7].name , "Blitzen");
    arr[7].age = 1770;

    struct Reindeer *temp = realloc(arr,9 * sizeof(struct Reindeer));

    if(temp == NULL){
        fprintf(stderr,"Failed to realloc memory\n");
        free(arr);
        return 1;
    }else{
        arr = temp;
    }

    strcpy(arr[8].name, "Rudolph");
    arr[8].age = 1939;

    printf("The 9th reindeer is %s, born in %d\n",arr[8].name,arr[8].age);

    free(arr);
    return 0;
}