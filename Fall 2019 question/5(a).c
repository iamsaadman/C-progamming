#include<stdio.h>

void change(int *x,int *y)
{
    *x=*x+10;
    *y=*y-3;
    return;
}
int main()
{
    int a=5;
    int b=9;
    change(&a,&b);
    printf("%d %d\n",a,b);
    return 0;
}
