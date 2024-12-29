#include <stdio.h>

int main(void) {
  float pi = 3.14159;
  int radius = 0;
  printf("%s", "Enter the radius of the circle: ");
  scanf("%d", &radius);

  printf("the diameter is: %d\n", 2*radius);
  printf("the circumference is: %f\n", 2*radius*pi);
  printf("the area is: %f\n", pi*radius*radius);
}
