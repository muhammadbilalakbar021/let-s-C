#include<stdio.h>
int main()
{
    int a,b,temp;
    printf("Enter the number of columns :");
    scanf("%d",&a);
    printf("Enter the number of columns :");
    scanf("%d",&b);
    int array[a][b];
    size_t i;
    size_t j;

    printf("kindly enter values :\n");
    for(i=0;i<a;i++)
    {
        for(j=0;j<b;j++)
        {
            printf("Enter the value for matrix[%d][%d]=",i,j);
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
    for(i=0;i<a;i=i+(a-1))
    {
        for(j=0;j<b;j=j+(b-1))
        {
        temp=array[i][j];
        array[i][j]=array[i][b-1];
        array[i][b-1]=temp;
        }
    }
    printf("\n");
    for(i=0;i<a;i++)
    {
        for(j=0;j<b;j++)
        {
            printf("%d ",array[i][j]);

        }
        printf("\n");
    }
}
