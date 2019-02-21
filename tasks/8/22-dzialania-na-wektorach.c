#include <stdio.h>

int concat_begin(const int first[], int size, const int second[], int size2, int dest[], int size3) {
  if(size <= 0 || size2 <= 0 || size3 <= 0) {
    return -1;
  }
  int calcSize = size + size2;
  if(calcSize > size3) {
    return -2;
  }
  for(int i = 0; i < calcSize; i++) {
    if(i < size) {
      dest[i] = first[i];
    } else {
      dest[i] = second[i - size];
    }
  }
  return calcSize;
}

int concat_end(const int first[], int size, const int second[], int size2, int dest[], int size3) {
  if(size <= 0 || size2 <= 0 || size3 <= 0) {
    return -1;
  }
  int calcSize = size + size2;
  if(calcSize > size3) {
    return -2;
  }
  for(int i = 0; i < calcSize; i++) {
    if(i < size2) {
      dest[i] = second[i];
    } else {
      dest[i] = first[i - size2];
    }
  }
  return calcSize;
}

int concat_zip(const int first[], int size, const int second[], int size2, int dest[], int size3) {
  if(size <= 0 || size2 <= 0 || size3 <= 0) {
    return -1;
  }
  int calcSize = size + size2;
  if(calcSize > size3) {
    return -2;
  }
  int added1 = 0;
  int added2 = 0;
  for(int i = 0; i < calcSize; i++) {
    if((added1 <= added2 && added1 < size) || added2 >= size2) {
      dest[i] = first[added1];
      added1++;
    } else {
      dest[i] = second[added2];
      added2++;
    }
  }
  return calcSize;
}



int read_vector(int vec[], int size, int stop_value) {
  if(size <= 0) {
    return -1;
  }

  int c;
  int s[10000];
  int sLength = 0;
  while(1) {
    c = getchar();
    if(c == 10) {
      break;
    }
    s[sLength] = c;
    sLength++;
  }

  int currentValue = 0;
  int isCurrentValueSet = 0;
  int currentFactor = 1;
  int output[10000];
  int outputLength = 0;
  int isNumber, isSpace, isMinus;
  int number;
  for(int i = 0; i < sLength; i++) {
    c = s[sLength - i - 1];
    isNumber = (c >= 48) && (c <= 57);
    isSpace = (c == 32);
    isMinus = (c == 45);

    if(!isNumber && !isSpace && !isMinus) {
      return -2;
    }
    if(isMinus) {
      currentValue = currentValue * -1;
    }

    if(isNumber) {
      number = c - 48;
      currentValue = currentValue + (number * currentFactor);
      currentFactor = currentFactor * 10;
      isCurrentValueSet = 1;
    }

    if(isCurrentValueSet && (isSpace || i == sLength - 1)) {
      output[outputLength] = currentValue;
      outputLength++;
      currentValue = 0;
      currentFactor = 1;
    }
  }

  int finalCount = 0;
  for(int i = 0; i < outputLength && i < size; i++) {
    c = output[outputLength - 1 - i];

    if(c == stop_value) {
      break;
    }
    vec[i] = c;
    finalCount++;
  }

  if(finalCount == 0) {
    return -1;
  }
  return finalCount;
  // printf("Przeczytano znak o numerze %i\n", c);
  //
  //
  // if(c == 10) {
  //   break;
  // }
  //
  //
  // if(c == 45) {
  //   minusFactor = -1;
  //   continue;
  // }
  //
  // if(c >= 48 && c <= 57) {
  //   vec[i2] = (c - 48) * minusFactor;
  //   i2++;
  //   minusFactor = 1;
  // }



  //v2
  // int  isFinished = 0;
  // i2 = 0;
  // do {
  //   if(i2 >= size || isFinished) {
  //     isGood = scanf("%d", &x);
  //   } else {
  //     isGood = scanf("%d", &vec[i2]);
  //   }
  //   if(!isGood) {
  //     return -2;
  //   }
  //   if(i2 < size && !isFinished) {
  //     if(vec[i2] == stop_value) {
  //       isFinished = 1;
  //       break;
  //     }
  //     i2++;
  //   }
  //
  // } while(getchar() != '\n');



  // if(vec[0] == stop_value) {
  //   return -1;
  // }
  //
  // if(i2 > size) {
  //   i2 = size;
  // }
  //
  // return i2;
  //return 0;
}
void display_vector(const int vec[], int size) {
  for(int i = 0; i < size; i++) {
    printf("%i ", vec[i]);
  }
}

int main() {
  int max = 50;

  //test
  //printf("test3\n");
  //int d[max];
  //int dl = read_vector(d, max, 0);
  //printf("mamy tyle %i", dl);
  //return 0;

  int vec1[max], vec2[max];
  printf("Wpisz wektor 1\n");
  int v1l = read_vector(vec1, max, 0);
  //printf("Wczytano %i", v1l);
  if(v1l <= 0) {
    if(v1l == -2) {
      printf("Incorrect input");
      return 1;
    }
    printf("not enough data available");
    return 2;
  }
  printf("Wpisz wektor 2\n");
  int v2l = read_vector(vec2, max, 0);
  int vecConcatBegin[max], vecConcatEnd[max], vecConcatZip[max];
  if(v1l <= 0 || v2l <= 0) {
    if(v1l == -2 || v2l == -2) {
      printf("Incorrect input");
      return 1;
    }
    printf("not enough data available");
    return 2;
  }
  display_vector(vec1, v1l);
  printf("\n");
  display_vector(vec2, v2l);

  if(v2l + v1l > 50) {
    printf("\nOutput buffer is too small\n");
    return 0;
  }
  int finalLength = concat_begin(vec1, v1l, vec2, v2l, vecConcatBegin, max);
  if(finalLength == -2) {
    printf("\nOutput buffer is too small\n");
    //return 0;
  }
  printf("\n");
  display_vector(vecConcatBegin, finalLength);


  int finalLength2 = concat_end(vec1, v1l, vec2, v2l, vecConcatEnd, max);
  printf("\n");
  display_vector(vecConcatEnd, finalLength2);



  int finalLength3 = concat_zip(vec1, v1l, vec2, v2l, vecConcatZip, max);
  printf("\n");
  display_vector(vecConcatZip, finalLength3);

}
