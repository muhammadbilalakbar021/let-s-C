#include<stdio.h>
#include<conio.h>
int main()
{
    char a;
    printf("Enter a character :");
    scanf("%c",&a);
    if(isalnum(a)==0)
    {
        printf("The character you entered is %c\n",a);
        printf("And it is not an alphanumeric");
    }
    else
    {
        printf("The character you entered is %c\n",a);
        printf("And it is an alphanumeric");
    }
}


