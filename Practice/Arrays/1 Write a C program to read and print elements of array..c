#include<stdio.h>
int main()
{
    int a,b;
    printf("how many rows and columns you want in matrix \n");
    printf("Enter number of rows : ");
    scanf("%d",&a);
    printf("Enter number of columns : ");
    scanf("%d",&b);
    printf("\n");
    int array[a][b];
    int i,j;

    for(i=0;i<a;i++)
    {
        for(j=0;j<b;j++)
        {
            printf("Enter the value for array[%d][%d]",i,j);
            scanf("%d",&array[i][j]);
        }
    }
    printf("The 2D array you entered is :\n");
    for(i=0;i<a;i++)
    {
        for(j=0;j<b;j++)
        {
            printf("%d  ",array[i][j]);
        }
        printf("\n");
    }
}
