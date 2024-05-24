#include <stdio.h>

int square(int number) { return number * number; }

int main() {
  int lower, upper;
  printf("Initial: ");
  scanf("%d", &lower);
  printf("Final: ");
  scanf("%d", &upper);
  for (int i = lower; i < upper; i++) {
    for (int j = i; j < upper; j++) {
      for (int k = j; k <= upper; k++) {
        if (square(i) + square(j) == square(k)) {
          printf("%d, %d, %d\n", i, j, k);
        }
      }
    }
  }

  return 0;
}
