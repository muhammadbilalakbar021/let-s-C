#include<stdio.h>
#include<conio.h>
int main()
{
    char a;
    printf("Enter a character :");
    scanf("%c",&a);
    if(isalpha(a)==0)
    {
        printf("The character you entered is %c\n",a);
        printf("And it is not an alphabet");
    }
    else
    {
        printf("The character you entered is %c\n",a);
        printf("And it is an alphabet");
    }
}

