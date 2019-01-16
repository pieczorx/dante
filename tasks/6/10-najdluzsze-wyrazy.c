#include <stdio.h>

int main() {
  int max = 1000;
  char a[max + 1];
  printf("Wpisz cokolwiek:");
  char val;
  int i, i2, i3, isSign;
  for(i = 0; i < max; i++) {
    scanf("%c", &a[i]);
    if(a[i] == '\n') {
      break;
    }
    isSign = 0;
    val = a[i];
    if(val >= 65 && val <= 90) {
      isSign = 1;
    }
    if(val >= 97 && val <= 122) {
      isSign = 1;
    }
    if(val == ' ') {
      isSign = 1;
    }
    if(!isSign) {
      printf("Incorrect input");
      return 1;
    }
  }
  a[i] = ' ';
  i++;
  int maxLength = 0;
  int currentLength = 0;
  int maxWordsCount = 0;
  char longestWords[i][i];

  for(i2 = 0; i2 < i; i2++) {
    if(a[i2] != ' ') {
      currentLength++;
      continue;
    }
    if(currentLength > maxLength) {
      maxWordsCount = 0;
    }
    if(currentLength >= maxLength) {
      maxLength = currentLength;
      for(i3 = 0; i3 < currentLength; i3++) {
        longestWords[maxWordsCount][i3] = a[i2 - currentLength + i3];
      }
      maxWordsCount++;
    }
    currentLength = 0;
  }
  printf("%i %i\n", maxWordsCount, maxLength);
  for(i2 = 0; i2 < maxWordsCount; i2++) {
    for(i3 = 0; i3 < maxLength; i3++) {
      printf("%c", longestWords[maxWordsCount - i2 - 1][i3]);
    }
    printf("\n");
  }
  return 0;
}
