#include<stdio.h>
#include<stdlib.h>

int main()
{
  int i=0;
  do {
  int x;
  x = rand();
  printf("%d\t",x);
  i++;
  }
  while (i<=10);
  return 0;
}

