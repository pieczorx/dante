#include <stdio.h>
int main()
{
   // printf() displays the string inside quotation
   const char *name[5] = {"hejter", "andrzej", "ziemniaki", "banan", "grgrg"};


   for(int i = 0; i < 5; i++) {
     printf("%s\n", name[i]);
   }
   return 0;
}
