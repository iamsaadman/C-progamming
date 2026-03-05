#include<stdio.h>
#include<string.h>

struct student{
    char name[100];
    int id;
    float cgpa;
};

int main(){
    struct student s1;
    strcpy(s1.name,"Rakib");
    s1.id= 1;
    s1.cgpa=3.99;

    printf("1st student name = %s\n",s1.name);
    printf("1st student id = %d\n",s1.id);
    printf("1st student cgpa = %.2f\n",s1.cgpa);

    printf("-------------------------------------\n");

    struct student s2;
    strcpy(s2.name,"Sakib");
    s2.id= 2;
    s2.cgpa=3.92;

    printf("1st student name = %s\n",s2.name);
    printf("1st student id = %d\n",s2.id);
    printf("1st student cgpa = %.2f\n",s2.cgpa);

    printf("-------------------------------------\n");


    struct student s3;
    strcpy(s3.name,"Nazifa");
    s3.id= 3;
    s3.cgpa=3.80;

    printf("1st student name = %s\n",s3.name);
    printf("1st student id = %d\n",s3.id);
    printf("1st student cgpa = %.2f\n",s3.cgpa);
return 0;
}