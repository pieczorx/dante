#include <stdio.h>
#include <stdlib.h>
int main()
{
  int x, y;
  int min, max;

  printf("Podaj liczby\n");
  scanf("%i %i", &x, &y);

  //najgorsze co można zrobić xD
  int d = 10000;
  x += d;
  y += d;
  max = (abs(x + y) + abs(x - y)) / 2;
  min = (abs(x + y) - abs(x - y)) / 2;

  max = max - d;
  min = min - d;
  printf("Maximum: %i \nMinimum: %i", max, min);
  return 0;
}
