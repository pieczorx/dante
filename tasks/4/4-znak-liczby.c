//WORK IN PROGRESS
#include <stdio.h>
#include <stdlib.h>

int main(void) {
  printf("Wpisz liczbe:");
  int x;
  int good = scanf("%i", &x);

  int val = (!good << 2) + ((x > 0) << 1) + (x == 0);


  switch(val) {
    case 0: {
      printf("%i is negative", x);
      break;
    }
    case 1: {
      printf("%i is equal to 0", x);
      break;
    }
    case 2: {
      printf("%i is positive", x);
      break;
    }
    default: {
      printf("Incorrect input");
      return 1;
      break;
    }

  }
  return 0;
}
