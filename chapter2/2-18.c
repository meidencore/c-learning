#include <stdio.h>

int main(void) {
  int number2 = 0;
  int number1 = 0;

  puts("Enter 2 numbers:");

  scanf("%d %d", &number1, &number2);

  if (number1 == number2) {
    puts("this numbers are equal");
  }
  if (number1 > number2) {
    printf("%d is larger", number1);
  }
  if (number2 > number1) {
    printf("%d is larger", number2);
  }
}
