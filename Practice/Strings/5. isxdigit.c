#include<stdio.h>
#include<conio.h>
int main()
{
    char a;
    printf("Enter a character :");
    scanf("%c",&a);
    if(isxdigit(a)==0)
    {
        printf("The character you entered is %c\n",a);
        printf("And it is not a hexadecimal");
    }
    else
    {
        printf("The character you entered is %c\n",a);
        printf("And it is a hexadecimal");
    }
}


