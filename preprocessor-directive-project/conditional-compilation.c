#include <stdio.h>

#ifdef DEBUG
#define PRINT_DEBUG(...) printf(__VA_ARGS__)
#else
#define PRINT_DEBUG(...)
#endif

int main(int argc, char *argv[]){
  PRINT_DEBUG("This is debug message");
  return 0;
}
