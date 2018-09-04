#include<stdio.h>
void *arai(char * , char * );
int main()
{
    //char array1[10];
    //char array2[10];
    char * fname="bilal";
    char * lname="akbar";

   // printf("Enter first strng :");
   // gets(fname);
    //printf("Enter second strng :");
    //gets(lname);
    //char *array3[40];
    //char *a;
    //char *b;
    //char *c;
    //a=array1;
    //b=array2;
    arai(fname,lname);
}
void *arai(char *a , char *b)
{
    int i;
    //while(*c!='\0')
    for(i=0;i<5;i++)
    {
        printf("%c%c\n",*a,*b);
        a++;
        b++;
    }

}
