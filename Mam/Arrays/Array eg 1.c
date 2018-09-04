#include<stdio.h>
int main()
{
    int aray[21];
    size_t a;

    for(a=0;a<=20;a++)
    {
        aray[a]=1;
        aray[a]=aray[a]*2+2;
    }
     printf( "%s%13s\n", "Element", "Value" );
    for(a=0;a<=20;a++)
    {
        printf("%7u%13d\n",a,aray[a]);
    }
    return 0;
}
