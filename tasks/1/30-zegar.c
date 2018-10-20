#include <stdio.h>
int main()
{
  int diff;
  int hours = 0;
  int minutes = 0;
  int seconds = 0;

  printf("Podaj czas: ");
  scanf("%i", &diff);

  //brzydko z tymi diffami za kazdym razem ale no coz
  hours = (diff - (diff % 3600)) / 3600;
  diff = diff - hours * 3600;
  minutes = (diff - (diff % 60)) / 60;
  diff = diff - minutes * 60;
  seconds = diff;

  printf("%02d:%02d:%02d", hours, minutes, seconds);


  return 0;
}
