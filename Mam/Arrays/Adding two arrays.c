#include<stdio.h>
int main()
{
    int aray1[5];
    int aray[5];
    int sum[30];
    size_t i;

    printf("For array 1 enter 10 integers \n");
    for(i=0;i<5;++i)
    {
        scanf("%d",&aray1[i]);
    }
    printf("For array 2 enter 10 integers \n");
    for(i=0;i<5;++i)
    {
        scanf("%d",&aray[i]);
    }
    sum[i]=aray1[i]+aray[i];
    printf("Answr is %d",sum[i]);

}
