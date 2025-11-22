#include<stdio.h>
#include<stdlib.h>
void main()
{
int*p=(int*)malloc(3*sizeof(int));
p[0]=12;
p[1]=43;
p[2]=56;
p[3]=87;
p=(int*) realloc(p, 5*sizeof(int));
p[4]=76;
for(int i=0; i<5; i++)
printf("%d ",p[i]);
}