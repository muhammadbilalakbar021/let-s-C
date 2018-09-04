#include<stdio.h>
union tag
{
 char c;
 int i;
};
int main()
{
union tag t;
t.c = 65;
printf("%c  = %d\n",t.c,t.i);
t.i = 97;
printf("%c  = %d\n",t.c,t.i);

return 0;
}
