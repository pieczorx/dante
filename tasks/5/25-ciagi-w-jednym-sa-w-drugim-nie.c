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

  if(i2 < 1 && i < 1) {
    printf("Not enough data available");
    return 2;
  }

  if(i > 100) {
    i = 100;
  }
  if(i2 > 100) {
    i2 = 100;
  }


  int distinctValues[100];
  int distinctValuesCount = 0;
  int i3, i4, elementFound;
  for(i3 = 0; i3 < i2; i3++) {
    elementFound = 0;
    for(i4 = 0; i4 < distinctValuesCount; i4++) {
      if(distinctValues[i4] == numbers2[i3]) {
        elementFound = 1;
      }
    }
    if(elementFound == 0) {
      distinctValues[distinctValuesCount] = numbers2[i3];
      distinctValuesCount++;
    }
  }

  int val, canAdd, elementsFound;
  int shown = 0;
  for(i3 = 0; i3 < distinctValuesCount; i3++) {
    val = distinctValues[i3];
    elementsFound = 0;
    for(i4 = 0; i4 < i2; i4++) {
      if(numbers2[i4] == val) {
        elementsFound++;
      }
    }
    if(elementsFound >= 2) {
      canAdd = 1;
      for(i4 = 0; i4 < i; i4++) {
        if(val == numbers[i4]) {
          canAdd = 0;
        }
      }
      if(canAdd == 1) {
        printf("%i ", val);
        shown++;
      }
    }

  }

  if(shown == 0) {
    printf("Nothing to show");
  } else {
    //printf("Shown: %i", shown);
  }



  return 0;

}
