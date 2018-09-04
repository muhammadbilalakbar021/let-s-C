#include<stdio.h>
int velocity(int a , int b);
int  main(void)
{
    int time,distance;
    printf("Enter time in integers \n");
    scanf("%d",&time);
    printf("Enter distance in integers \n");
    scanf("%d",&distance);
    printf("your velocity = %d",velocity(time,distance));
}
    int velocity (int a , int b)
{
    return a*b;
}
