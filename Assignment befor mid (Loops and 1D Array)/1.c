#include<stdio.h>

int main()
{

    int num,i,sum=0;
    printf("Enter the number:");
    scanf("%d",&num);
    for(i=1; i<num; i++)
    {
        if(num%i==0)
        {
            sum=sum+i;
        }
    }
    if(num==sum)
    {
        printf("It is a perfect number",num);
    }

    else
    {
        printf("It is not perfect number",num);
    }
    return 0;
}
