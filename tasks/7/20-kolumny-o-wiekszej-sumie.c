#include <stdio.h>

void printArray(int arr[5][5], int xMax, int yMax) {
  int x, y;
  for(x = 0; x < xMax; x++) {
    for(y = 0; y < yMax; y++) {
      //printf("%i %i", x, y);
      printf("%i ", arr[y][x]);
    }
    printf("\n");
  }
}

int main() {
  int aMax = 5;
  int bMax = aMax;

  int a[aMax][aMax];
  int b[bMax][bMax];

  int x, y, i;
  int okay;

  printf("Wprowadz tab 1:\n");
  for(x = 0; x < aMax; x++) {
    for(y = 0; y < aMax; y++) {
      okay = scanf("%d", &a[y][x]);
      if(okay != 1) {
        printf("Incorrect input");
        return 1;
      }
    }
  }
  printf("Wprowadz tab 2:\n");
  for(x = 0; x < bMax; x++) {
    for(y = 0; y < bMax; y++) {
      okay = scanf("%d", &b[y][x]);
      if(okay != 1) {
        printf("Incorrect input");
        return 1;
      }
    }
  }



  int currentSumA, currentSumB;
  for(x = 0; x < aMax; x++) {
    currentSumA = 0;
    currentSumB = 0;
    for(y = 0; y < aMax; y++) {
      currentSumA = currentSumA + a[x][y];
      currentSumB = currentSumB + b[x][y];
    }
    if(currentSumB > currentSumA) {
      for(i = 0; i < aMax; i++) {
        a[x][i] = b[x][i];
      }
    }
  }
  printArray(a, aMax, aMax);
  return 0;

}
