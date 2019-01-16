#include <stdio.h>

int is_divisible_by_11(int number) {
  if(number == 0) {
    return 1;
  }
  if(number == 11 || number == -11) {
    return 1;
  }
  if(number < 11 && number > -11) {
    return 0;
  }
  //printf("xd %i\n", number);
  int newNumber = number;
  if(number > 0) {
    newNumber = newNumber - 11;
  } else {
    newNumber = newNumber + 11;
  }
  return is_divisible_by_11(newNumber);
}


int main() {
  int x1, g;
  printf("podaj x: ");
  g = scanf("%i", &x1);
  if(g != 1) {
    printf("Incorrect input");
    return 1;
  }
  if(is_divisible_by_11(x1)) {
    printf("YES");
  } else {
    printf("NO");
  }
  return 0;
}
