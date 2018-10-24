#include <stdio.h>
int main()
{
  //hello
  int n;
  printf("Podaj liczbe:\n");
  int x = scanf("%d", &n);
  if(!x) {
    printf("Incorrect input");
    return 1;
  }
  if(n) {
    printf("Not equal to zero");
  } else {
    printf("Equal to zero");
  }


  return 0;
}
