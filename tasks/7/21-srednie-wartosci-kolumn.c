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

  float a[aMax][aMax];

  int x, y;
  int okay;

  printf("Wprowadz tab 1:\n");
  for(x = 0; x < aMax; x++) {
    for(y = 0; y < aMax; y++) {
      okay = scanf("%f", &a[y][x]);
      if(okay != 1) {
        printf("Incorrect input");
        return 1;
      }
    }
  }

  float currentSum;
  float sums[5];
  for(y = 0; y < aMax; y++) {
    currentSum = 0;
    for(x = 0; x < aMax; x++) {
      currentSum = currentSum + a[y][x];
    }
    sums[y] = currentSum / aMax;
  }

  for(int i = 0; i < aMax; i++) {
    printf("%.2f ", sums[i]);
  }
  return 0;

}
