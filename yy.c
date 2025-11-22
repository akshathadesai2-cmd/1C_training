#include<stdio.h>
void fibo(int n)
{
    int a=0;
    int b=1;
    for(int i=0; i<n; i++)
    {
    printf("%d",a);
    a=b;
    b=sum;
    }
}
void main()
{
    int n;
printf("enter n:");
scan("%d ", &n);
fibo (n); 
}