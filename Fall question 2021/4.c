#include<stdio.h>
#include<string.h>
int main()
{
    char a[]="PUT YOUR FULL NAME HERE";
    char*b=a;
    int n = strlen(a);
    for(int i=0; i<n; i++)
    {
        if(a[i]==' ')printf("%c",tolower(a[i+1]));
    }
    printf("\n");
           for(int i=1; i<n; i++, b++);
           for(int i=0; i<n; i+=2,b-=2)
    {
        puts(b);
        }
}
