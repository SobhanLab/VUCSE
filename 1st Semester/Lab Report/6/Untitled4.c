//Write a C program to print Fibonacci Series at n-th term.

#include<stdio.h>
int main()
{
    int n1,pn=-1,fn=1,fib;
    printf("Enter a Number: ");
    scanf("%d",&n1);
    for(int i=1;i<=n1;i++)
    {
        fib=fn+pn;
        printf("%d\t",fib);
        pn=fn;
        fn=fib;
    }

    return 0;
}
