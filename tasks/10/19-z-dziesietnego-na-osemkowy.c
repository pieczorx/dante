#include <stdio.h>

unsigned long long decimal_to_octal(unsigned int number) {
  if(number == 0) {
    return 0;
  }
  return number % 8 + 10 * decimal_to_octal(number / 8);
}

int main() {
  int x;
  printf("Podaj dlugosc:\n");
  int isGood = scanf("%i", &x);

  if(!isGood || x < 0) {
    printf("Incorrect input");
    return 1;
  }
  int xd = decimal_to_octal(x);

  printf("%d", xd);
}
