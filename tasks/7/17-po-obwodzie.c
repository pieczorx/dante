#include <stdio.h>

void printArray(int arr[4][4], int xMax, int yMax) {
  int x, y;
  for(x = 0; x < xMax; x++) {
    for(y = 0; y < yMax; y++) {
      //printf("%i %i", x, y);
      printf("%i ", arr[x][y]);
    }
    printf("\n");
  }
}

int main() {
  int aMax = 5;

  int a[aMax][aMax];

  int i;
  int okay;
  int x, y;
  printf("Wprowadz tab 1:\n");
  for(x = 0; x < aMax; x++) {
    for(y = 0; y < aMax; y++) {
      okay = scanf("%i", &a[y][x]);
      if(okay != 1) {
        printf("Incorrect input");
        return 1;
      }
    }
  }
  int currentSum = 0;
  for(i = 0; i < aMax; i++) {
    currentSum = currentSum + a[0][i];
  }

  for(i = 0; i < aMax; i++) {
    currentSum = currentSum + a[aMax - 1][i];
  }

  for(i = 1; i < aMax - 1; i++) {
    currentSum = currentSum + a[i][0];
  }

  for(i = 1; i < aMax - 1; i++) {
    currentSum = currentSum + a[i][aMax - 1];
  }

  printf("%i ", currentSum);
  return 0;

}
