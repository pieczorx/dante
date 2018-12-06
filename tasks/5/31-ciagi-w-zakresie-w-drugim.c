#include <stdio.h>

int main() {
  int maxNumbers = 1000;
  int numbers[maxNumbers];
  int numbers2[maxNumbers];

  int isGood = 1;
  int i, i2;

  printf("Wpisz liczby: ");

  for(i = 0; i < maxNumbers; i++) {
    isGood = scanf("%i", &numbers[i]);
    if(isGood != 1) {
      printf("Incorrect input");
      return 1;
    }
    if(numbers[i] == 0) {
      break;
    }
  }

  printf("Wpisz liczby: ");
  for(i2 = 0; i2 < maxNumbers; i2++) {
    isGood = scanf("%i", &numbers2[i2]);
    if(isGood != 1) {
      printf("Incorrect input");
      return 1;
    }
    if(numbers2[i2] == 0) {
      break;
    }
  }

  if(i < 2 || i2 < 1) {
    printf("Not enough data available");
    return 2;
  }

  if(i > 100) {
    i = 100;
  }
  if(i2 > 100) {
    i2 = 100;
  }

  int i3, i4;
  int goodNumbers, min, max;
  for(i3 = 0; i3 < i -1; i3++) {
    goodNumbers = 0;
    min = numbers[i3];
    max = numbers[i3 + 1];
    if(min > max) {
      max = numbers[i3];
      min = numbers[i3 + 1];
    }
    //if(i3 == 0) { printf("=====\n"); }

    for(i4 = 0; i4 < i2; i4++) {
      //if(i3 == 0) { printf("(%i, %i) vs %i, petla %i", min, max, numbers2[i4], i4); }

      if(numbers2[i4] > min && numbers2[i4] < max) {
        //if(i3 == 0) { printf(" GOOD %i", goodNumbers + 1); }
        goodNumbers++;
      } else {
        //if(i3 == 0) { printf(" BAD"); }
      }
      //if(i3 == 0) { printf("\n"); }
    }
    printf("%i ", goodNumbers);
  }
  return 0;

}
