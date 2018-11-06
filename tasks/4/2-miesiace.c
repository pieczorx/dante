#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int month;
  printf("Wpisz miesiac:");
  int x = scanf("%i", &month);
  int xd = 0;

  switch(x) {
    case 1: {

      break;
    }
    default: {
      printf("Incorrect input");
      return 1;
    }
  }
  switch(xd) {
    case 0: {

      break;
    }
    default: {
      printf("Incorrect input");
      return 1;
    }
  }

  switch(month) {
    case 1: {
      printf("styczen");
      break;
    }
    case 2: {
      printf("luty");
      break;
    }
    case 3: {
      printf("marzec");
      break;
    }
    case 4: {
      printf("kwiecien");
      break;
    }
    case 5: {
      printf("maj");
      break;
    }
    case 6: {
      printf("czerwiec");
      break;
    }
    case 7: {
      printf("lipiec");
      break;
    }
    case 8: {
      printf("sierpien");
      break;
    }
    case 9: {
      printf("wrzesien");
      break;
    }
    case 10: {
      printf("pazdziernik");
      break;
    }
    case 11: {
      printf("listopad");
      break;
    }
    case 12: {
      printf("grudzien");
      break;
    }
    default: {
      printf("Incorrect input");
      return 1;
    }

  }
  return 0;
}
