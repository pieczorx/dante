//Workin

#include <stdio.h>
#include <stdlib.h>

int main(void) {
  printf("Wpisz liczbe:");
  int x;
  int good = scanf("%i", &x);

  int odd = (x + 10000) % 2 + 4;
  int val = odd * good;
  switch(val) {
    case 4: {
      printf("%i is even", x);
      break;
    }
    case 5: {
      printf("%i is odd", x);
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
