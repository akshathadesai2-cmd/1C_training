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
    struct student *p=&s1;
    strcpy(p->name, "somu");
    p -> age = 24;
    p -> marks = 87.5;
    printf("%d ", p -> age);
    printf("%s ", p -> name);
    printf("%f ", p -> marks);
}