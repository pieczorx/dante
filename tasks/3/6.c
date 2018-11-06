#include <stdio.h>
/*
int main(void) {
  unsigned long x = 1;
  for(int i = 0; i <= 19; i++) {
    printf("%lu ", x);
    x = x * 10;
  }

  return 0;
}
*/

int main(void) {
  char x[20];
  x[0] = '1';
  for(int i = 0; i <= 19; i++) {
    printf("%s ", x);
    x[i + 1] = '0';
  }

  return 0;
}
