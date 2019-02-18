#include <stdio.h>


int main(void) {
  int x[100];
  printf("Wpisz liczby:\n");
  int isGood, i;
  for(i = 0; i < 100; i++) {
    isGood = scanf("%d", &x[i]);

    if(!isGood) {
      printf("Incorrect input");
      return 1;
    }
    if(getchar() == '\n' || x[i] == -1) {
      break;
    }
    scanf(" ");
  }
  int count = i;

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

  printf("%i\n%i\n%i\n%f\n%i", count, min, max, (float)sum / (float)count, sum);
  printf("\n");
  for(i2 = 0; i2 < count; i2++) {
    if(x[i2] == min) {
      printf("%i ", i2);
    }
  }
  printf("\n");
  for(i2 = 0; i2 < count; i2++) {
    if(x[i2] == max) {
      printf("%i ", i2);
    }
  }
  return 0;
}
