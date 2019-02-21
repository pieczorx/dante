#include <stdio.h>


long int fibonacci(int n) {
  if(n < 0) {
    return -1;
  }
  if(n == 0) {
    return 1;
  }
  if(n == 1) {
    return 2;
  }
  return fibonacci(n - 1) + fibonacci(n - 2) + n;
}


int main() {
  int a, g;
  printf("podaj a: ");
  g = scanf("%i", &a);
  if(g != 1) {
    printf("Incorrect input");
    return 1;
  }

  if(a < 0) {
    printf("Incorrect input data");
    return 2;
  }
  printf("Wynik: %ld", fibonacci(a));
  return 0;
}
