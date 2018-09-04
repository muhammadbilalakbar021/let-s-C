#include<stdio.h>
#define SIZE 10

int main()
{
    int aray[SIZE]={19,3,15,7,11,9,13,5,17,10};
    size_t i;
    int j;
    printf("%s%17s%13s\n","No","Element","Histogram" );
    for(i=0;i<SIZE;i++)
    {
        printf("%u%13d         ",i,aray[i]);

        for(j=1;j<aray[i];++j)
        {printf("%c",'*');}
        puts("");
    }
 return 0;
}
