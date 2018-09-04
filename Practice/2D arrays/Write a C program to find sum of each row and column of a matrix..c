#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter the number of rows :");
    scanf("%d",&a);
    printf("Enter the number of columns :");
    scanf("%d",&b);
    int array[a][b];
    size_t i;
    size_t j;
    int sum,k;

     printf("Enter values in matrix\n");
     for(i=0;i<a;i++)
     {
         for(j=0;j<b;j++)
         {
             printf("Enter value for array[%d][%d]=",i,j);
             scanf("%d",&array[i][j]);
         }
     }
    for(i=0;i<a;i++)
     {
         for(j=0;j<b;j++)
         {
             printf("%d ",array[i][j]);
        }
        printf("\n");
     }
     for(i=0;i<a;i++)
     {
         sum=0;
         for(j=0;j<b;j++)
         {
             sum +=array[i][j];
         }
         printf("your sum of %d row is =%d\n",i+1,sum);
     }
     sum=0;
     j=0;
     for(k=0;k<b;k++)
     {
         sum=0;

        for(i=0;i<a;i++)
        {
          sum+=array[i][j];
        }
        j++;
        printf("Your sum of  %d column is %d\n",k+1,sum);

     }
}
