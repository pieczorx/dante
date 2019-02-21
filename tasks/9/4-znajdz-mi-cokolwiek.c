#include <stdio.h>

int my_strlen(const char tab[]) {
  int length =0;
  while(tab[length] != '\0') {
    length++;
  }
  return length;
}

int find_any(const char tab[], const char tab2[]) {
  int index;
  for(int i = 0; i < my_strlen(tab); i++) {
    //printf("ok");
    index = i;
    //int isGood = 0;
    for(int i2 = 0; i2 < my_strlen(tab2); i2++) {
      //printf("%c %c \n", tab[index], tab2[i2]);
      if(tab[index] == tab2[i2]) {
        //printf("%c : %c : isGood %i\n", i2);
        //isGood = 1;
        return index;
      }
    }
    // if(isGood) {
    //   return index;
    // }
  }
  return -1;
}

int rfind_any(const char tab[], const char tab2[]) {
  int index;

  for(int i = 0; i < my_strlen(tab); i++) {
    index = my_strlen(tab) - i - 1;
    //int isGood = 0;
    for(int i2 = 0; i2 < my_strlen(tab2); i2++) {
      //index2 = my_strlen(tab2) - i2 - 1;
      //printf("%c %c \n", tab[index + i2], tab2[i2]);
      if(tab[index] == tab2[i2]) {
        //isGood = 1;
        return index;
      }
    }
    // if(isGood) {
    //   return index + my_strlen(tab2);
    // }
  }
  return -1;
}

void resetWord(char arr[]) {
  int len = my_strlen(arr);
  arr[len - 1] = '\0';
}

int main() {
  char word[10000];
  char word2[10000];

  printf("Wpisz wyraz2:\n");
  fgets(word,10000,stdin);
  resetWord(word);

  //printf("%i\n", my_strlen(word));
  //scanf("%s", word);
  //scanf("%1000s", word);
  printf("Wpisz wyraz:\n");
  //scanf("%s", word2);
  fgets(word2,10000,stdin);
  resetWord(word2);
  word[1000] = '\0';
  word2[1000] = '\0';
  //scanf("%1000[^\n]", word2);
  //scanf("%1000s", word2);

  printf("first %i\nlast %i", find_any(word, word2), rfind_any(word, word2));

  return 0;
}


// #include <stdio.h>
//
//
// //Te dwie funkcje sa dla mnie
// int mystrlen(const char* str){
//   int length = 0;
//   for (int i = 0; str[i] != '\0'; i++) {
//     length++;
//   }
//   return length;
// }
//

//

// void readStringToArray(int arr[], int max) {
//   int i = 0;
//   char c;
//   while(1) {
//     scanf("%c", &c);
//     if(c == '\n') {
//       break;
//     }
//     if(i < max) {
//       arr[i] = c;
//     }
//     i++;
//   }
//   if(i >= max) {
//     i = max - 1;
//   }
//   for(int x = 0; x < i; x++) {
//     printf("%c", arr[x]);
//   }
//   printf("wtf%i\n", i);
//   //arr[i] = '\0';
// }
// int main() {
//   int max = 1000;
//   char arr[max + 1 + 1000], arr2[max + 1 + 1000];
//   printf("%i\n", rfind_string("kurde", "ur"));
//   printf("Wpisz\n");
//   //fgets(arr, max + 1 + 1000, stdin);
//   //readStringToArray(arr, 1000);
//   //printf("length%i\n", my_strlen(arr));
//   printf("Wpisz\n");
//   //fgets(arr2, max + 1 + 1000, stdin);
//   //readStringToArray(arr2, 1000);
//   printf("%i\n%i", find_string(arr, arr2), rfind_string(arr, arr2));
// }
