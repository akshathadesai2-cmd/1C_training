//write a c program which will accept three parameters l,b,h and returns volume of the cube 
#include<stdio.h>
int volume(int l, int b, int h)
{
    int volume=l*b*h;
    return volume;
}
void main()
{
    int l=3;
    int b=5;
    int h=7;
    printf("%d",volume(l,b,h));
}