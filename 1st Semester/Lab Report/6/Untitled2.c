//Write a C program to check whether a number is prime or not.

#include<stdio.h>
int main()
{
    int n1;
    printf("Enter a Number: ");
    scanf("%d",&n1);
    if(n1<=1)
    {
        printf("%d is not a prime number",n1);
        return 0;
    }
    for(int i=2;i<n1;i++)
    {
        if(n1%i==0)
        {
            printf("%d is not a prime number",n1);
            break;
        }
        else
        {
            printf("%d is a prime number",n1);
            break;
        }
    }
    return 0;
}
