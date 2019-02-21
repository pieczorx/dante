#include <stdio.h>

int print_combination(int arr[], int start, int N, int start_number, int end_number) {

  printCombination(arrOfNumbers, i, N);
}

// Driver program to test above functions
// int main()
// {
//     int arr[] = {1, 2, 3, 4, 5};
//     int r = 3;
//     int n = sizeof(arr)/sizeof(arr[0]);
//     printCombination(arr, n, r);
//     return 0;
// }

int main() {
  int start, end, howMany, isGood;
  printf("Od");
  isGood = scanf("%i", &start);

  if(!isGood) {
    printf("Incorrect input");
    return 1;
  }

  printf("Do");
  isGood = scanf("%i", &end);
  if(!isGood) {
    printf("Incorrect input");
    return 1;
  }

  printf("Ile tego");
  isGood = scanf("%i", &howMany);
  if(!isGood) {
    printf("Incorrect input");
    return 1;
  }
  if(howMany > (end - start + 2)) {
    printf("Incorrect input data");
    return 2;
  }

  int x[10000];
  print_combination(x, 0, howMany, start, end);
}
