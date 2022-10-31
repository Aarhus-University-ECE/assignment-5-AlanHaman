#include <malloc.h>
#include "circle.h"
#include <stdbool.h>

void fiveCircles(circle c[]) {
/*post: returns an array with five circles - solution to 6.b*/
for (int i = 0; i < 5; i++) //Loop sets all indices to a value i + 1,
{
	c[i].p.x = i+1;
	c[i].p.y = i+1;
	c[i].r = i+1;
}

}

int circleIsValid(const circle * c) {
/*post: answer to exercise 6.c*/
if(c->r > 0){ // c defers to r is checked to be larger than 0
	return 1; // 1 = true
}
else{
	return 0; // 0 = false
}
}

void translate(circle* c, const point* p) {
/*ansver to exercise 6.d*/
c->p.x += p->x; 
c->p.y += p->y; 


}
