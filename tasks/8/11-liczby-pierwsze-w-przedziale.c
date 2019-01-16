#include <stdio.h>

int is_prime(int a) {
  if(a == 2) {
    return 1;
  }
  if(a < 3) {
    return 0;
  }
  for(int i = 2; i < a; i++) {
    if(a % i == 0) {
      return 0;
    }
  }
  return 1;
}

int main() {
  int x1, x2, g;
  printf("podaj x1: ");
  g = scanf("%i", &x1);
  if(g != 1) {
    printf("Incorrect input");
    return 1;
  }
  printf("podaj x2: ");
  g = scanf("%i", &x2);

  if(x1 > x2) {
    printf("Incorrect input");
    return 1;
  }
  int goodCount = 0;
  for(int i2 = x1; i2 <= x2; i2++) {
    if(is_prime(i2)) {
      goodCount++;
      printf("%i ", i2);
    }
  }
  if(goodCount == 0) {
    printf("Nothing to show");
  }
  return 0;
}
