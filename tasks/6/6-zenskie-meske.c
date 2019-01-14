#include <stdio.h>

int main() {
  int max = 1000;
  char a[max];
  printf("Wpisz imie:");

  //printf("%s", a);
  int i;

  //char c;
  for(i = 0; i < max; i++) {
    //c = getchar();
    scanf("%c", &a[i]);

    if(a[i] == '\n') {
      break;
    }
  }
  if(a[i - 1] == 'a') {
    printf("Imie zenskie");
  } else {
    printf("Imie meskie");
  }

}
