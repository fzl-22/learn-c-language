#include <stdio.h>

void add5(int *x){ // function pass by reference
	*x += 5;
}

int main(){
	int a = 10;
	

	printf("Niilai a adalah %d\n", a);
	add5(&a); // pass by reference
	printf("Nilai a sekarang adalah %d\n", a);
	return 0;
}
