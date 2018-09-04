#include<stdio.h>
#include<conio.h>
int main()
{
    char a[100];
    int i;
    printf("Enter a line :");
    gets("a");
    printf("The line you entered is :\n");
    for(i;i!= '\0';i++)
    {
        a[i]=tolower(a);
    }
    printf("The string in lower is :\n");
    printf("%s\n",a);
}


