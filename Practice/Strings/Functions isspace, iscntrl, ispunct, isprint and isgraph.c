#include<stdio.h>
#include<ctype.h>
int main()
{
    char c;
    printf("Enter any value : ");
    scanf("%c",&c);
    if(isspace(c))
    {
        printf("%c is a space character \n",c);
    }
    else if(iscntrl(c)==(1))
    {
        printf("%c is control character ",c);
    }
    else if(ispunct(c))
    {
        printf("%c is punct character ",c);
    }
    else if(isprint(c)==(1))
    {
        printf("%c is print character ",c);
    }
    else if(isgraph(c)==(1))
    {
        printf("%c is graph character ",c);
    }
    else
    {
        printf("--------");
    }
}
