#ifndef VECTOR_H
#define VECTOR_H

#include <math.h>

// Fungsi matematika untuk trigonometri
struct point_t {
	float x;
	float y;
};

float magnitude(struct point_t p);
void scale(struct point_t *p, float scale);
void normalize(struct point_t *p);
void rotate(struct point_t *p, float rad);
struct point_t make_point(float x, float y);
float distance(struct point_t  p1, struct point_t p2);
#endif
