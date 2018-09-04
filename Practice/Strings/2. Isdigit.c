#include<stdio.h>
#include<conio.h>
int main()
{
    char a;
    printf("Enter a digit :");
    scanf("%c",&a);
    if(isdigit(a)==0)
    {
        printf("The number you entered is %c\n",a);
        printf("And it is not a digit");
    }
    else
    {
        printf("The number you entered is %c\n",a);
        printf("And it is a a digit");
    }
}
