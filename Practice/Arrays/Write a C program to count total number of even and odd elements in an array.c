#include<stdio.h>
int main()
{
    int array[5];
    size_t i;
    int a=0,b=0;
    printf("Enter 5 values \n");
    for(i=0;i<5;i++)
    {
        scanf("%d",&array[i]);
    }
    for(i=0;i<5;i++)
    {
        if(array[i]%2==0)
        {
            printf("array[%d] is even\n",array[i]);
            a=a+1;
        }
        else
            printf("array[%d] is odd\n",array[i]);
            b=b+1;
    }
    printf("Total even are %d and odd are %d",a,b);
}
