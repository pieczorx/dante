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
  int currentLength = 0;
  int lengths[1000];
  for(i2 = 0; i2 < 1000; i2++) {
    lengths[i2] = 0;
  }
  char currentChar;
  for(i2 = 0; i2 < i; i2++) {
    currentChar = a[i2];
    //printf("\nwtf %c\n", currentChar);
    if(currentChar == ' ' || currentChar == '.' || currentChar == '\'' || currentChar == '"' || currentChar == '-'  || currentChar == ',' || currentChar == ';' || currentChar == ':' ) {
      lengths[currentLength]++;
      currentLength = 0;
      continue;
    }
    currentLength++;

    if(i2 + 1 == i) {
      lengths[currentLength]++;
    }

  }
  for(i2 = 1; i2 < 1000; i2++) {
    if(lengths[i2] > 0) {
      printf("%i - %i\n", i2, lengths[i2]);
    }
  }
}
