#include<stdio.h>
int main()
{
    int a,b,k=0;
    printf("Enter the a number for square matrix :");
    scanf("%d",&a);
    int array[a][a];
    int array1[a][a];
    size_t i;
    size_t j;
    int sum=0;

    for(i=0;i<a;i++)
    {
        for(j=0;j<a;j++)
        {
            printf("Enter value for array[%d][%d]=",i,j);
            scanf("%d",&array[i][j]);
        }
    }
    printf("The array you entered was :\n");
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
        sum=0;
        for(j=0;j<a;j++)
        {
            array1[j][i]=array[i][j];

        }
        printf("\n");
        //i++;
        }
        printf("The new array is   :\n");
    for(i=0;i<a;i++)
    {
        for(j=0;j<a;j++)
        {
            printf("%d  ",array1[i][j]);
        }
        printf("\n");
    }




}
