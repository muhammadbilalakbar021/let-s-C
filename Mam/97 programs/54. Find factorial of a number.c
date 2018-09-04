#include<stdio.h>

int main()
{
    int array[7];
    int i;
    for(i=0;i<7;i++)
    {

        scanf("%d",&array[i]);
    }
     for(i=0;i<7;i++)
    {

       while(array[i]!=1)
       {

           array[i] *=array[i-1];
       }
    }
    for(i=0;i<7;i++)
    {

        printf("%d",array[i]);
    }


}

