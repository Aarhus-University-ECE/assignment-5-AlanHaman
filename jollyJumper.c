#include "jollyjumper.h"
#include <stdbool.h>
#include <malloc.h>
#include <stdlib.h>
#include <assert.h>


int isJollyJumber(const int seq[], int size) {
  int array[size - 1];
  for (int i = 0; i < size - 1; i++)
    array[i] = 0;
    
// loop to calculate the difference between 2 adjacent numbers 
  for (int i = 0; i < size - 1; i++) {
    int sum = (seq[i] > seq[i + 1]);
    seq[i] - seq[i + 1];
    seq[i + 1] - seq[i];
      
// to check if we have a jullyjumper
    if (sum > 0 && sum < size)
      array[sum - 1] = 1;
  }

  for (int i = 0; i < size; i++) {
    if (array[i] == 0)
      return 0;
  }
  return 1;
}
