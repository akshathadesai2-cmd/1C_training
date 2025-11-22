//write a function which will accept the two input parameter x,y and returns x*x+y*y
#include<stdio.h>
int square(int x, int y)
{
    int sqr=x*x+y*y;
    return sqr;
}
void main()
{
    int a=4;
    int b=5;
    printf("%d\n",square(a,b));
}     