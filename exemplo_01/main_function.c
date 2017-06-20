// gcc -shared -o libhello.so -fPIC hello.c

#include <stdio.h>
#include "sumOfMultiplesOfThreeAndFive.h"


int main(void) {

  printf("%d\n", sumOfMultiplesOfThreeAndFive(10));

  return 0;
}
