#include<stdio.h>
int main()
{
    int array[5];
    size_t i;
    int a,b;
    printf("Enter 5 values :\n");
    for(i=0;i<5;i++)
    {
        scanf("%d",&array[i]);
    }
    printf("The values are :-\n");
    for(i=0;i<5;i++)
    {
        printf("array[%d]=%d\n",i,array[i]);
    }
    printf("Which value do you want to enter ");
    scanf("%d",&a);
    printf("And on whic position ?");
    scanf("%d",&b);
    i=b;
    array[i]=a;
    for(i=1;i<=5;i++)
    {
        printf("%d\n",array[i]);
    }
}
