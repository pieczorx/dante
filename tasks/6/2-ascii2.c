#include <stdio.h>

int main() {

  char a[] = {'T','o',' ','j','e','s','t',' ','t','e','k','s','t','\x0'};
  int max = 13;

  for(int x = 0; x < max; x++) {
    putc(a[x], stdout);
    printf(" %i %c\n", a[x], a[x]);
  }
}
