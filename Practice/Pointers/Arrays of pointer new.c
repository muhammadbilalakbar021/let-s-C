#include<stdio.h>
int pass(int *a[]);
int main()
{
    int *array[5];
    size_t i;
    printf("Enter 5 numbers :");
    for(i=0;i<5;i++)
    {
        scanf("%d",&array[i]);
    }
    pass(array);
}
int pass(int *a[5])
{
    int i;
    for(i=0;i<5;i++)
    {
        printf("%d\n",*a);
        a++;
    }
}
