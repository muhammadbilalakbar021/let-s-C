#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter the a number for square metrix :");
    scanf("%d",&a);
    int array[a][a];
    size_t i;
    size_t j;

    for(i=0;i<a;i++)
    {
        for(j=0;j<a;j++)
        {
            printf("Enter value for array[%d][%d]=",i,j);
            scanf("%d",&array[i][j]);
        }
    }
    printf("The array ypu entered was :\n");
    for(i=0;i<a;i++)
    {
        for(j=0;j<a;j++)
        {
            printf("%d  ",array[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<a;i++)
      {
        j=i;
        for(j;j<a;j++)
        {
            printf("%d  ",array[i][j]);
        }
        printf("\n");
    }


}
