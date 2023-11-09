#include <stdio.h>

union value_t {
	int i;
	float f;
	char c;
};

int main() {
	union value_t v;
	union value_t *pv;

//	v.i = 65;
	v.c = 'X';

	printf("v.i = %d\n", v.i);
	printf("v.f = %f\n", v.f);
	printf("v.c = %c\n", v.c);

	v.i = 678;

	printf("v.i = %d\n", v.i);
    printf("v.f = %f\n", v.f);
	printf("v.c = %c\n", v.c);

	v.f = 7.7;

	printf("v.i = %d\n", v.i);
	printf("v.f = %f\n", v.f);
	printf("v.c = %c\n", v.c);

	pv = &v;

	printf("pv.i = %d\n", pv->i);
	printf("pv.f = %f\n", pv->f);
	printf("pv.c = %c\n", pv->c);

	return 0;

}
