#include<stdio.h>
int main()
{
    char string[50];
    char *b;
    printf("Enter a string you want to enter : \n");
    gets(string);
    b=string;
    printf("The string you entered is :");
    while(*b!='\0')
    {
        printf("%c ",*b++);
    }
    return 0;
}
