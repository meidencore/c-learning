#include <stdio.h>

int main(void) {
  int number1 = 0;
  int number2 = 0;
  int number3 = 0;

  printf("%s", "Enter 3 numbers: ");

  scanf("%d %d %d", &number1, &number2, &number3);

  int sum = number1 + number2 + number3;
  int avg = sum / 3;
  int prod = number1 * number2 * number3;

  int largest = number1;
  int smaller = number1;

  if (number2 > largest) {
    largest = number2;
  }
  if (number3 > largest) {
    largest = number3;
  }
  if (number2 < smaller) {
    smaller = number2;
  }
  if (number3 < smaller) {
    smaller = number3;
  }

  printf("Sum is %d\n", sum);
  printf("Average is %d\n", avg);
  printf("Product is %d\n", prod);
  printf("Smallest is %d\n", smaller);
  printf("Largest is %d\n", largest);
}
