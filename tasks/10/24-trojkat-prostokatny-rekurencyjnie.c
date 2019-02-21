#include <stdio.h>


void drawTriangle(int currentWidth, int maxWidth, int drawnCount) {
  if(drawnCount == 0 && currentWidth != 1) {
    printf("\n");
  }
  //printf("Draw %i %i %i\n", currentWidth, maxWidth, drawnCount);

  if(currentWidth <= maxWidth) {
    if(currentWidth == drawnCount) {
      printf("*");
    } else {
      printf("* ");
    }
    drawnCount++;
    if(drawnCount == currentWidth) {
      drawnCount = 0;
      currentWidth++;
    }
    drawTriangle(currentWidth, maxWidth, drawnCount);
  }
}

void rectangular_triangle(int n) {
  drawTriangle(1, n, 0);
}
int main() {
  int x;
  printf("Podaj dlugosc:\n");
  int isGood = scanf("%i", &x);

  if(!isGood) {
    printf("Incorrect input");
    return 1;
  }
  if(x <= 0) {
    printf("Incorrect input data");
    return 2;
  }

  rectangular_triangle(x);
}
