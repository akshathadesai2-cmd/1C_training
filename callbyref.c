//write a function which will multiply 3 numbers and call it by reference
#include<stdio.h>



void prod_ref(int *a, int *b, int *c)
{
    int prod=*a * *b * *c;
    printf("%d", prod);

}
void main()
{
    int a=2;
    int b=3;
    int c=4;
    prod_ref(&a, &b, &c);
}