#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int randomint(int lower, int upper) {
    return (rand() % (upper - lower + 1)) + lower;
}

void swap(char *first, char *second) {
    char temp = *first;
    *first = *second;
    *second = temp;
}

int main() {
    srand(time(NULL));

    char special_chars[] = "!\"#$%&'()*+,-./:;<=>?@[\\]^_`{|}~";

    int length;
    printf("N = ");
    scanf("%d", &length);

    if (length < 6) {
        length = 6;
    }

    char password[length + 1];
    password[length] = '\0';

    password[0] = special_chars[randomint(0, sizeof(special_chars) - 2)];
    password[1] = (char)randomint('a', 'z');
    password[2] = (char)randomint('A', 'Z');
    password[3] = (char)randomint('A', 'Z');
    password[4] = (char)randomint('0', '9');
    password[5] = (char)randomint('0', '9');

    for (int i = 6; i < length; i++) {
        password[i] = (char)randomint(33, 126);
    }

    for (int i = 0; i < length; i++) {
        swap(&password[i], &password[randomint(0, length - 1)]);
    }

    printf("Password = %s\n", password);

    return 0;
}
