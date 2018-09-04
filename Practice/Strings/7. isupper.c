#include<stdio.h>
#include<conio.h>
int main()
{
    char a;
    printf("Enter a character :");
    scanf("%c",&a);
    if(isupper(a)==0)
    {
        printf("The character you entered is %c\n",a);
        printf("And it is not a upper");
    }
    else
    {
        printf("The character you entered is %c\n",a);
        printf("And it is a upper");
    }
}


