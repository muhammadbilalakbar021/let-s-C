#include<stdio.h>
int main()
{
    char string[100];
    char *ptr;
    int v=0,c=0;
    printf("Enter a string :");
    gets(string);
    ptr=string;
    while(*ptr!='\0')
    {
        if(*ptr=='A' ||*ptr=='E' ||*ptr=='I' ||*ptr=='O' ||*ptr=='U' ||*ptr=='a' ||*ptr=='e' ||*ptr=='i' ||*ptr=='o' ||*ptr=='u')
    {
        printf("%c is a vowel\n",*ptr);
        v++;

    }
    else
    {
        c++;
    }
    *ptr++;
    }
    puts("======");
    printf("The vowels are %d\n",v);
    printf("The remaining are %d",c);
}
