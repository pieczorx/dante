#include <stdio.h>
#include <ctype.h>

int main () {
   char str[5];
   printf("Wpisz 5 wyrazow: ");
   scanf("%5s", str);

   putchar (toupper(str[0]));
   putchar (toupper(str[1]));
   putchar (toupper(str[2]));
   putchar (toupper(str[3]));
   putchar (toupper(str[4]));


   return 0;
}
