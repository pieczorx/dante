//it works

#include <stdio.h>
#include <stdlib.h>

int main(void) {
  float euro = 4.2074;
  float funt = 4.7073;
  float dolar = 3.5382;

  float x;
  float y;
  char sym[50] = "";


  int test1;

  //First
  printf("Podaj pierwsza liczbe: \n");
  int a1 = scanf("%f", &x);
  switch(a1) {
    case 1: {

      break;
    }
    default: {
      printf("Incorrect input");
      return 1;
    }
  }
  test1 = abs((int)x) / (int)x;

  switch(test1) {
    case 1: {

      break;
    }
    default: {
      printf("Incorrect input");
      return 1;
    }
  }



  //Second
  printf("Podaj symbol operacji: \n");
  int a2 = scanf("%s", sym);
  switch(a2) {
    case 1: {

      break;
    }
    default: {
      printf("Incorrect input");
      return 1;
    }
  }
  switch(sym[0]) {
    case 'e': {
      y = x / euro;
      break;
    }
    case 'f': {
      y = x / funt;
      break;
    }
    case 'd': {
      y = x / dolar;
      break;
    }
    default: {
      printf("Incorrect input");
      return 1;
      break;
    }
  }
  printf("%.2f", y);

  return 0;
}
