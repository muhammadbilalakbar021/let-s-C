#include<stdio.h>
#include<conio.h>

int main()
{
  FILE *fp;
  char ch;
  fp = fopen("array.c","r");

  if(fp == NULL)
  {
    printf("Unable to open file!!!\n");
  }
  else
  {

       while(!feof(fp))
       {
          ch=fgetc(fp);
          printf("%c",ch);
       }

   fclose(fp);
  }
}
