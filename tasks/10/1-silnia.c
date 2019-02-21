#include <stdio.h>

// unsigned long factorialrec(unsigned long n, unsigned long current, unsigned long sum) {
//   if(n == 0) {
//     return 1;
//   }
//   current++;
//   if(current > n) {
//     return sum;
//   }
//   sum = sum * current;
//   return factorialrec(n, current, sum);
// }
// unsigned long factorial_rec(int n) {
//   return factorialrec(20, 0, 1);
// }

unsigned long factorial_rec(int n) {
  if(n < 0) {
    return 0;
  }
    if (n >= 1)
        return (unsigned long)n*factorial_rec(n-1);
    else
        return 1;
}


int main() {
  int x1, g;
  printf("podaj x: ");
  g = scanf("%i", &x1);
  if(g != 1) {
    printf("Incorrect input");
    return 1;
  }
  if(x1 < 0 || x1 > 20) {
    printf("Incorrect input data");
    return 2;
  }
  printf("Wynik: %lu", factorial_rec(x1));
  return 0;
}
