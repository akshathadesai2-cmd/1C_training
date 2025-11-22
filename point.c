#include<stdio.h>
void main()
{
    int arr[4]={58, 89, 34, 23};
    int *p=arr;
    printf("%d\n", *p);
    printf("%d\n", *(p+1));
}