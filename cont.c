#include<stdio.h>
#include<stdlib.h>
void main()
{
    float*p=(float*)calloc(4,sizeof(float));
    p[0]=12;
    p[1]=23;
    p[2]=34;
    p[3]=45;
    printf("%f %f %f", p[0],p[1],p[2],p[3]);
}