#include <stdio.h>

int main(void) {
  char a;
  printf("%s", "Enter a char: ");
  scanf("%c", &a);

  printf("the decimal value of the char \"%c\" is: %d", a, a);
}
