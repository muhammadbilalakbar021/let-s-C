#include<stdio.h>
int main()
{
    int a,i=1,sum=0;
    printf("Enter an integer");
    scanf("%d",&a);
    for(i;i<=a;i++)
    {

        sum=sum+i;

    }
    printf("%d\n",sum);
    return 0;
}
