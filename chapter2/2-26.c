#include <stdio.h>

int main(void) {
  int a = 0;
  printf("%s", "Enter a five digits number: ");
  scanf("%d", &a);
  int pos1 = 0;
  int pos2 = 0;
  int pos3 = 0;
  int pos4 = 0;
  int pos5 = 0;
  
  pos1 = a % 10;
  a = a / 10;
  pos2 = a % 10;
  a = a / 10;
  pos3 = a % 10;
  a = a / 10;
  pos4 = a % 10;
  a = a / 10;
  pos5 = a % 10;

  
  printf("%d   %d   %d   %d   %d\n", pos5, pos4, pos3, pos2, pos1);
}
