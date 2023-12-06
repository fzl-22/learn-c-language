#include <stdio.h>

int main(int argc, char *argv[]){
#if defined(__linux__)
  printf("OS is Linux\n");
#elif defined(WIN32)
  printf("OS is Windows\n");
#elif defined(APPLE) || defined(DARWIN)
  printf("OS is MacOS\n");
#else
  #error "unsupported os"
#endif /* if 0 */
}
