#include <stdio.h>
int main()
{
  //hello
  int x[2] = {0, 0};

  for(int i = 0; i < 2; i++) {
    printf("Wpisz wartosc pls\n");
    scanf("%i", &x[i]);
  }

  //sum
  printf("%i\n", x[0] + x[1]);

  //diff
  printf("%i\n", x[0] - x[1]);

  //*
  printf("%i\n", x[0] * x[1]);

  //divide
  //printf("%i", (double)x[0] / (double)x[1]);
  printf("%i", x[0] / x[1]);


  return 0;
}
