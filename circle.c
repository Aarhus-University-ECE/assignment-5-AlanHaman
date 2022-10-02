#include <malloc.h>
#include "circle.h"
#include <stdbool.h>

void fiveCircles(circle c[]) {
/*post: returns an array with five circles - solution to 6.b*/
for (int i=0; i<5; i++){
    struct circle c[4];
    c[i].r=i;
    c[i].p.x=i;
    c[i].p.y=i;
    printf("\nradius: %d, x:%d, y:%d, ",c[i].r, c[i].p.x, c[i].p.y);
  }
}

bool circleIsValid(const circle * c) {
/*post: answer to exercise 6.c*/
  if (c->r>0){
    return true; 
    }
  else{ 
    return false;
  }
  return 0;
}
	

void translate(circle* c, const point* p) {
/*ansver to exercise 6.d*/

c[0].p.x=p->x+c[0].p.x;
c[0].p.y=p->y+c[0].p.y;
}



