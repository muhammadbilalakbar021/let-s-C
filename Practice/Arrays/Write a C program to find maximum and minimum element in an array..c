#include<stdio.h>
int main()
{
    int array[10];
    size_t i;
    int min,max;
    printf("Enter 10 values:\n");

    for(i=0;i<10;i++)
    {
        printf("Enter value for array[%d]:-",i);
        scanf("%d",&array[i]);
    }
    min=array[0];
    max=array[0];
    for(i=1;i<10;i++)
    {
        if(array[i]>max)
        {
            max=array[i];
        }

        if(array[i]<min)
        {
            min=array[i];
        }
    }
    printf("The maximum is %d\n",max);
    printf("The minimum is %d",min);
}
