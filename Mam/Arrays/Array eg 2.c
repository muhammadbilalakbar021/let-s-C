#include<stdio.h>
int main()
{
    int bilal[10];
    size_t a;

    for(a=0;a<10;a++)
    {
        bilal[a]=0;
    }
    printf("%s%13s\n","element","array");
    for(a=0;a<10;a++)
    printf("%7u%13d\n",a,bilal[a]);
    return 0;

}
