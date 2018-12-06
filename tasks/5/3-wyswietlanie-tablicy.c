#include <stdio.h>


int main(void) {
  int x[11];
  for(int i = 0; i < 11; i++) {
    x[i] = i;
  }
  for(int i = 0; i < 11; i++) {
    printf("%i ", x[i]);
  }
  printf("\n");
}
