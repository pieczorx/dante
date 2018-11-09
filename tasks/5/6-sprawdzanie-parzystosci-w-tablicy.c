#include <stdio.h>


int main(void) {
  int x[10];
  int elo;
  for(int i = 0; i < 5; i++) {
    printf("Wpisz:\n");
    elo = scanf("%i %i", &x[i * 2], &x[i * 2 - 1]);
    if(elo == 2) {

    } else {
      printf("input data type error");
      return 1;
    }
  }
  for(int i = 0; i < 10; i++) {
    printf("%i ", x[i]);
    if(x[i] % 2 == 0) {
      printf("even ");
    } else {
      printf("odd ");
    }
    printf("\n");
  }
  return 0;
}
