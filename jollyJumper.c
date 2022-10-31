#include "jollyjumper.h"
#include <stdbool.h>
#include <malloc.h>
#include <stdlib.h>
#include <assert.h>


int isJollyJumber(const int seq[], int size) {
/*post: answer to exercise 7.a*/

int diff; 
bool diffs_found[size-1]; 

for (int i = 0; i < size; i++) // for loop
{
    diffs_found[i] = false;
}


for (int i = 0; i<size-1; i++){
    diff = seq[i] - seq[i+1]; // Calculates the difference of the first and next number in the sequence
    if (diff < 0) // If-else statement, checks if difference is negative, 
    {
        diff = -diff;
    }

    if (diff == 0 || diff >= size || diffs_found[diff-1] == true){ //if- else statement
        break;
    }
    else{
        diffs_found[diff-1] = true; // Sets value checked to be true if preconitions are fulfilled
    }
}

for (int i = 0; i < size-1; i++) 
{
    if (diffs_found[i] == false)
    {
        return 0;
    }
}

return 1;
}
