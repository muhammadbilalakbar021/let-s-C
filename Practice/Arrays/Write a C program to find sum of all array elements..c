#include<stdio.h>
int main()
{
    int array[10];
    int sum=0;
    size_t i;

    printf("Enter 10 values to add\n");
    for(i=0;i<10;i++)
    {
        scanf("%d",&array[i]);
    }
    for(i=0;i<10;i++)
    {
        sum=sum+array[i];
    }
    printf("The sum is %d",sum);
}
