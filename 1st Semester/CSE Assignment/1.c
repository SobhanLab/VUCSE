#include <math.h>
#include <stdio.h>
#include <string.h>

double distance(int X1, int Y1, int X2, int Y2) {
  return sqrt((X1 - X2) * (X1 - X2) + (Y1 - Y2) * (Y1 - Y2));
}

int main() {

  int SX, SY, DX, DY;
  double min, current;
  char move[3], final[100] = "";
  int tempX, tempY, steps = 0;

  printf("SX = ");
  scanf("%d", &SX);

  printf("SY = ");
  scanf("%d", &SY);

  printf("DX = ");
  scanf("%d", &DX);

  printf("DY = ");
  scanf("%d", &DY);

  while (distance(SX, SY, DX, DY) != 0) {
    tempX = SX;
    tempY = SY;
    current = distance(SX, SY, DX, DY);

    if (distance(SX + 1, SY, DX, DY) < current) {
      tempX = SX + 1;
      current = distance(tempX, SY, DX, DY);

      if (distance(tempX, SY + 1, DX, DY) < current) {
        tempY = SY + 1;
        current = distance(tempX, SY + 1, DX, DY);
      } else if (distance(tempX, SY - 1, DX, DY) < current) {
        tempY = SY - 1;
        current = distance(tempX, SY - 1, DX, DY);
      }
    }

    if (distance(SX - 1, SY, DX, DY) < current) {
      tempX = SX - 1;
      current = distance(tempX, SY, DX, DY);

      if (distance(tempX, SY + 1, DX, DY) < current) {
        tempY = SY + 1;
        current = distance(tempX, SY + 1, DX, DY);
      } else if (distance(tempX, SY - 1, DX, DY) < current) {
        tempY = SY - 1;
        current = distance(tempX, SY - 1, DX, DY);
      }
    }

    if (distance(SX, SY + 1, DX, DY) < current) {
      tempY = SY + 1;
      current = distance(tempX, SY, DX, DY);

      if (distance(SX + 1, tempY, DX, DY) < current) {
        tempX = SX + 1;
        current = distance(SX + 1, tempY, DX, DY);
      } else if (distance(SX - 1, tempY, DX, DY) < current) {
        tempX = SX - 1;
        current = distance(SX - 1, tempY, DX, DY);
      }
    }
    
    if (distance(SX, SY - 1, DX, DY) < current) {
      tempY = SY - 1;
      current = distance(tempX, SY, DX, DY);

      if (distance(SX + 1, tempY, DX, DY) < current) {
        tempX = SX + 1;
        current = distance(SX + 1, tempY, DX, DY);
      } else if (distance(SX - 1, tempY, DX, DY) < current) {
        tempX = SX - 1;
        current = distance(SX - 1, tempY, DX, DY);
      }
    }

    if (SY < tempY) {
      strcpy(move, "U");

      if (SX > tempX) {
        strcat(move, "L");
      } else if (SX < tempX) {
        strcat(move, "R");
      }
    } else if (SY > tempY) {
      strcpy(move, "D");

      if (SX > tempX) {
        strcat(move, "L");
      } else if (SX < tempX) {
        strcat(move, "R");
      }
    } else if (SX > tempX) {
      strcpy(move, "L");
    } else if (SX < tempX) {
      strcpy(move, "R");
    }

    SX = tempX;
    SY = tempY;

    strcat(final, move);
    strcat(final, "--");

    steps++;
  }

  final[strlen(final) - 2] = '\0';
  printf("Min Steps = %d\n", steps);
  printf("Path: %s\n", final);

  return 0;
}
