#include <stdio.h>

unsigned long sumrec(int n, int current, int sum) {
  current++;
  if(current > n) {
    return sum;
  }
  sum = sum + current;
  return sumrec(n, current, sum);
}
unsigned long sum_rec(int n) {
  return sumrec(n, 0, 0);
}



int main() {
  int x1, g;
  printf("podaj x: ");
  g = scanf("%i", &x1);
  if(g != 1) {
    printf("Incorrect input");
    return 1;
  }
  if(x1 < 1) {
    printf("Incorrect input data");
    return 2;
  }
  printf("Wynik: %lu", sum_rec(x1));
  return 0;
}
