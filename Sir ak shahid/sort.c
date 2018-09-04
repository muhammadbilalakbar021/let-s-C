#include<stdio.h>
#define SIZE 5
int main()
{
  int a[SIZE] = {5,4,3,2,1};
  int pass,i,hold;

  for(i=0;i<SIZE;i++)
    printf("[%d] = %d\n",i,a[i]);

 for(pass=1;pass<=SIZE-1;pass++)
 {

  printf("\n\n");

    for(i=0;i<=SIZE-2;i++)
    {
      if(a[i]>a[i+1])
      {

        hold  = a[i];
        a[i]  = a[i+1];
        a[i+1]= hold;
      }

    }
    for(i=0;i<SIZE;i++)
    printf("[%d] = %d\n",i,a[i]);
 }

}
