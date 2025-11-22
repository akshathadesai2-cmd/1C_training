//create a structure with three variables name of the car, maximum speed, price store these in a array of structures and display them
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct car
{
    char name[100];
    float max_speed[100];
    int price;

};
void main()
{
    int n;
    printf("enter the number of cars:");
    scanf("%d",&n);
    struct car c[n];
    for(int i=0; i<n; i++)
  {  
    printf("name of the car:");
    scanf("%s",c[i].name);

    printf("enter the max_speed of car:");
    scanf("%f",&c[i].max_speed);

    printf("enter the price of car:");
    scanf("%d",&c[i].price);
  }   
}