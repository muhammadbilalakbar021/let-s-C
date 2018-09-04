#include<stdio.h>

int main()
{
  int no,rev;

  no = 1234;
  rev=0;

  while(no!=0)
  {
     rev = rev*10+no%10;
     no/=10;

  }
  printf("%d",rev);

}
