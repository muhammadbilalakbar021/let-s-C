#include<stdio.h>
int main()
{
    int bilal[5]={12,34,52,90,76};
    size_t i;
    for(i=0;i<5;++i)
    {
        printf("%7u%13d\n",i,bilal[i]);
    }
    return 0;
}
