//write c program of adding three numbers by reference
#include<stdio.h>
void sum_ref(int *a, int *b, int *c)
{
    int sum = *a + *b + *c;
    printf("%d ", sum);

} 
void main()
{
    int a=2;
    int b=3;
    int c=4;
    sum_ref(&a, &b, &c);
}