#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(void) {
  srand(time(NULL));
  int r = rand() % 10;
  //printf("Losowa liczba: %i\n", r);
  int l;
  for(int i = 0; i < 10; i++) {
    printf("Wpisz liczbe:");
    scanf("%i", &l);
    if(l == r) {
      printf("wygrales");
      return 0;
    }
    if(l > r) {
      printf("za duzo\n");
    } else {
      printf("za malo\n");
    }
  }

  printf("przegrales");
  return 0;
}
