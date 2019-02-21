#include <stdio.h>

int is_destination_reachable(int sx, int sy, int dx, int dy) {
  if(sx == dx && sy == dy) {
    return 1;
  }
  int newX, newY;

  if(sx < dx) {
    newX = sx + sy;
    newY = sy;
    if(is_destination_reachable(newX, newY, dx, dy)) {
      return 1;
    }

  }

  if(sy < dy) {
    newX = sx;
    newY = sx + sy;
    if(is_destination_reachable(newX, newY, dx, dy)) {
      return 1;
    }
  }

  return 0;
}


int main() {
  int sx, sy, dx, dy, g;
  printf("podaj poczatek: ");
  g = scanf("%i %i", &sx, &sy);
  if(g != 2) {
    printf("Incorrect input");
    return 1;
  }

  printf("podaj koniec: ");
  g = scanf("%i %i", &dx, &dy);
  if(g != 2) {
    printf("Incorrect input");
    return 1;
  }
  if(is_destination_reachable(sx, sy, dx, dy)) {
    printf("YES");
  } else {
    printf("NO");
  }
  return 0;
}
