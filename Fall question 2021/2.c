#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
    char arr[5][30] = {"Hello World!",
                      "Good morning.",
                      "UIU is the Best!",
                      "Are you a programmer?",
                      "Be a problem solver."};
char str1[50],str2[50];

int a=100 % 5;
int b=100 % 4;
int c=100 % 3;
strcpy(str1,arr[a]);
strcpy(str2,arr[(a+2)%5]);
if(strcmp(str1,str2)>0)
{
    str1[b] =toupper(str1[c]);
}
else
{
    str2[b] =toupper(str2[c]);
}
strncpy(str2, arr[c], a);
strcat(str1,str2);
}
