#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct student
{
    char name[100];
    int age;
    float marks;
};
void main()
{
    struct student s1;
    s1.age=19;
    s1.marks=89.6;
    strcpy(s1.name, "joey");

    struct student s2;
    s2.age=23;
    s2.marks=90.9;
    strcpy(s2.name, "boby");

    struct student s3;
    s3.age=28;
    s3.marks=87.5;
    strcpy(s3.name, "popy");

printf("%s ", s1.name);
printf("%d ", s1.age);
printf("%f ",s1.marks);

printf("%s ", s2.name);
printf("%d ", s2.age);
printf("%f ",s2.marks); 

printf("%s ", s3.name);
printf("%d ", s3.age);
printf("%f ",s3.marks); 

}