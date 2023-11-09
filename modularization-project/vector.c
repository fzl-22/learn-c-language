#include "vector.h"

float magnitude(struct point_t p){
	return sqrtf(p.x * p.x + p.y*p.y);
}

void scale(struct point_t *p, float scale){
	p->x *= scale;
	p->y *= scale;
}

void normalize(struct point_t *p){
	float s = 1.0f / magnitude(*p);
	scale(p, s);
}

void rotate(struct point_t *p, float rad) {
	float sa = sinf(rad);
	float ca = cosf(rad);
	struct point_t cp = *p;

	p->x = cp.x * ca - cp.y * sa;
	p->y = cp.x * sa + cp.y * ca;
}

struct point_t make_point(float x, float y){
	struct point_t res = {x, y};
	return res;
}

float distance(struct point_t  p1, struct point_t p2){
	return magnitude(make_point(p1.x - p2.x, p1.y - p2.y));
}


