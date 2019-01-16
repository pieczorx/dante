#include <stdio.h>

void printArray(int arr[15][15], int xMax, int yMax) {
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
  int aMax = 15;

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
      if(a[y][x] < 0 || a[y][x] > 29) {
        printf("value out of range");
        return 2;
      }
    }
  }
  int count[30];
  int val;
  for(i = 0; i < 30; i++) {
    count[i] = 0;
  }
  for(x = 0; x < aMax; x++) {
    for(y = 0; y < aMax; y++) {
      val = a[x][y];
      count[val]++;
    }
  }

  for(x = 0; x < aMax; x++) {
    for(y = 0; y < aMax; y++) {
      val = a[x][y];
      a[x][y] = count[val];
    }
  }
  // for(i = 0; i < 30; i++) {
  //   printf("%i: %i\n", i, count[i]);
  // }
  // printf("==");
  printArray(a, aMax, aMax);
  return 0;

}
