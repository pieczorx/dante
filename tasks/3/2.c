#include <stdio.h>

int main() {
  int x = 0;
  do {
    printf("%i ", 100 - x);
    x++;
  } while (x <= 100);

  return 0;
}
