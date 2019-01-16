#include <stdio.h>
int power(int x, int y) {
  if(y <= 0) {
    return 1;
  }
  int outp = x;
  for(int i = 1; i < y; i++) {
    outp = outp * x;
  }
  return outp;
}
int main() {
  int max = 1000;
  char a[max + 1];

  char allowedSigns[] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', '|', '-'};
  printf("Podaj wyrazenie:");

  int i, i2, charExists;

  for(i = 0; i < max; i++) {
    scanf("%c", &a[i]);

    if(a[i] == '\n') {
      break;
    }
    charExists = 0;
    for(i2 = 0; i2 < (int)sizeof(allowedSigns); i2++) {
      if(a[i] == allowedSigns[i2]) {
        charExists = 1;
        break;
      }
    }
    if(!charExists) {
      printf("Incorrect input");
      return 1;
    }
  }
  a[i] = '|';
  int inputCharLength = i + 1;

  int isStart = 1;
  int currentPower = 0;
  int currentOutput = 0;
  long output[1000];
  long currentVal;
  char currentChar;
  for(i = 0; i < 1000; i++) {
    output[i] = 0;
  }
  for(i = 0; i < inputCharLength; i++) {
    currentChar = a[i];

    if(isStart) {
      for(i2 = 0; i2 < 1001; i2++) {
        if(a[i + i2] == '|' || a[i + i2] == '-') {
          break;
        }
        currentPower++;
      }
    }

    if(currentChar != '|' && currentChar != '-') {
      //printf("===\ntakipower %i\n", power(10, currentPower - 1));

      currentVal = (long)power(10, currentPower - 1) * (long)((int)currentChar-48);
      //printf("Dodajemy, currentChar %c, currentOutput %i, power %i, currentVal %i\n", (int)currentChar-48, currentOutput, currentPower, currentVal);
      output[currentOutput] = output[currentOutput] + currentVal;
      currentPower = currentPower - 1;
    }



    isStart = 0;
    if(currentChar == '|') {
      currentPower = 0;
      isStart = 1;
      currentOutput++;
    }
    if(currentChar == '-') {
      isStart = 1;
      currentPower = 0;
    }
  }

  for(i = 0; i < currentOutput; i++) {
    printf("%ld ", output[i]);
  }
  return 0;

}
