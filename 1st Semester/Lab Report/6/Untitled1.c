//Write a C program to find the LCM & GCD of two numbers.

#include<stdio.h>
int main()
{
    int num1,num2;
    printf("Enter 2 Numbers: ");
    scanf("%d %d", &num1,&num2);

    for(int i=num1>num2?num1:num2;i<=num1*num2;i++)
    {
        if(i%num1==0 && i%num2==0)
        {
            printf("\nLCM of %d and %d is %d",num1,num2,i);
            break;
        }
    }
    for(int j=num1>num2?num1:num2;j>=0;j--)
    {
        if(num1%j==0 && num2%j==0)
        {
            printf("\nGCM of %d and %d is %d",num1,num2,j);
            break;
        }
    }
    return 0;
}
