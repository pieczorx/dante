#include <stdio.h>
int main()
{
  //hello
  int a, b;
  printf("Podaj pierwszą liczbę całkowitą:");
  int xa = scanf("%i", &a);

  if(!xa) {
    printf("Incorrect input");
    return 1;
  }

  printf("Podaj drugą liczbę całkowitą:");
  int xb = scanf("%i", &b);
  if(!xb) {
    printf("Incorrect input");
    return 1;
  }

  if(!b) {
    printf("Operation not permitted");
    return 1;
  }
  int r = a % b;
  if(r) {
    printf("%i is not divisible by %i", a, b);
  } else {
    printf("%i is divisible by %i", a, b);
  }


  return 0;
}
