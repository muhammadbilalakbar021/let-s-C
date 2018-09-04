#include<stdio.h>
int main()
{
    int a=0;
    int average;
    int sum=0,i=0;

    while(a != -1)
    {
        printf("Enter a number :\n");
        scanf("%d",&a);
        sum=sum+a;
        i=i+1;
    }
    average=sum/i;
    printf("Your average is %d",average);
}
