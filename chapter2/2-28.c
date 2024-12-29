#include <stdio.h>

int main(void) {
  int age = 0;
  printf("%s", "Enter your age: ");
  scanf("%d", &age);
  int max = 220 - age;
  int minTarget = 0.5*max;
  int maxTarget = 0.85*max;

  printf("the maximun heart rate for your age is: %d and your range should be between %d - %d\n", max, minTarget, maxTarget);
}
