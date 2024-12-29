#include <stdio.h>

int main(void) {
  int a = 0;
  int b = 0;
  printf("%s", "Enter two numbers: ");
  scanf("%d%d", &a, &b);

  int rem = a % b;
  if (rem == 0) {
    printf("the number %d is multiple of %d\n", a, b);
  }
  if (rem != 0) {
    printf("the number %d is not multiple of %d\n", a, b);
  }
}
