#include<stdio.h>
int main()
{
    char array[10];
    int sum=0;
    int i;

    printf("Enter String\n");
    gets(array);

    printf("Outer for");
    for(i=0;array[i]!='\0';++i)
    {
        if(array[i]=='b')
        sum=sum+1;
    }
    printf("b = %d",sum);
}
