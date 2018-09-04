#include<stdio.h>
void pass(int *b);
int main()
{
    int array[10];
    size_t i;
    int *b,result;
    //b=array;
    printf("Enter 10 numbers:");
    for(i=0;i<10;i++)
    {
        scanf("%d",&array[i]);
    }
    pass(array);
    printf(" 10 numbers:\n");
    for(i=0;i<10;i++)
    {
        printf("%d\n",array[i]);
    }
}
void pass(int *b)
{
    int i;
    for(i=0;i<10;i++)
    {
        *b=*b +2;
        b++;
    }

}
