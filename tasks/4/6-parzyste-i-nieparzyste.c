//WORK IN PROGRESS
//WORK IN PROGRESS
//WORK IN PROGRESS
//WORK IN PROGRESS
//WORK IN PROGRESS
//WORK IN PROGRESS
//WORK IN PROGRESS
//WORK IN PROGRESS
//WORK IN PROGRESS
//WORK IN PROGRESS
//WORK IN PROGRESS
/*
	Wyświetlone dane są nieprawidłowe, powinno być 'incorrect input' a jest '5 is odd'
*/

#include <stdio.h>
#include <stdlib.h>

int main(void) {
  printf("Wpisz liczbe:");
  int x;
  scanf("%i", &x);
  x = x + 1000000;
  int odd = x % 2;
  x = x - 1000000;
  //printf("%i xd\,", odd);
  switch(odd) {
    case 0: {
      printf("%i is even", x);
      break;
    }
    case 1: {
      printf("%i is odd", x);
      break;
    }
    case -1: {
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
