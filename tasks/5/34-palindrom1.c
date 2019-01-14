#include <stdio.h>

int main() {
  int maxNumbers = 100;
  int numbers[maxNumbers];
  int isGood;
  int i;
  //char test;
  printf("Wpisz liczby: ");
  for(i = 0; i < 100; i++) {
    isGood = scanf("%i", &numbers[i]);
    if(isGood != 1) {
      printf("Incorrect input");
      return 1;
    }
    if(getchar() == '\n' || numbers[i] == -1) {
      break;
    }
    scanf(" ");
  }
  if(i <= 0) {
    printf("Not enough data available");
    return 2;
  }

  int isPalindrom = 1;
  for(int i2 = 0; i2 < i; i2++) {
    if(numbers[i2] != numbers[i - i2 - 1]) {
      isPalindrom = 0;
    }
    //printf("taka liczba: %i\n", numbers[i2]);
  }
  if(isPalindrom) {
    printf("TAK");
  } else {
    printf("NIE");
  }

}
