#include<stdio.h>
int main()
{
    int num, i, rev;
    printf("Enter any number: ");
    scanf("%d", &num);

    rev = num;
    i=0;
    while(num>0)
    {
        i =  i*10 + (num%10);
        num=num/10;
    }

    if(rev == i)
        printf("%d is Palindrome Number.", rev);
    else
        printf("%d is not a Palindrome Number.", rev);
    return 0;
}
