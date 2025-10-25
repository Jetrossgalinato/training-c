/*Create a C structure named Reindeer with two members: name and year. Then create and array of reindeers using Dynamic Memory Allocation 
containing the 9 reindeers. Finally, print out the names of the reindeers born after 1800.*/

#define MAX 20
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Reindeer{
        char name[MAX];
        int year;
    };

int main() {
    
    struct Reindeer* arr = malloc(9 * sizeof(struct Reindeer));

    if(arr == NULL){

        fprintf(stderr, "Memory Allocation Failed\n");
        return 1;
    }
    
    strcpy(arr[0].name, "Dasher");
    arr[0].year = 1820;
    strcpy(arr[1].name, "Dancer");
    arr[1].year = 1823;
    strcpy(arr[2].name, "Prancer");
    arr[2].year = 1800;
    strcpy(arr[3].name, "Vixen");
    arr[3].year = 1812;
    strcpy(arr[4].name, "Comet");
    arr[4].year = 1758;
    strcpy(arr[5].name, "Cupid");
    arr[5].year = 1799;
    strcpy(arr[6].name, "Donner");
    arr[6].year = 1776;
    strcpy(arr[7].name, "Blitzen");
    arr[7].year = 1770;
    strcpy(arr[8].name, "Rudolph");
    arr[8].year = 1939;
    
    printf("The reindeers born after 1800 are: ");
    
    for(int i = 0; i < 9; i++){
        if(arr[i].year > 1800){
            printf("\n%s",arr[i].name);
        }
    }

    printf("\n");
    
    free(arr);
    
    return 0;
}