#include<stdio.h>
struct score
{
    float marks;
    int rank;
};
void edit(struct score s1)
{
    printf("before chane in function: %f\n",s1.marks );
    s1.marks=45.6;
    printf("after change in fn: %f\n",s1.marks);
}
void main()
{
    struct score s1={45.6, 5};
    edit(s1);
    printf("after change in main %f\n", s1.marks);
}