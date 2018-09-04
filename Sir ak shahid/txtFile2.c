#include<stdio.h>
#include<conio.h>

int main()
{
  FILE *fp;
  char ch;
  fp = fopen("test.txt","w");

  if(fp == NULL)
  {
    printf("Unable to open/create file!!!\n");
  }
  else
  {
     while((ch = getche())!=13)
       fputc(ch,fp);

   fclose(fp);
  }
}
