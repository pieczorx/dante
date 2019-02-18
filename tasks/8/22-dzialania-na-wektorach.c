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
  int isGood, i2;
  for(i2 = 0; i2 < size; i2++) {
    isGood = scanf("%d", &vec[i2]);

    if(!isGood) {
      //printf("Incorrect input");
      return -2;
    }
    if(getchar() == '\n' || vec[i2] == stop_value) {
      break;
    }
    scanf(" ");
  }
  if(i2 == 0) {
    return -1;
  }
  return i2;
}
void display_vector(const int vec[], int size) {
  for(int i = 0; i < size; i++) {
    printf("%i ", vec[i]);
  }
}

int main() {
  int max = 5;
  int vec1[max], vec2[max];
  printf("Wpisz wektor 1\n");
  int v1l = read_vector(vec1, max, 0);
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


  int finalLength = concat_begin(vec1, v1l, vec2, v2l, vecConcatBegin, max);
  if(finalLength == -2) {
    printf("\nOutput buffer is too small\n");
    return 0;
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
