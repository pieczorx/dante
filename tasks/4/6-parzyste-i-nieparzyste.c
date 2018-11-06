#include <stdio.h>
#include <stdlib.h>

int main(void) {
  printf("Wpisz liczbe:");
  int x = 5;
  scanf("%i", &x);
  int odd = abs(x % 2);
  printf("%i xd", odd);
  switch(odd) {
    case 0: {
      printf("%i is even", x);
      break;
    }
    case 1: {
      printf("%i is odd", x);
      break;
    }

  }
  return 0;
}
