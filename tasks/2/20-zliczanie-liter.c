#include <stdio.h>
int xd(char letter);
int main() {
  char x[5];

  printf("Podaj 5 znakow: ");
  int a = scanf("%s", x);


  if(a != 1) {
    printf("Incorrect input");
    return 1;
  }
  int charCount = 0;

  charCount = charCount + xd(x[0]);
  charCount = charCount + xd(x[1]);
  charCount = charCount + xd(x[2]);
  charCount = charCount + xd(x[3]);
  charCount = charCount + xd(x[4]);
  printf("Szukane znaki wystapily %i raz(y)", charCount);
  return 0;
}

int xd(char letter) {
  char signs[5] = "xyz27";
  int charCount = 0;
  if(signs[0] == letter) {
    charCount++;
  }
  if(signs[1] == letter) {
    charCount++;
  }
  if(signs[2] == letter) {
    charCount++;
  }
  if(signs[3] == letter) {
    charCount++;
  }
  if(signs[4] == letter) {
    charCount++;
  }

  return charCount;
}
