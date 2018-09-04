#include<stdio.h>
int main()
{
    int b=1;


    while(b<=100)
    {
        if(b%2!=0)
            printf("%d\t",b);
        b++;
    }
    return 0;
}
