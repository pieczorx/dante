#include <stdio.h>

int main() {
  int x, y;
  printf("Wprowadz dane:\n");
  int a = scanf("%i %i", &x, &y);
  if(a != 2) {
    printf("Incorrect input");
    return 1;
  }

  int sum = x + y;
  printf("%i", sum);
  return 0;
}
