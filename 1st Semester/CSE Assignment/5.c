#include <stdio.h>

int check_prime(int number) {
  if (number < 2 || number % 2 == 0) {
    return 0;
  }
  for (int i = 3; i * i <= number; i += 2) {
    if (number % i == 0) {
      return 0;
    }
  }
  return 1;
}

int main() {
  int number;
  printf("N = ");
  scanf("%d", &number);

  for (int i = 2; i <= number / 2; i++) {
    if (check_prime(i) && check_prime(number - i)) {
      printf("%d %d\n", i, number - i);
    }
  }

  return 0;
}
