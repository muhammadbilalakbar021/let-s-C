#include<stdio.h>
#define size 10
int main()
{
    char ar[size];

    printf("array=%p\n&array[0]=%p\n&ar=%p",ar,&ar[0],&ar);
}
