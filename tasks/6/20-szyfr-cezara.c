#include <stdio.h>

int main() {
  int max = 1000;
  int key = 0;
  char a[max];
  printf("Wpisz cokolwiek:");

  int i, i2;
  for(i = 0; i < max; i++) {
    scanf("%c", &a[i]);
    if(a[i] == '\n') {
      break;
    }
  }

  printf("Wpisz klucz");
  scanf("%i", &key);
  int message[max];
  //int output[max];
  int ch;
  for(i2 = 0; i2 < i; i2++) {
    ch = a[i2];
    if(ch >= 'a' && ch <= 'z'){
			ch = ch + key;

			if(ch > 'z'){
				ch = ch - 'z' + 'a' - 1;
			}

			message[i] = ch;
		}
		else if(ch >= 'A' && ch <= 'Z'){
			ch = ch + key;

			if(ch > 'Z'){
				ch = ch - 'Z' + 'A' - 1;
			}

			message[i] = ch;
		}
    if(ch == ' ') {
      message[i] = ' ';
    }

    //xd = a[i2] + key;
    printf("%c", message[i]);
  }

}
