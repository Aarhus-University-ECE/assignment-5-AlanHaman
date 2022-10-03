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


	/*readin the n numbers in the array numbers*/
// I decided to make some testcases instead of input
	int seq1[] = {1,4,2,3};
	isJollyJumber(seq1,4);
    int seq2 []= {3,4,2,5,1};
	isJollyJumber(seq2,5);
	int seq3 []= {7,4,2,5,1};
	isJollyJumber(seq3,5);
	
	return 0;

}
