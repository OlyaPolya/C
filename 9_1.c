#include <stdio.h>
int main(void) {
    
  int x;
  scanf("%d", &x);
  fflush(stdin);
  char str[x];
  for (int i=0; i < x; i++) {
      scanf(" %c", &str[i]);
  }
int z = 0;  
  for (int y = 65; y <= 90 ; y++) {
      for (int i=0; i < x; i++) {
          if ((str[i] == y) || (str[i] == y+32)) {
              z++;
          }
      }
  printf("%d ", z);
  z=0; 
  }
return 0;
}