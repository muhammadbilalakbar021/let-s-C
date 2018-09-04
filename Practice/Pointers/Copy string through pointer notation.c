#include<stdio.h>
void copy1(char * const a1 , char * const a2);
void copy2(char * const b1 , char * const b2);
int main(void)
{
    char *string1[10];
    char string2[10];
    char *string3[10];
    char string4[10];
    printf("Enter 10 words in string 1 :\n");
    //gets(*string1);
    scanf("%s",string1);
    printf("Enter 10 words in string 3 :\n");
    //gets(string3);
    scanf("%s",string3);

    copy1(string1,string2);
    printf("The values in string 2 are :\n");
    printf("%s",string2);

    copy2(string3,string4);
    printf("The values in string 4 are :\n");
    printf("%s",string4);
}
void copy1(char * const a1 , char * const a2)
{
    int i;
    for(i=0;i<10;i++)
    {
        a2[i]=a1[i];
    }
}
void copy2(char * const b1 , char * const b2)
{
     int i;
    for(i=0;i<10;i++)
    {
        b2[i]=b1[i];
    }
}
