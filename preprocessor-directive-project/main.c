// replace with stdio source code
#include <stdio.h>

// replace a symbol with a value, not store it in memory like variable
// macro
#define PI 3.14

// parameterized macro
#define MIN(a, b) (((a) < (b)) ? (a) : (b))

// variadics macro
#define CETAK(...) printf(__VA_ARGS__)

int main(void){
  float a = 3.78f;
	float b = 6.56f;

	int x = 4;
	int y = 20;

  char m = 'm';
  char n = 'n';

	printf("Min dari a dan b adalah : %.3f\n", MIN(a, b));
	printf("Min dari x dan y adalah: %d\n", MIN(x, y));
  printf("Min dari m dan n adalah: %c\n", MIN(m, n));

	CETAK("Hello, world! My name is %s, and age %d years old", "Sally", 19);
	return 0;
}
