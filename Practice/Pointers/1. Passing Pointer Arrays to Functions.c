#include<stdio.h>
int pass(int *);
int main()
{
    int array[5];
    int *b;
    int i;
    b=array;
    printf("Enter five integers : ");
     for(i=0;i<5;i++)
    {
        scanf("%d",&array[i]);
    }
    pass(b);
}
int pass(int *b)
{
    int i;
    for(i=0;i<5;i++)
    {
        printf("%d\n",*b);
        (b)++;
    }

}
