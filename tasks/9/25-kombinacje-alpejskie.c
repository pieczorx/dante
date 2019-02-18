#include <stdio.h>

int print_combination(int arr[], int start, int N, int start_number, int end_number) {
  int all = end_number - start_number + 1;
  int newArr[all];
  for(i = 0; i < all; i++)
}
void print_combination(int arr[], int n, int r) {
    // A temporary array to store all combination one by one
    int data[r];

    // Print all combination using temprary array 'data[]'
    combinationUtil(arr, data, 0, n-1, 0, r);
}

/* arr[]  ---> Input Array
   data[] ---> Temporary array to store current combination
   start & end ---> Staring and Ending indexes in arr[]
   index  ---> Current index in data[]
   r ---> Size of a combination to be printed */
void combinationUtil(int arr[], int data[], int start, int end, int index, int r) {
    // Current combination is ready to be printed, print it
    if (index == r) {
        for (int j=0; j<r; j++)
            printf("%d ", data[j]);
        printf("\n");
        return;
    }

    for (int i=start; i<=end && end-i+1 >= r-index; i++) {
        data[index] = arr[i];
        combinationUtil(arr, data, i+1, end, index+1, r);
    }
}


int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int r = 3;
    int n = sizeof(arr)/sizeof(arr[0]);
    print_combination(arr, n, r);
}


//
// int main() {
  //   int x1, g;
  //   printf("podaj x: ");
  //   g = scanf("%i", &x1);
  //   if(g != 1) {
    //     printf("Incorrect input");
    //     return 1;
    //   }
    //   if(is_divisible_by_11(x1)) {
      //     printf("YES");
      //   } else {
        //     printf("NO");
        //   }
        //   return 0;
        // }
