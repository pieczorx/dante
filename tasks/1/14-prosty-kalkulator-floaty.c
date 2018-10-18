#include <stdio.h>
int main()
{
  //hello
  float x[2] = {0, 0};

  for(int i = 0; i < 2; i++) {
    printf("Wpisz wartosc pls\n");
    scanf("%f", &x[i]);
  }

  //sum
  printf("%f\n", x[0] + x[1]);

  //diff
  printf("%f\n", x[0] - x[1]);

  //*
  printf("%f\n", x[0] * x[1]);

  //divide
  //printf("%f", (double)x[0] / (double)x[1]);
  printf("%f", x[0] / x[1]);


  return 0;
}
