#include <stdio.h>


int sum_of_digits(long long n) {
  if(n < 0) {
    n = n * -1;
  }
    if(n == 0) {
      return 0;
    }
    long long bb = sum_of_digits(n / 10);
    int xd = (n % 10 + bb);
    if(xd < 0) {
      xd = xd * -1;
    }
    return xd;
}


int main() {
  int x;
  printf("Podaj dlugosc:\n");
  int isGood = scanf("%i", &x);

  if(!isGood || x < 0) {
    printf("Incorrect input");
    return 1;
  }
  int xd = sum_of_digits(x);

  printf("%d", xd);
}
