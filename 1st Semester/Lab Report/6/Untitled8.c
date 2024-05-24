//Write a C program to print the sum of the following series- e.g. : 1+11+111+1111+11111…+nnnnnn / 5+55+555+5555+55555+...+nnnnnn


#include <stdio.h>

int main()
{
    int i,t, m,sum=0,n=0;
    printf("Enter the number of terms: ");
    scanf("%d", &t);
    printf("\nEnter the multiplier: ");
    scanf("%d", &m);
    printf("\n");

    for (i=1; i<= t; i++)
    {
        n=n * 10 + m;
        sum+=n;
        printf("%d",n);

    if (i<t)
        {
            printf("+");
        }
    }

    printf("\nThe sum of the series is: %d\n", sum);

    return 0;
}
