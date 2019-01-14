#include <stdio.h>

int main() {

  char a[30];
  printf("Wpisz imie:");

  //printf("%s", a);
  int i;

  //char c;
  for(i = 0; i < 30; i++) {
    //c = getchar();
    scanf("%c", &a[i]);

    if(a[i] == '\n') {
      break;
    }
  }
  // scanf("%s", a);
  // a[strcpsn(a, "\n")] = 0;
  printf("Witaj ");
  // printf("%s!", a);
  for(int x = 0; x < i; x++) {
    if(a[x] != ' ') {
      putc(a[x], stdout);

    }

  }
  printf("!");
}
