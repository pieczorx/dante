#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int getRandom(int min, int max) {
  return rand() % (max + 1 - min) + min;
}
int main() {
  srand(time(NULL));
  for(int i = 0; i < 100; i++) {
    printf("%d\n", getRandom(5, 10));

  }
}
