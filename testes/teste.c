// gcc -shared -o libhello.so -fPIC hello.c

#include <stdio.h>
#include "myfunction.h"


int main(void) {

  char hello[] = "Ola";

  printf("%s\n", hello);
  printf("%d\n", sum_of_values(2,3));

  return 0;
}
