#include <stdio.h>


long power_rec(int a, int n) {
  if(n < 0) {
    return 0;
  }
  if(n == 0) {
    return 1;
  }
  return (a*power_rec(a, n-1));
}


int main() {
  int a, n, g;
  printf("podaj a: ");
  g = scanf("%i", &a);
  if(g != 1) {
    printf("Incorrect input");
    return 1;
  }

  printf("podaj n: ");
  g = scanf("%i", &n);
  if(g != 1) {
    printf("Incorrect input");
    return 1;
  }


  if(n < 0) {
    printf("Incorrect input data");
    return 2;
  }
  printf("Wynik: %ld", power_rec(a, n));
  return 0;
}
