#include <stdio.h>


//Te dwie funkcje sa dla mnie
int mystrlen(const char* str){
    int length = 0;
    while (*str != 0)
    {
        str++;
        length++;
    }
    return length;
}
int mystrlen2(const char* str){
    int length = 0;
    while (*str != 0)
    {
        str++;
        length++;
    }
    if(length > 1000) {
      return 1000;
    }
    return length;
}

int find_char2(const char tab[], char c){
  for(int i = 0; i < mystrlen2(tab); i++) {
    if(tab[i] == c) {
      return i;
    }
  }
  return -1;
}
int rfind_char2(const char tab[], char c){
  char x;
  for(int i = 0; i < mystrlen2(tab); i++) {
    x = tab[mystrlen2(tab) - i - 1];
    if(x == c) {
      return mystrlen2(tab) - i - 1;
    }
  }
  return -1;
}

int find_char(const char tab[], char c){
  for(int i = 0; i < mystrlen(tab); i++) {
    if(tab[i] == c) {
      return i;
    }
  }
  return -1;
}

int rfind_char(const char tab[], char c){
  char x;
  for(int i = 0; i < mystrlen(tab); i++) {
    x = tab[mystrlen(tab) - i - 1];
    if(x == c) {
      return mystrlen(tab) - i - 1;
    }
  }
  return -1;
}

int main() {
  int max = 1000;
  char arr[max + 1 + 1000];
  char what;
  printf("Wpisz\n");
  fgets(arr, max + 1 + 1000, stdin);
  //printf("Length: %i\n", mystrlen(arr));
  printf("Wpisz\n");
  scanf("%c", &what);
  //printf("isgood %i\n", isGood);
  printf("%i\n%i", find_char2(arr, what), rfind_char2(arr, what));
}
