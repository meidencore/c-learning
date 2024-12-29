#include <stdio.h>

int main(void) {
  int a = 0;
  int b = 0;
  int c = 0;

  printf("%s", "Enter three numbers: ");
  scanf("%d%d%d", &a,&b,&c);

  int min = a;
  int mid = b;
  int max = c;

  if (b < min) {
    mid = min;
    min = b;
  }
  if (c < min) {
    max = mid;
    mid = min;
    min = c;
  }
  if (a > max) {
    mid = max;
    max = a;
  }
  if (b > max) {
    mid = max;
    max = b;
  }

  printf("%d %d %d", min, mid, max);
}
