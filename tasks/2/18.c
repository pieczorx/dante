#include <stdio.h>
int main()
{
  //hello
  int x;

  printf("Podaj punkty\n");
  int xa = scanf("%i", &x);

  if(!xa) {
    printf("Incorrect input");
    return 1;
  }


  if(x < 0 || x > 20) {
    printf("Incorrect input");
    return 1;
  }

  if(x <= 10) {
    printf("2");
    return 0;
  }

  if(x <= 13) {
    printf("3");
    return 0;
  }


  if(x <= 16) {
    printf("4");
    return 0;
  }


  printf("5");


  return 0;
}
