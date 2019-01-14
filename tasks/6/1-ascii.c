#include <stdio.h>

int main() {
  int min = 65;
  int max = 90;
  int count = max - min + 1;
  int a[count];
  for(int i = min; i <= max; i++) {
    a[i - min] = i;
  }

  for(int x = 0; x < count; x++) {
    printf("%d %c %c\n", a[x], a[x], a[x] + 32);
  }
}
