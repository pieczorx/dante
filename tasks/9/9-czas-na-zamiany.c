#include <stdio.h>

int my_strlen(const char tab[]) {
  int length =0;
  while(tab[length] != '\0') {
    length++;
  }
  return length;
}

void replace(char tab[], const char from, const char to) {
  for(int i = 0; i < my_strlen(tab); i++) {
    if(tab[i] == from) {
      tab[i] = to;
    }
  }
}

void replace_string(char tab[], const char from[], const char to[]) {
  if(my_strlen(to) > my_strlen(from)) {
    return;
  }
  int index;
  int indexDone = 0;
  char temp[10000];

  for(int i = 0; i < my_strlen(tab); i++) {
    //printf("%i: %c\n", i, tab[i]);
    index = i;
    int isGood = 1;
    if(i < my_strlen(tab) - my_strlen(from) + 1) {
      for(int i2 = 0; i2 < my_strlen(from); i2++) {
        if(tab[index + i2] != from[i2]) {
          isGood = 0;
        }
      }
    } else {
      isGood = 0;
    }

    if(isGood) {
      for(int i2 = 0; i2 < my_strlen(to); i2++) {
        temp[indexDone] = to[i2];
        indexDone++;
      }
      //printf("xd%i\n", my_strlen(from));
      i = i + my_strlen(from) - 1;
    } else {
      temp[indexDone] = tab[index];
      indexDone++;
    }
  }

  for(int i = 0; i < indexDone; i++) {
    tab[i] = temp[i];
  }
  tab[indexDone] = '\0';
}

int find_longest_word(const char tab[]) {
  int letterExists = 0;
  for(int i = 0; i < my_strlen(tab); i++) {
    if(tab[i] != ' ') {
      letterExists = 1;
    }
  }

  if(!letterExists) {
    return -1;
  }

  int i, start = 0, longestWord = 0, positionOflongestWordWord = 0;
  for (i = 0; tab[i] != '\0'; i++) {
      if (tab[i] == ' ') {
          start = i + 1;
      } else {
          if (i - start > longestWord) {
              longestWord = i - start;
              positionOflongestWordWord = start;
          }
      }
  }
  return positionOflongestWordWord;
}


void printString(const char tab[]) {
  for(int i = 0; i < my_strlen(tab); i++) {
    printf("%c", tab[i]);
  }
}
int get_word_length(const char tab[], int start) {
  for(int i = start; i <= my_strlen(tab); i++) {
    if(i == my_strlen(tab) || tab[i] == ' ') {
      return i - start;
    }
  }
  return 0;
}

void resetWord(char arr[]) {
  int len = my_strlen(arr);
  arr[len - 1] = '\0';
}

int main() {
  // char *word = "OUR and oUR memory but frame oUr oUR lives OUR technology and ouR tradition our our myth OUR response Science oUr OUr Schlesinger M Arthur revolutionize";
  // replace_string(word, "our", "OuR");
  // printString(word);
  char word[10000], word2[10000];


  printf("Wpisz wyraz:\n");
  fgets(word,10000,stdin);
  resetWord(word);


  word[1000] = '\0';

  for(int i = 0; i <= my_strlen(word); i++) {
    word2[i] = word[i];
  }
  replace(word, 'a', 'b');
  replace(word, 'e', 'f');
  replace(word, 'i', 'j');
  replace(word, 'o', 'p');
  replace(word, 'u', 'v');
  replace(word, 'y', 'z');

  replace(word, 'A', 'B');
  replace(word, 'E', 'F');
  replace(word, 'I', 'J');
  replace(word, 'O', 'P');
  replace(word, 'U', 'V');
  replace(word, 'Y', 'Z');


  printString(word);

  replace_string(word2, "the", " ");
  replace_string(word2, "The", " ");
  replace_string(word2, "THe", " ");
  replace_string(word2, "THE", " ");
  replace_string(word2, "thE", " ");
  replace_string(word2, "tHE", " ");
  replace_string(word2, "ThE", " ");
  replace_string(word2, "tHe", " ");
  // char input[] = "When you forgive, you in no way change the past - but you sure do change the future12 - Bernard Meltzer";
  // replace_string(input, "future", "the");
  //replace_string(word2, "our", "OuR");
  printf("\n");
  printString(word2);

  return 0;
}
