#include <stdio.h>
#include <math.h>

int main(void) {

  int months;
  float amount;
  const float PERCENT = 0.01;

  //Get months
  printf("Wprowadz kwote\n");
  int inputAmount = scanf("%f", &amount);
  int invalidChars = 0;
  while(getchar() != '\n') {
    invalidChars++;
  }

  if(inputAmount != 1 || amount < 0 || invalidChars != 0) {
    printf("Incorrect input");
    return 1;
  }

  printf("Wprowadz ilosc miesiecy\n");
  inputAmount = scanf("%i", &months);
  invalidChars = 0;
  while(getchar() != '\n') {
    invalidChars++;
  }

  if(inputAmount != 1 || months < 0 || invalidChars != 0) {
    printf("Incorrect input");
    return 1;
  }


  float finalAmount = amount;

  for(int i = 0; i < months; i++) {
    finalAmount += (float)finalAmount * (float)PERCENT;
    //finalAmount = floor(finalAmount);
  }



  printf("Finalna kwota: %10.2f\n", finalAmount);

  return 0;
}
