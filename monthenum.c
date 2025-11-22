#include<stdio.h>
enum month
{
    january=1,
    feb,mar,apr,may,jun,july,aug,sept,oct,nov,dec
};
void main ()
{
enum month m;
m=feb;
char *season;
switch(m)
{
    case dec: case january: case feb:
    season = "winter";
    break;
    case mar: case apr: case may:
    season = "summer";
    break;
    case jun: case july: case aug:
    season = "rainy";
    break;
    case sept: case oct: case nov: 
    season = "automon";
    break;
}
printf("%d is %s",m,season);
}


