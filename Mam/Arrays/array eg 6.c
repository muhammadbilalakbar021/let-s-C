#include<stdio.h>
#include<stdlib.h>
#define SIZE 10

int main()
{
    int aray[SIZE];
    size_t i;
    int a,sum=0;

        for(i=1;i<=SIZE;++i)
    {
        printf("Enter numbers :\n");
        scanf("%d",&aray[i]);
    }
    for(i=1;i<=SIZE;i++)
    {
        sum =sum+aray[i];

    }
    printf("%d",sum);

}
