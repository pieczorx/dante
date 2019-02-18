#include <stdio.h>


int main(void) {
  int x[1000];
  printf("Wpisz liczby:\n");
  int isGood, i;
  for(i = 0; i < 1000; i++) {
    isGood = scanf("%d", &x[i]);

    if(!isGood) {
      printf("Incorrect input");
      return 1;
    }
    if(getchar() == '\n' || x[i] == 0) {
      break;
    }
    scanf(" ");
  }
  int count = i;
  if(count < 1) {
    printf("Brak danych");
    return 0;
  }
  int i2;
  int sum = 0;
  int max, maxSet = 0;
  for(i2 = 0; i2 < count; i2++) {
    sum = sum + x[i2];
    if(max < x[i2] || !maxSet) {
      max = x[i2];
      maxSet = 1;
    }
  }

  int min, minSet = 0;
  for(i2 = 0; i2 < count; i2++) {
    if(min > x[i2] || !minSet) {
      min = x[i2];
      minSet = 1;
    }
  }

  float avg = (float)sum / (float)count;

  int sumBelow = 0, sumAbove = 0;
  for(i2 = 0; i2 < count; i2++) {
    if((float)x[i2] < avg) {
      sumBelow = sumBelow + x[i2];
    }
    if((float)x[i2] > avg) {
      sumAbove = sumAbove + x[i2];
    }
  }


  printf("%0.2f\n%i\n%i", avg, sumAbove, sumBelow);

  return 0;
}
