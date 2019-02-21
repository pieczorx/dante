#include <stdio.h>

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

int binary_search(const int arr[], int l, int r, int x) {

  if(arr[l] == x) {
    return l;
  } else {
    l++;
    if(l >= r) {
      return -1;
    }
    return binary_search(arr, l, r, x);
  }
}

int checkIfGrowing(int arr[], int arrLength, int current) {
  current++;
  //printf("%i vs %i\n", arr[current], arr[current - 1]);
  if(current >= arrLength) {
    return 1;
  }
  if(arr[current] < arr[current - 1]) {
    return 0;
  }
  return checkIfGrowing(arr, arrLength, current);
}

int main() {
  int arr[150];
  int x;
  printf("pls\n");
  int count = read_vector(arr, 150, 0);
  if(count < 0) {
    printf("Incorrect input");
    return 1;
  }
  if(!checkIfGrowing(arr, count, 0)) {
    printf("Incorrect input data");
    return 2;
  }

  printf("pls 2: ");
  int isGood = scanf("%i", &x);
  if(!isGood) {
    printf("Incorrect input");
    return 1;
  }

  int found = binary_search(arr, 0, count, x);
  printf("prosze: %i", found);
}
