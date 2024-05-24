//Write a C program to print the sum of the following series- 1+2+4+7+11+16+…+n

#include<stdio.h>

int main()
{

    int n, s=1,sum=0;
    printf("Enter a Number: ");
    scanf("%d",&n);
    for(int i=0;i<=n-1;i++)
    {
        s+=i;
        printf("%d \t",s);
        sum+=s;
    }

    printf("\n Sum of the following series is '%d'.\n",sum);

  return 0;
}
