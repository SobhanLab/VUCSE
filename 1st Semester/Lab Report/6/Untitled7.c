//Write a C program to print the sum of the following series- 1+1/2+1/3+1/4+1/5+…+1/n


#include <stdio.h>

int main()

{
  int n;
  double sum = 0;
    printf("Enter a Number: ");
    scanf("%d",&n);

    float r=0;
    for(float j=1;j<=n;j++)
    {
        r+=1/j;
        printf("%.3f\t",1/j);
    }
    printf("\n Sum of the following series is '%.3f'\n.",r);

    return 0;
}
