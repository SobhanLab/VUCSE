#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
  srand(time(NULL));
  int lower, upper, guess;
  printf("A: ");
  scanf("%d", &lower);
  printf("B: ");
  scanf("%d", &upper);

  int point = 10;
  int lucky_number = (rand() % (upper - lower)) + lower;

  for (int tries = 0; tries < 10; tries++) {
    printf("Guess: ");
    scanf("%d", &guess);

    if (guess == lucky_number) {
      printf("Congratulations! You guessed the number!\n");
      printf("Your score: %d\n", 10 - tries);
      return 0;
    } else if (guess < lucky_number) {
      printf("Low\n");
    } else {
      printf("High\n");
    }
  }

  printf("Sorry, you ran out of tries. The number was %d\n", lucky_number);
  return 0;
}
