#include<stdio.h>
int main()
{
    char str[]="My name is bilal";
    size_t i;
    char *b;
    b=str;
    for(;*b!='\0';b++)
    {
        printf("%c ",*b);
        //b++;
    }
}
