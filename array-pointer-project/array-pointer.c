#include <stdio.h>

/*
 * Kesimpulan: 
 * - array adalah pointer
 * - pointer adalah array
 */

void print_arr(int arr[], int n){
	int i;

	for(i = 0; i < n; i++){
		printf("%d ", arr[i]);
	}

	printf("\n");
}

int main(){
	// array disimpan di stack
	int xs[3] = {7, 9, 5};
	int *px = xs;

	print_arr(xs, 3);

	px++;
	printf("px setelah  setelah di++ %d\n", *px);

	// terjadi buffer overrun ketika panjang 3
	// karena pointer jalan di luar ukuran array
	// beresiko akan mengakses garbage
	// atau mengakses kode lain (remote code execution)
	// stack overflow merupakan jenis dari buffer overrun
	// bisa menyebabkan vulnerabilities
	print_arr(px, 3);

	return 0;
}
