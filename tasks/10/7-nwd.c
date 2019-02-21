#include <stdio.h>


// int GCD(int a, int b) {
//   int xdd = a % b;
//
//   if(xdd == 0) {
//     return b;
//   }
//
//   return GCD(b, xdd);
// }

int GCD(int a, int b) {
  if (b != 0) {
    return GCD(b, a%b);
  }
  if(a < 0) {
    a = a * -1;
  }
  return a;
}

int main() {
  int a, b, g;
  printf("podaj a: ");
  g = scanf("%i", &a);
  if(g != 1) {
    printf("Incorrect input");
    return 1;
  }

  printf("podaj b: ");
  g = scanf("%i", &b);
  if(g != 1) {
    printf("Incorrect input");
    return 1;
  }

  printf("%i", GCD(a, b));
  return 0;
}
