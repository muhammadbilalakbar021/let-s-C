#include<stdio.h>

int main()
{
  FILE *fp;

  fp = fopen("test.txt","w");

  if(fp == NULL)
  {
    printf("Unable to open/create file!!!\n");
  }
  else
  {
    fputc('a',fp);

   fclose(fp);
  }
}
