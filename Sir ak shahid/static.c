#include<stdio.h>
int g=10;
void fun()
{
  int count=0 ;
  count++;
  printf("%d\n",count);

}
int main()
{
    int g=30;
    printf("g = %d\n",g);
 fun();
 fun();
 fun();
return 0;
}
