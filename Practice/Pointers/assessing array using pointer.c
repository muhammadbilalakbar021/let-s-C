#include<stdio.h>
int main()
{
    int a[5];
    int *b,i,t=0;
    printf("Enter 5 values :\n");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
        b=a;
    printf("The values you enterd are :\n");
    for(i=0;i<5;i++)
    {
        printf("%d\n",*b);
        t=t+*b;
        b++;
    }

}
