#include <stdio.h>


int main(void) {
  int x[100];
  int alreadyDeclared[100];
  int valuesAdded = 0;
  printf("Wpisz liczby:\n");
  for(int i = 0; i < 100; i++) {
    x[i] = 5;
    alreadyDeclared[i] = 0;
  }
  int elo;
  for(int i = 0; i < 100; i++) {
    printf("wtf");
    elo = scanf("%i", x[i]);
    if(x[i] != 0) {
      valuesAdded++;
      //continue;
    } else {
      printf("HEHE %i", x[i]);
      //break;
    }
  }

  for(int i = 0; i < valuesAdded; i++) {
    if(alreadyDeclared[x[i]] == 1) {

    } else {
      printf("%i ", x[i]);
      alreadyDeclared[x[i]] = 1;
    }


  }
  return 0;
}
