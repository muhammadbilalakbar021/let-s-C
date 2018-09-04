#include<stdio.h>
#include<stdlib.h>
#define SIZE 10

int main()
{
    int aray[SIZE];
    size_t i;
    int mult=0;

        for(i=1;i<=SIZE;++i)
    {
        printf("Enter numbers :\n");
        scanf("%d",&aray[i]);
    }
    printf("%s%10s\n","Number","Input");
    for(i=1;i<=SIZE;i++)
    {
        printf("%u%13d\n",i,aray[i]);
    }

}
