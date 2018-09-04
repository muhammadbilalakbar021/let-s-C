#include<stdio.h>
int main()
{
    int array[5];
    size_t i;
    int a,b;
    printf("Enter 5 values: \n");
    for(i=0;i<5;i++)
    {
        scanf("%d",&array[i]);
    }
    printf("your values are: \n");
    for(i=0;i<5;i++)
    {
        printf("array[%d]=%d\n",i,array[i]);
    }
    printf("Enter the value yoy want to delete :");
    scanf("%d",&a);
    printf("On which point");
    scanf("%d",&b);

    for(i=b-1;i<4;i++)
    {
        array[i]=array[i+1];
    }
    for(i=0;i<4;i++)
    {
        printf("array[%d]=%d\n",i,array[i]);
    }
}
