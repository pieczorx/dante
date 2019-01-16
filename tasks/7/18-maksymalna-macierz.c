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

  int x, y;
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



  int valA, valB;
  for(x = 0; x < aMax; x++) {
    for(y = 0; y < aMax; y++) {
      valA = a[x][y];
      valB = b[x][y];
      if(valB > valA) {
        a[x][y] = valB;
      }
    }
  }
  printArray(a, aMax, aMax);
  return 0;

}
