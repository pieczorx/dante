#include <stdio.h>

int main() {
  int max = 1000;
  char a[max];
  printf("Wpisz cokolwiek:");

  int i, i2;
  for(i = 0; i < max; i++) {
    scanf("%c", &a[i]);
    if(a[i] == '\n') {
      break;
    }
  }

  int words = 0;
  int isSign;
  int val;
  int isPreviousLetter = 0;
  for(i2 = 0; i2 < i; i2++) {
    val = a[i2];
    isSign = 0;
    if(val >= 65 && val <= 90) {
      isSign = 1;
    }
    if(val >= 97 && val <= 122) {
      isSign = 1;
    }
    if(isSign) {
      if(!isPreviousLetter) {
        words++;
      } else {

      }
    }
    isPreviousLetter = isSign;
  }

  printf("%i", words);

}
