#include <stdio.h>

int main() {
  int x, a1, a2, a3;
  printf("Podaj numer telefonu: ");
  int a = scanf("(%i) %i-%i-%i", &x, &a1, &a2, &a3);


  if(a != 4) {
    printf("Incorrect input");
    return 1;
  }

  /*if(a1 < 100 || a1 > 999) {
    printf("Incorrect input");
    return 1;
  }

  if(a2 < 10 || a2 > 99) {
    printf("Incorrect input");
    return 1;
  }

  if(a3 < 10 || a3 > 99) {
    printf("Incorrect input");
    return 1;
  }*/

  printf("Numer kierunkowy: %02d\nNumer telefonu: %03d-%02d-%02d", x, a1, a2, a3);
  return 0;
}
