
#include<stdio.h>
int main()
{
    int array[10];
    size_t i;
    int a=0;
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
            a=a+1;
        }
    }
    printf("Total is %d",a);
}
