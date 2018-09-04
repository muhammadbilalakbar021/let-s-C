#include<stdio.h>
#include<stdlib.h>
int main()
{
int freq[7]={0};
int face;
int i;

for(i=1;i<=6000;i++)
  {
    face = 1+rand()%6;
    ++freq[face];
  }
printf("%s%13s\n","Face","Freq");
for(i=1;i<=6;i++)
{
 printf("%4d%13d\n",i,freq[i]);

}

return 0;
}
