#include <stdio.h>
#include<malloc.h>
#include "circle.h"
#include"jollyjumper.h"
#include <assert.h>

void printCircle(circle c) {
	printf("p.x: %d, p.y: %d, r: %d\n", c.p.x, c.p.y, c.r);
}

int main(void) {
	/*testing circles - make sure that you know how it works and what it is supposed to print out*/
	 circle c[5];
	fiveCircles(c);
	for (int i = 0; i < 5; i++) {
		printCircle(c[i]);
	}
	point p;
	p.x = 2;
	p.y = 2;
	translate(&c[1], &p);
	printCircle(c[1]);
	printf("isValid: %d", circleIsValid(&c[1]));

//excersize 7.b
	int size;
  int seq[size];
  printf("Enter the size of the input");
  scanf("%d", &size);
  printf("Enter the sequence of:\n");
  for (int i=0; i< size; i++){
    scanf("%d", &seq[i]);
  }
  if (isJollyJumber(seq,size)){
    printf("Is JollyJumber");
    }
    else {
    printf("Is Not JollyJumber");
    }
	return 0;

}
