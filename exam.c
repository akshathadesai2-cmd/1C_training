#include<stdio.h>
void exam(int m1, int m2, int m3)
{
    if(m1>=40&&m2>=40&&m3>=40)
    {
    printf("congrats you have passed\n");
    }

else
{
    printf("you have failed");
}
    float avg= (float) (m1+m2+m3)/3;
    printf("average is=%f",avg);
}
void main()
{
    int m1=42;
    int m2=40;
    int m3=45;
    exam(m1, m2, m3);
}