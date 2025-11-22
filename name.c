#include<stdio.h>
int main()
{
    int a[3]={6,7,8};
    int n=3;
    printf("array after reversed:\n");
    for(int i=n-1;i>0;i--)
    {
        printf("%d",a[i]);
    }
    return 0;
}