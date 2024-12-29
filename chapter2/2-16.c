#include <stdio.h>

int main(void) {
  int number2 = 0;
  int number1 = 0;

  puts("Enter 2 numbers:");

  scanf("%d %d", &number1, &number2);

  printf("the sum is equal to: %d\n", number1 + number2);
  printf("the difference is equal to: %d\n", number1 - number2);
  printf("the multiplication is equal to: %d\n", number1 * number2);
  printf("the division is equal to: %d\n", number1 / number2);
  printf("the rest is equal to: %d\n", number1 % number2);
}
