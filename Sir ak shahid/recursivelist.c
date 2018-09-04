#include<stdio.h>

int fun(int no)
{  //printf("%d\n",no);
  if(no>1)
     return no+fun(no-1);
}

int main()
{
printf("%d",fun(10));
return 0;
}
