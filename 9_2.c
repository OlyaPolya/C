#include <stdio.h>

int main() {
  // put your code here
  char x;
  int z=0;
  scanf("%c", &x);
  for (int i = 65; i <= 90; i++) {
    if (x == i || x == i + 32){
      printf("en");
      z=1;
    }
  }
  for (int i = 48; i <= 57; i++) {
    if (x == i){
      printf("digit");
      z = 1;
    }
  }
  if (z == 0) {
    printf("error");
  }
  return 0;
}