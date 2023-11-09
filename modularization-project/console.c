#include <stdio.h>
#include "vector.h"

int main(){
	struct point_t p1 = make_point(9, 2);
	struct point_t p2 = make_point(20, -5);

	printf("Distance between p1 and p2 is %f\n", distance(p1, p2));

	normalize(&p1);

	printf("If p1 being a vector, then normalised p1 is (%f, %f)\n", p1.x, p1.y);
	
	rotate(&p2, M_PI * 25.0f/180.f);

	printf("p2 rotated by 60 degrees if (%f, %f)\n", p2.x, p2.y);
}

