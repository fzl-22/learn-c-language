#include <stdio.h>
#include "calc.h"

// stringify #
#define print_size(t) printf("Ukuran dari %s adalah %lu\n", #t, sizeof(t))
// token pasting
#define CREATE_VAR(n, x) int var_##n = (x)

int main(void){
  printf("Hasil penambahannya adalah %d\n", sum(20, 30));
  printf("Ini ada di file %s baris %d\n", __FILE__, __LINE__);
  print_size(float);
  print_size(double);

  CREATE_VAR(567, 20000);
  printf("Nilai dari var_567 adalah %d\n", var_567);
  return 0;
}
