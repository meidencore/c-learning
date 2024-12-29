#include <stdio.h>

int main(void) {
  int a = 0;
  printf("%s", "Enter a number: ");
  scanf("%d", &a);

  int rem = a % 2;
  if (rem == 0) {
    printf("the number %d is even\n", a);
  }
  if (rem != 0) {
    printf("the number %d is odd\n", a);
  }
}

