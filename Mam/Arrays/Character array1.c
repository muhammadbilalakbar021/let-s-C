#include<stdio.h>

char strin1[256];

int main()
{
    printf("Enter any thing you want\n");
    fgets(strin1, 256, stdin);
    printf("\n\n\nsYou entered %s",strin1);

}
