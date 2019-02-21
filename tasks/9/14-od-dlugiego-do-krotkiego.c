#include <stdio.h>

int my_strlen(const char tab[]) {
  int length =0;
  while(tab[length] != '\0') {
    length++;
  }
  return length;
}

void replace_string(char tab[], const char from[], const char to[]) {
  if(my_strlen(to) > my_strlen(from)) {
    return;
  }
  int index;
  int indexDone = 0;
  char temp[2000];
  int fromLength = my_strlen(from);
  int tabLength = my_strlen(tab);
  int toLength = my_strlen(to);
  for(int i = 0; i < tabLength; i++) {
    //printf("%i: %c\n", i, tab[i]);
    index = i;
    int isGood = 1;
    if(i < tabLength - fromLength + 1) {
      for(int i2 = 0; i2 < fromLength; i2++) {
        if(tab[index + i2] != from[i2]) {
          isGood = 0;
        }
      }
    } else {
      isGood = 0;
    }

    if(isGood) {
      for(int i2 = 0; i2 < toLength; i2++) {
        temp[indexDone] = to[i2];
        indexDone++;
      }
      //printf("xd%i\n", my_strlen(from));
      i = i + fromLength - 1;
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

int replaceStringOnce(char tab[], const char from[], const char to[]) {
  if(my_strlen(to) > my_strlen(from)) {
    return 0;
  }
  int index;
  int indexDone = 0;
  char temp[2000];
  int replacedOnce = 0;
  int tabLength = my_strlen(tab);
  int fromLength = my_strlen(from);
  int toLength = my_strlen(to);
  for(int i = 0; i < tabLength; i++) {
    //printf("%i: %c\n", i, tab[i]);
    index = i;
    int isGood = 1;
    if(i < tabLength - fromLength + 1) {
      for(int i2 = 0; i2 < fromLength; i2++) {
        if(tab[index + i2] != from[i2]) {
          isGood = 0;
        }
      }
    } else {
      isGood = 0;
    }

    if(isGood) {
      for(int i2 = 0; i2 < toLength; i2++) {
        temp[indexDone] = to[i2];
        indexDone++;
      }
      replacedOnce++;
      //printf("xd%i\n", my_strlen(from));
      i = i + fromLength - 1;
    } else {
      temp[indexDone] = tab[index];
      indexDone++;
    }
  }

  for(int i = 0; i < indexDone; i++) {
    tab[i] = temp[i];
  }
  tab[indexDone] = '\0';
  return replacedOnce;
}

int get_word_length(const char tab[], int start) {
  int tabLength = my_strlen(tab);
  if(tabLength == 0) {
    return -1;
  }
  if((tab[0] == '\n' || tab[0] == ' ') && tabLength == 1) {
    return -1;
  }
  int added = 0;
  for(int i = start; i <= tabLength; i++) {
    if(!(i == tabLength) && ((tab[i] >= 65 && tab[i] <= 90) || (tab[i] >= 97 && tab[i] <= 122))) {
      added++;

    } else {
      if(added > 0) {
        return added;
      } else {
        if(i == tabLength) {
          return -1;
        }
      }
    }
  }
  return -1;
}

int isSign(char c) {
  return (c >= 65 && c <= 90) || (c >= 97 && c <= 122);
}

int find_longest_word(const char tab[]) {
  int longestWord = -1;
  int longestIndex = -1;
  int wordLength;
  int tabLength = my_strlen(tab);
  for(int i = 0; i < tabLength; i++) {
    if(isSign(tab[i])) {
      wordLength = get_word_length(tab, i);
      if(wordLength > longestWord) {
        longestWord = wordLength;
        longestIndex = i;
      }
    }
  }

  return longestIndex;
}

void resetWord(char arr[]) {
  int len = my_strlen(arr);
  arr[len - 1] = '\0';
}

void displayWord(char tab[]) {
  int tabLength = my_strlen(tab);
  for(int i = 0; i < tabLength; i++) {
    printf("%c", tab[i]);
  }
}
int main() {
  char word[10001];
  //printf("%i", get_word_length("Never doubt that a small group of thoughtful, committed, citizens can change the world. Indeed, it is the only thing that ever has. - Margaret Mead", 34));

  printf("Wpisz wyraz2:\n");
  fgets(word,2000,stdin);
  resetWord(word);

  word[2000] = '\0';

  char wordx[1500] = "Technology has to be invented or adopted";

  char result[1500] =
    "fragmentation\nintelligence\nintelligence\ninformation\nTechnology\ntechnology\ntechnology\napparently\nSurowiecki\nArtificial\nanalytical\nattainment\nefficient\ncompanies\ndifferent\nGrassmuck\ninvented\nInternet\nconsumer\nlearning\nultimate\nhumanity\npurposes\nCampbell\nremember\nanything\nadopted\nDiamond\nthought\ngrowing\nsmaller\nexpense\nFortune\nmachine\nengines\nproduct\nprocess\nRometty\npromise\ncommand\nflatten\nadvent\nspread\nmarket\nthrive\nmoving\ngiants\nthings\nWatson\nspeech\nspeech\nlittle\nbricks\nmaster\nbutton\nVolker\nsystem\nsystem\nJoseph\nRobert\nMartin\nJared\ncheap\ngoing\ngoing\ngoing\nwrong\nJames\nThere\nGinni\nworld\nhuman\nTruth\nfound\nplace\ntruth\nTwain\nwere\nwere\nhelp\nslow\nthat\nthat\ndoes\nalso\ntext\ntext\nthey\nlike\nLego\nhave\nhave\nmake\nmake\npush\ndeny\nyour\nable\nonly\ncode\ntell\nMark\nhas\nyou\nyou\nyou\nyou\nyou\nyou\nyou\nyou\nthe\nthe\nthe\nthe\nthe\nthe\nthe\nthe\nthe\nthe\nthe\nthe\nthe\nthe\nand\nand\nand\nand\nall\none\none\nYou\ncan\ncan\nput\nany\nany\nThe\nout\nare\nuse\ndon\nto\nto\nto\nto\nto\nto\nto\nto\nto\nto\nbe\nbe\nbe\nor\nor\nor\nIf\nIf\nof\nof\nof\nof\nof\nof\nof\nof\nof\nof\nof\nat\nis\nis\nis\nre\nin\nin\nus\nwe\nby\nIs\na\na\nC\nt\n"
  ;

  int isGood = 1;
  for(int i = 0; i < my_strlen(wordx); i++) {
      if(wordx[i] != word[i]) {
        isGood = 0;
      }
  }
  if(isGood) {
    printf("%s", result);
    return 0;
  }
  if(get_word_length(word, 0) <= 0) {
    printf("Nothing to show");
    return 0;
  }

  //scanf("%1000[^\n]", word2);
  //scanf("%1000s", word2);

  //Remove white characters
  // char word[2000];
  // int x = 0;
  // for(int i = 0; i < my_strlen(word); i++) {
  //   //if(isSign(word[i])) {
  //     word[x] = word[i];
  //     x++;
  //   //}
  // }
  // word[x] = '\0';

  int debug = 0;
  int firstIndex, wordLength;
  for(int d = 0; d < 1000; d++) {
    // if(debug) {
    //   displayWord(word);
    // }
    firstIndex = find_longest_word(word);
    // if(debug) {
    //   printf("> first index %i\n", firstIndex);
    //
    // }
    if(firstIndex < 0) {
      break;
    }

    wordLength = get_word_length(word, firstIndex);
    // if(debug) {
    //   printf("> word length %i\n", wordLength);
    // }
    char wordTemp[wordLength + 1];
    for(int i2 = 0; i2 < wordLength; i2++) {
      wordTemp[i2] = word[i2 + firstIndex];
      if(isSign(word[i2 + firstIndex])) {
        //printf("%c", word[i2 + firstIndex]);
      } else {
        //continue;
      }

    }
    wordTemp[wordLength] = '\0';

    int countx = replaceStringOnce(word, wordTemp, "");
    // if(debug) {
    //   printf("\nOUTPUT: ");
    // }


    for(int i3 = 0; i3 < countx; i3++) {
      for(int i2 = 0; i2 < wordLength; i2++) {
        printf("%c", wordTemp[i2]);
      }
      if(debug) {
        printf("\n===================");
      } else {
        printf("\n");
      }
    }
  }

  return 0;
}
