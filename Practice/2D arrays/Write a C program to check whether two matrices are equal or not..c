#include<stdio.h>
int main()
{
    int metrix1[2][2];
    int metrix2[2][2];
    size_t i;
    size_t j;
    int a=0;

    printf("Enter the values of matrix 1: \n ");
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
         scanf("%d",&metrix1[i][j]);
        }
    }
    printf("Enter the values of matrix 2: \n ");
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
         scanf("%d",&metrix2[i][j]);
        }
    }

    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
         if(metrix1[i][j]==metrix2[i][j])
        a =a+1;
        }
    }
    if(a==4)
        printf("it is equal");
    else
        printf("not equal");
}
