#include<stdio.h>
#define SIZE 10
int main()
{
    int array1[SIZE];
    size_t i;
    for(i=0;i<SIZE;i++)
    {
        array1[i]=2+3*i;
    }
    printf("%s%13s\n","element","array1");
    for(i=0;i<SIZE;i++)
    {
        printf("%u%15d\n",i,array1[i]);
    }
    return 0;
}
