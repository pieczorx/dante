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
  // scanf("%s", a);
  // a[strcpsn(a, "\n")] = 0;
  //printf("Wpisz ");
  // printf("%s!", a);
  //aouiye
  char allowed[] = {'a', 'o', 'u', 'i', 'y', 'A', 'O', 'U', 'I', 'Y', 'e', 'E'};
  char al[max];
  for(int j = 0; j < max; j++) {
    al[j] = 0;
  }
  int x, c, s = 0;
  unsigned y, z;
  int was;
  int allowx;

  for( x = 0; x < i; x++) {
    c = a[x];
    allowx = 0;
    for(y = 0; y < sizeof allowed; y++) {
      if(allowed[y] == c) {
        allowx = 1;
      }
    }
    if(allowx == 1) {
      //printf("===%c===\n", c);
      was = 0;
      for(z = 0; z < sizeof al; z++) {
        //printf("%c vs %c\n", al[z], c);
        if(al[z] == c) {
          //printf("wtf %c\n", c);
          was = 1;
        }
      }
      if(was == 0) {
        //printf("niet ");
        al[s] = c;
        s++;
      } else {

        //printf("x");
      }
      //printf("\n");
    }



  }

  printf("Wynik: %i", s);
}
