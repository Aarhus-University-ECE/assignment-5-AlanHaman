#include "jollyjumper.h"
#include <stdbool.h>
#include <malloc.h>
#include <stdlib.h>
#include <assert.h>


int isJollyJumber(const int seq[], int size) {
    bool diffs_found[99];
/*post: answer to exercise 7.a*/
for (int i =1;i<size;i++){
int current = seq[i];
int previous = seq [i-1];
int  dif =  current - previous;
if (dif <0){
    dif = dif* -1;
}

diffs_found [dif]=true;


if (dif ==0||dif >=size){
printf("Not a jolly jumper \n");
}
else 
{   
  printf ("is a jollyjumper\n");
  }
return 0; 



}

    return 1;
}
