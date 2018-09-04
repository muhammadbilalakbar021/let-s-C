#include<stdio.h>
int main()
{
    int array1[2][2];

    size_t i;
    size_t j;
    int n;

    printf("Enter values for array 1 : \n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            scanf("%d",&array1[i][j]);
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
    printf("Enter the value you want to multiply = ");
    scanf("%d",&n);
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            array1[i][j]=n*array1[i][j];
            printf("%d ",array1[i][j]);
        }
        printf("\n");
    }
}

