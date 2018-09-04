#include<stdio.h>
int main()
{
    int array[10];
    size_t i;
    printf("Enter values in array\n");
    for(i=0;i<10;i++)
    {
        scanf("%d",&array[i]);
    }
    printf("The negative values are: \n");
    for(i=0;i<10;i++)
    {
        if(array[i]<0)
        {
            printf("This number is negative  %d\n",array[i]);
        }
    }
}
