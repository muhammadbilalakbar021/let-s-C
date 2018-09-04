#include<stdio.h>
#define SIZE 20
int main()
{
    int array1[SIZE];
    size_t b;
    int total =0;

    for(b=0;b<SIZE;++b)
    {
        array1[b]=2+5*b;
        total = total+array1[b];
    }
    printf("%s%13s\n","element","array1");
    for(b=0;b<SIZE;++b)
    {
        printf("%u%15d\n",b,array1[b]);
        printf("Total is = %d",total);
    }
    return 0;
}
