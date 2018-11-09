/*
Napisz program, który pobierze od użytkownika dwie liczby całkowite,
a następnie wyświetli w osobnych liniach, kolejno największą i najmniejszą.
W przypadku podania błędnych danych program powinien wyświetlić komunikat
“Incorrect input” i zakończyć działanie z kodem błędu 1.
W programie nie używaj instrukcji warunkowej if.
*/
#include <stdio.h>
#include <stdlib.h>

int main(void) {
  printf("Wpisz liczbe: \n");

  int x1, x2;
  int good = scanf("%i %i", &x1, &x2);
  int isGood = good == 2;
  //int val = (!good << 2) + ((x > 0) << 1) + (x == 0);
  int isFirstBigger = x1 > x2;
  int val = isGood + (isGood & isFirstBigger);
  switch(val) {
    case 1: {
      printf("%i\n%i", x2, x1);
      break;
    }
    case 2: {
      printf("%i\n%i", x1, x2);
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
