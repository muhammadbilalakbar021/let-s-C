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
    int c;
    for(i=0;i<5;i++)
    {
        c=*b + *b;
        printf("%d\n",c);
        (b)++;
    }

}
