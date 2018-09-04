#include<stdio.h>

int string(char *s , int );
int string1(char *s , int );
int main()
{
    char  array[30];
    int i;
    printf("Enter 30 words :  ");
    gets(array);
    string(array,i);
    printf("%s",array);
    string1(array,i);
    //printf("%s",array);


}
int string(char *s , int i)
{
 while(*s != '\0')
 {

    *s++;
 }
}
int string1(char *s , int i)
{
 for(;*s != '\0' ; *s++)
 {
     printf("%s ",*s);

 }
}

