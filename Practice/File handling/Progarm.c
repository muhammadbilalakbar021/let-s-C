#include<stdio.h>
int main()
{
    char ch;
    FILE *ptr;
    ptr=fopen("dat.txt","w");
    while(ch=getchar()!=EOF)
    {
        putc(ch,ptr);
    }
    fclose(ptr);


    fopen("data.txt","r");
    while(ch=getchar()!=EOF)
    {
        printf("%c",ch);
    }
    fclose(ptr);
}
