/* Write a C program that will read an integer number will do-
I.	Count of digits.
II.	Sum of digits.
III.	Reverse the number.
IV.	Check the number palindrome or not */

#include <stdio.h>
int main()
{
    int n, count=0, sum=0, rem, rev = 0;
    printf("Enter a Number: ");
    scanf("%d",&n);
    int ori=n;

    while (n!=0)
    {
        rem=n%10;
        count=count+1;
        sum=sum+rem;
        n=n/10;
        rev = rev * 10 + rem;
    }
    printf("Number of Digits: %d\n", count);
    printf("Sum of The Numbers: %d\n", sum);
    printf("Reverse: %d\n", rev);

    if (ori == rev)

        {
           printf("%d is a Palindrome.", ori);
        }
    else
    {
      printf("%d is not a Palindrome.", ori);
    }


   return 0;
}
