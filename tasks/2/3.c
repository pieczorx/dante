#include <stdio.h>
int main()
{
  //hello
  int d, m, y;
  printf("Podaj date (w formacie dd-mm-yyyy): ");
  int x = scanf("%d-%d-%d", &d, &m, &y);
  if(x != 3) {
    printf("Incorrect input");
    return 1;
  }

  if(d < 1 || d > 31 || m < 1 || m > 12) {
    printf("Incorrect");
    return 0;
  }
  if(y % 4 == 0 && y % 100 != 0 || y % 400 == 0) {
    if(d > 29 && m == 2) {
      printf("Incorrect");
      return 0;
    }
  } else {
    if(d > 28 && m == 2) {
      printf("Incorrect");
      return 0;
    }
  }


  if(d > 30 && (m == 4 || m == 6 || m == 9 || m == 11)) {
    printf("Incorrect");
    return 0;
  }

  printf("Correct");

  return 0;
}
