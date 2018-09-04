#include<stdio.h>

int main()
{
    char string[250];

    printf("Enter your full name : ");

    gets(string);
    printf("The string you entered is : %s",string);

    return 0;
}
