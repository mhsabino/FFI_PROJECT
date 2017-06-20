#include "sumOfMultiplesOfThreeAndFive.h"

int sumOfMultiplesOfThreeAndFive(int untilNumber) {
  int i = 2;
  int sum = 0;

  for (i = 2; i < untilNumber; i++) {
    if (isMultipleOfThree(i)) {
      sum += i;
    } else if (isMultipleOfFive(i)) {
      sum += i;
    }
  }

  return sum;
}

int isMultipleOfThree(number) {
  return ((number % 3) == 0);
}

int isMultipleOfFive(number) {
  return ((number % 5) == 0);
}

int isNaturalNumber(number) {
  int i = 1;
  int naturalNumber = 0;

  for (i = 1; i <= number; i++) {
    if ((number % i) == 0) {
      naturalNumber++;

      if (naturalNumber > 2) {
        return 0;
      }
    }
  }

  return 1;
}
