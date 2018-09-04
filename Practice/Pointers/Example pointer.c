#include<stdio.h>
pass(int array[] , int *);
int main()
{
    int array[5];
    size_t i;
    int *pointer;

    pointer=array;
    for(i=0;i<5;i++)
    {
        printf("%d Element of array ",i+1);
        scanf("%d",&array[i]);
    }
    pass(array,pointer);
}
pass(int array[], int *pointer)
{
    int i;
    for(i=0;i<5;i++)
    {
        array[i]=array[i]*array[i];

    }
    for(i=0;i<5;i++)
    {
        printf("%d\n",*pointer);
        pointer++;
    }
}
