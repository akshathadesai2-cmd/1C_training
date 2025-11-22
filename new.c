//write a c program with a function with variadic arguments
#include<stdio.h>
#include<stdarg.h>
void display(int found,...)
{
    int result=0;
    va_list list;
    va_start (list, found);
    for(int i=0; i<=found; i++)
    {
       int n =va_arg(list, int); 
        result=result+n;
    }
va_end(list);
printf("%d ", result);
}
void main()
{
display(3, 43, 54, 65);
}