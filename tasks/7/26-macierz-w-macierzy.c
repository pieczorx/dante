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

  // int a[4][4] = {
  //   {1, 2, 3, 4},
  //   {5, 6, 7, 8},
  //   {4, 3, 1, 2},
  //   {8, 9, 5, 6}
  // };
  // printArray(a, 4, 4);
  // return 0;
  int aMax = 10;
  int bMax = 2;

  int a[aMax][aMax];
  int b[bMax][bMax];

  int x, y;
  int x2, y2;
  int okay;

  printf("Wprowadz tab 1:\n");
  for(x = 0; x < aMax; x++) {
    for(y = 0; y < aMax; y++) {
      okay = scanf("%d", &a[x][y]);
      if(okay != 1) {
        printf("Incorrect input");
        return 1;
      }
      // if(c != ' ') {
      //   break;
      // }
    }
  }
  printf("Wprowadz tab 2:\n");
  for(x = 0; x < bMax; x++) {
    for(y = 0; y < bMax; y++) {
      okay = scanf("%d", &b[x][y]);
      if(okay != 1) {
        printf("Incorrect input");
        return 1;
      }
    }
  }



  int repeatedCount = 0;
  int matchingIndexes[1000][2];
  int isGood;
  for(x = 0; x < aMax - bMax + 1; x++) {
    for(y = 0; y < aMax - bMax + 1; y++) {
      isGood = 1;
      for(x2 = 0; x2 < bMax; x2++) {
        for(y2 = 0; y2 < bMax; y2++) {
          if(a[x + x2][y + y2] != b[x2][y2]) {
            isGood = 0;
          }
        }
      }
      if(isGood) {
        matchingIndexes[repeatedCount][0] = y;
        matchingIndexes[repeatedCount][1] = x;

        repeatedCount++;
      }
    }
  }
  printf("%i\n", repeatedCount);
  for(int i = 0; i < repeatedCount; i++) {
    printf("%i %i\n", matchingIndexes[i][0], matchingIndexes[i][1]);
  }
  return 0;

}
