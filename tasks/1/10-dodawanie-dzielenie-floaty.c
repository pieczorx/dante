#include <stdio.h>
int main()
{
   // printf() displays the string inside quotation
   float x = 4.20;
   float d = 1.05;

   printf("%f %f\n", x, d);
   printf("%f\n", x * d);
   printf("%1.2f\n", (double)x / (double)d);
   printf("%f\n", x + d);
   printf("%f\n", x - d);

   return 0;
}
