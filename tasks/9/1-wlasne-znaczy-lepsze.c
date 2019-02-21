#include <stdio.h>

unsigned int my_strlen(const char tab[]) {
  int length =0;
  while(tab[length] != '\0') {
    length++;
  }
  return length;
}


int my_atoi(const char tab[]) {
  int finalInteger = 0;
  int acc = 1;
  char c;
  for(unsigned int i = 0; i < my_strlen(tab); i++) {
    c = tab[my_strlen(tab) - i - 1];
    if(c == '-') {
      finalInteger = finalInteger * -1;
      break;
    }
    if(c >= 48 && c <= 57) {
      finalInteger = finalInteger + acc * (c - 48);
      acc = acc * 10;
    }
    if(c == '.') {
      acc = 1;
      finalInteger = 0;
    }
  }
  return finalInteger;
}
//512.24
float my_atof(const char tab[]) {

  float finalFloat = 0;
  float acc = 1;
  char c;
  int realI = 0;
  unsigned int dotAt = 0;
  for(unsigned int i = 0; i < my_strlen(tab); i++) {
    c = tab[my_strlen(tab) - i - 1];
    if(c == '-') {
      finalFloat = finalFloat * -1;
      break;
    }
    if(c >= 48 && c <= 57) {
      finalFloat = finalFloat + acc * (c - 48);
      acc = acc * 10;
      realI++;
    }
    if(c == '.' && dotAt == 0) {
      dotAt = realI;
    }
  }
  if(dotAt > 0) {
    for(unsigned int i2 = 0; i2 < dotAt; i2++) {
      finalFloat = finalFloat / 10;
    }
  }
  return finalFloat;
}

int main() {
  char word[15];
  //&word = "siema";
  printf("Wpisz wyraz:\n");
  scanf("%15[^\n]", word);

  printf(" length: %i\n atoi: %i\n atof: %.4f", my_strlen(word), my_atoi(word), my_atof(word));

  return 0;
}
