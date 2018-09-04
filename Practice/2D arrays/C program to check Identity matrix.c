#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter a number for square matrix : ");
    scanf("%d",&a);
    int array[a][a];
    size_t i;
    size_t j;
    printf("Enter values : ");
    for(i=0;i<a;i++)
    {
        for(j=0;j<a;j++)
        {
            printf("Enter values for array[%d][%d]=",i,j);
            scanf("%d",&array[i][j]);
        }
    }
    for(i=0;i<a;i++)
    {
        for(j=0;j<a;j++)
        {
            printf("%d ",array[i][j]);

        }
    }
    for(i=0;i<a;i++)
    {
        for(j=0;j<a;j++)
        {
            if(i==j && array[i][j] != 1)
            {
                b=0;
            }
            if(i!=j && array[i][j]==0)
            {
                b=1;
            }
            else
                b=2;
        }
    }

    if(b==1)
    {
        printf("Your metrix is identity\n");
        for(i=0;i<a;i++)
    {
        for(j=0;j<a;j++)
        {
            printf("%d ",array[i][j]);

        }
    }

    }
    if(b==0 || b==2)
    {
        printf("Your matrix is not identity\n");
        for(i=0;i<a;i++)
    {
        for(j=0;j<a;j++)
        {
            printf("%d ",array[i][j]);

        }
        printf("\n")
    }
    }
}
