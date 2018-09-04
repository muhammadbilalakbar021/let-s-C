#include<stdio.h>
int main()
{
   int a,b,s=0,c;
   printf("Enter the number of rows :");
   scanf("%d",&a);
   printf("Enter the number of columns :");
   scanf("%d",&b);
   int array[a][b];
   size_t i;
   size_t j;
   c=(a*b)/2;

   printf("Enter values : ");
   for(i=0;i<a;i++)
   {
       for(j=0;j<b;j++)
       {
           scanf("%d",&array[i][j]);
       }
   }
   for(i=0;i<a;i++)
   {
       for(j=0;j<b;j++)
       {
           if(array[i][j]==0)
            s++;
       }
   }
   if(s>c)
        printf("this is sparse\n");
   else
    printf("This is not sparse ");
}
