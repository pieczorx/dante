#include <stdio.h>

int main() {
  int maxNumbers = 10;
  int numbers[maxNumbers];
  int isGood = 1;
  int i = 0;

  printf("Wpisz liczby: ");

  for(i = 0; i < maxNumbers; i++) {
    isGood = scanf("%i", &numbers[i]);
    if(isGood != 1) {
      printf("Incorrect input");
      return 1;
    }
  }

  //printf("i to %i", i);
  // while (i < maxNumbers && scanf("%d ", &numbers[i]) == 1 && getchar() != '\n') {
  //   i++;
  // }
  // printf("Lol");
  //return 0;

  // while(i < maxNumbers && isGood == 1) {
  //   isGood = scanf("%i ", &numbers[i]);
  //   if(isGood != 1) {
  //     printf("Incorrect input");
  //     return 1;
  //   }
  //   if(getchar() == '\n') {
  //     break;
  //   }
  //   i++;
  // }
  //printf("test");

  //printf("ile bylo %i\n", i);
  if(i != maxNumbers) {
    printf("Incorrect input data");
    return 2;
  }
  int oddCount = 0;
  int evenCount = 0;
  int oddNumbers[4];
  int evenNumbers[6];

  for(int i2 = 0; i2 < i; i2++) {
    if(numbers[i2] % 2 == 0) {
      oddNumbers[oddCount] = numbers[i2];
      oddCount++;
    } else {
      evenNumbers[evenCount] = numbers[i2];
      evenCount++;
    }
  }

  if(oddCount != 4 || evenCount != 6) {
    //printf("%i %i \n", oddCount, evenCount);
    printf("Incorrect input data");
    return 2;
  }

  int evenAdded = 0;
  for(int i2 = 0; i2 < i; i2++) {
    if(i2 % 3 == 0) {
      printf("%i", oddNumbers[i2 / 3]);
    } else {
      printf("%i", evenNumbers[evenAdded]);
      evenAdded++;
    }
    printf(" ");
  }




  // for(int i2 = 0; i2 <= i; i2++) {
  //   if(numbers[i2] != numbers[i - i2 - 1]) {
  //     isPalindrom = 0;
  //   }
  //   //printf("taka liczba: %i\n", numbers[i2]);
  // }
  // if(isPalindrom) {
  //   printf("TAK");
  // } else {
  //   printf("NIE");
  // }

}
