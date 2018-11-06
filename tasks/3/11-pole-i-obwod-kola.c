#include <stdio.h>
#define PI 3.14159265358979323846

int main(void) {

  float r;
  int xd;
  int good = 0;
  int invalidChars;
  while(good == 0) {
    printf("Podaj promien kola:\n");
    xd = scanf("%f", &r);
    invalidChars = 0;
    while(getchar() != '\n') {
      invalidChars++;
    }
    if(r > 0 && xd == 1 && invalidChars == 0) {
      printf("Obwod kola: %f\n", (float)r * (float)PI * (float)2);
      printf("Pole kola: %f", (float)r * (float)PI * (float)r);
      good = 1;
    } else {
      printf("Incorrect input\n");
    }
  }


  return 0;
}
