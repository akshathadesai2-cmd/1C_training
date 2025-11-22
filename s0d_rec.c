#include<stdio.h>
int sum_digits_recur(int n)
{
    if (n==0)
    return 0;
    int d=n%10;
    return d+sum_digits_recur(n/10);
}
void main()
{
    int n=63;
    printf("%d", sum_digits_recur(n));
}