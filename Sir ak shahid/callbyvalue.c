#include <stdio.h>
void swap(int *a,int *b)
{
  int hold;
  hold = *a;
  *a = *b;
  *b = hold;
printf("a = %d, b = %d\n",*a,*b);
}

int main()
{
 int x=2,y=6;
printf("Before function call \nx = %d, y = %d\n",x,y);

swap(&x,&y);

printf("After function call \nx = %d, y = %d\n",x,y);

return 0;
}
