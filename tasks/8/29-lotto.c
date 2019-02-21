#include <stdio.h>
#include <stdlib.h>
#include <time.h>

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

int generateOneNumber(int minimum_number, int max_number) {
  return rand() % (max_number + 1 - minimum_number) + minimum_number;
}

int generate(int lotto[], int N, int start, int end) {
  if(end < start) {
    return -1;
  }
  if((end - start + 1) < N) {
    return -1;
  }
  int number, i2, i, noCopy, isGood;
  for(i = 0; i < N; i++) {
    //printf("mamy number %i===\n", i);
    isGood = 0;
    while(!isGood) {
      number = generateOneNumber(start, end);
      noCopy = 1;
      for(i2 = 0; i2 < i; i2++) {
      //  printf("%i vs %i\n", number, lotto[i2]);
        if(number == lotto[i2]) {
        //  printf("=================== kopia================= \n");
          //continue;
          noCopy = 0;
        }
      }
      if(noCopy) {
        //git, lecimy dalej
        lotto[i] = number;
        isGood = 1;
      }
    }
  }
  return 0;
}




int main() {
  int max = 6;
  srand (time(NULL));
  int vec1[max];
  // for(int i = 0; i < 100; i++) {

    generate(vec1, max, 1, 49);
    //generate(vec1, max, 8, 8);
    display_vector(vec1, max);
  //   printf("\n");
  // }





}
