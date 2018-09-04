#include<stdio.h>
int main()
{
    int array1[2][2];
    int array2[2][2];
    int array3[2][2];
    size_t i;
    size_t j;
    int sum,k;

    printf("Enter values for array 1 : \n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            scanf("%d",&array1[i][j]);
        }
    }
    printf("Enter values for array 2 : \n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            scanf("%d",&array2[i][j]);
        }
    }
    printf("The values for array 1 are : \n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("%d ",array1[i][j]);
        }
        printf("\n");
    }
     printf("The values for array 2 are : \n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("%d ",array2[i][j]);
        }
        printf("\n");
    }
    printf("The multiplication matrix is\n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            sum=0;
            for(k=0;k<2;k++)
            {
                sum +=array1[i][k]*array2[k][j];
            }
            array3[i][j]=sum;
        }

    }
     for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("%d ",array3[i][j]);
        }
        printf("\n");
    }
}

