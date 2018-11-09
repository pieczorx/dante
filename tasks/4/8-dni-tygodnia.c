/*
Napisz program wyświetlający na podstawie liczby
całkowitej (z zakresu 1 - 7) pobranej od użytkownika
słowną nazwę odpowiadającego jej dnia tygodnia.
Dzień tygodnia powinien być wypisany bez polskich znaków.
Podanie innej wartości powinno skutkować wypisaniem
komunikatu "Incorrect input" i zwróceniem wartości 1.
W programie nie używaj instrukcji warunkowej if.
*/

#include <stdio.h>
int main() {
  int number;
  printf("Wpisz liczbe");
  scanf("%i", &number);

  switch(number) {
    case 1: {
      printf("Poniedzialek");
      break;
    }
    case 2: {
      printf("Wtorek");
      break;
    }
    case 3: {
      printf("Sroda");
      break;
    }
    case 4: {
      printf("Czwartek");
      break;
    }
    case 5: {
      printf("Piatek");
      break;
    }
    case 6: {
      printf("Sobota");
      break;
    }
    case 7: {
      printf("Niedziela");
      break;
    }
    default: {
      printf("Incorrect input");
      return 1;
      break;
    }

  }
}

int podzielPrzezDwa(int x) {
  return x / 2;
}
