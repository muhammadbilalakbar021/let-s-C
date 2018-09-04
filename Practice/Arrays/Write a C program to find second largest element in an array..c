#include<stdio.h>
int main()
{
    int array[10];
    size_t i;
    int max,scnd;
    printf("Enter 10  values\n");

    for(i=0;i<10;i++)
    {
        scanf("%d",&array[i]);
    }
    max=array[0];

    for(i=0;i<10;i++)
    {
        if(array[i]>max)
        {
            max=array[i];
        }
    }
    printf("The first highest number is %d\n",max);
    scnd=array[0];
    for(i=1;i<10;i++)
    {
        if(array[i] > scnd && array[i] < max);
        {
            scnd=array[i];
        }
    }
    printf("The second largest is %d",scnd);
}
