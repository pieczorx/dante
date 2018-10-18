#include <stdio.h>
int main()
{
   // printf() displays the string inside quotation
   int x = 4;
   int d = 3;
   
   printf("%i %i\n", x, d);
   printf("%i\n", x * d);
   printf("%1.2f\n", (double)x / (double)d);
   printf("%i\n", x + d);
   printf("%i\n", x - d);

   return 0;
}
