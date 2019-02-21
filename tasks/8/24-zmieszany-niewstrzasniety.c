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

// A function to generate a random permutation of arr[]
void swap (int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void shuffle(int tab[], int size)
{
    // Use a different seed value so that we don't get same
    // result each time we run this program


    // Start from the last element and swap one by one. We don't
    // need to run for the first element that's why i > 0

    for (int i = size-1; i > 0; i--)
    {

        // Pick a random index from 0 to i
        int j = rand() % (i+1);

        // Swap arr[i] with the element at random index
        swap(&tab[i], &tab[j]);
    }
}

int main() {
  int max = 100;
  srand (time(NULL));
  int vec1[max];
  printf("Wpisz wektor 1\n");
  int v1l = read_vector(vec1, max, 0);
  if(v1l == -1) {
    printf("Not enough data available");
    return 2;
  }
  if(v1l == -2) {
    printf("Incorrect input");
    return 1;
  }

  shuffle(vec1, v1l);

  display_vector(vec1, v1l);





}
