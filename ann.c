#include<stdio.h>
#include<string.h>
void main()
{
    char str1[20], str2[30];
    printf("enter string1 value:\n");
    scanf("%s",&str1);
    printf("enter string2 value:\n");
    scanf("%s",&str2);
    if(strcmp(str1,str2)==0)
    {
        printf("two strings are same");
    }
    else
    {
        printf("two strings are not same");
    }
}