#include <stdio.h>
#include <stdlib.h>

int main() {
    int sx, sy, dx, dy;
    printf("SX : ");
    scanf("%d", &sx);
    printf("SY : ");
    scanf("%d", &sy);
    printf("DX : ");
    scanf("%d", &dx);
    printf("DY : ");
    scanf("%d", &dy);

    int horizontal_steps = abs(dx - sx);
    int vertical_steps = abs(dy - sy);
    int total_steps = horizontal_steps > vertical_steps ? horizontal_steps : vertical_steps;

    printf("Min Steps = %d\n", total_steps);
    printf("Path: ");

    while (sx != dx || sy != dy) {
        if (sx < dx) {
            printf("R");
            sx++;
        } else if (sx > dx) {
            printf("L");
            sx--;
        }

        if (sy < dy) {
            printf("U");
            sy++;
        } else if (sy > dy) {
            printf("D");
            sy--;
        }

        if (sx != dx || sy != dy) printf("--");
    }

    printf("\n");

    return 0;
}
