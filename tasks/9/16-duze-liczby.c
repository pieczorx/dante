#include <stdio.h>

int my_strlen(const char tab[]) {
  int length =0;
  while(tab[length] != '\0') {
    length++;
  }
  return length;
}

void displayWord(char tab[]) {
  int tabLength = my_strlen(tab);
  for(int i = 0; i < tabLength; i++) {
    printf("%c", tab[i]);
  }
}

long long absolute(long long v) {
  if(v > 0) {
    return v;
  }
  return v * -1;
}

int add_comas(long long a, char output[], int size) {

  long long n = absolute(a);
  long long x[1000];
  int digitCount = 0;
  while(1) {
    x[digitCount] = (n % 10);
    //printf("%i", n % 10);
    n = (n - x[digitCount]) / 10;
    digitCount++;
    if(n == 0) {
      break;
    }
  }
  long long number;

  //Check
  int spaceNeeded = digitCount;
  if(a < 0) {
    spaceNeeded++;
  }

  for(int i = 0; i < digitCount; i++) {
    number = x[digitCount - i - 1];
    if((digitCount - i - 1) % 3 == 0 && (digitCount - i - 1) > 0) {
      spaceNeeded++;
    }
  }
  //printf("space %i\n", spaceNeeded);
  if(size <= spaceNeeded) {

    return 1;
  }

  //Do it

  int outputLength = 0;
  if(a < 0) {
    output[outputLength] = '-';
    outputLength++;
  }

  for(int i = 0; i < digitCount; i++) {
    number = x[digitCount - i - 1];

    output[outputLength] = number + '0';
    outputLength++;
    if((digitCount - i - 1) % 3 == 0 && (digitCount - i - 1) > 0) {
      output[outputLength] = ',';
      outputLength++;
    }
  }

  output[outputLength] = '\0';
  return 0;
}

int main() {
    long long a;
    printf("Wprowadz liczbe: ");
    if(scanf("%lld", &a) != 1) {
      printf("Incorrect input");
      return 1;
    }
    char output[1000];
    add_comas(a, output, 1000);
    displayWord(output);
    return 0;
}
