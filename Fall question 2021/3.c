#include<stdio.h>
void main(){
FILE*file;
int i, j, sum, a=100;
int num[] = {a,a+1,a+2,a+3, a+4, a+5,a+6, a+7,a+8,a+9};
file= fopen("test.txt", "w");
fprintf(file, "%s\n", "Hello 3 dosers!!!");
        for(i=4; i<=7; i++)
{
       fprintf(file, "Line %d: ", i);
       for(j=9;j>=0;j--){
        if((i+j)%4==0)
              fprintf(file, "%d, ", num[i]);
       }

    fprintf(file, "\n", num[i]);
}




fclose(file);
}
