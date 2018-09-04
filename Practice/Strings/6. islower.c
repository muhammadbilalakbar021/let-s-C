#include<stdio.h>
#include<conio.h>
int main()
{
    char a;
    printf("Enter a character :");
    scanf("%c",&a);
    if(islower(a)==0)
    {
        printf("The character you entered is %c\n",a);
        printf("And it is not a lower");
    }
    else
    {
        printf("The character you entered is %c\n",a);
        printf("And it is a lower");
    }
}


