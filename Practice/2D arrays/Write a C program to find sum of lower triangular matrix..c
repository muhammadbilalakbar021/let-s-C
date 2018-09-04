#include<stdio.h>
int main()
{
    int a,b,k=0;
    printf("Enter the a number for square metrix :");
    scanf("%d",&a);
    int array[a][a];
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
    printf("The array ypu entered was :\n");
    for(i=0;i<a;i++)
    {
        for(j=0;j<a;j++)
        {
            printf("%d  ",array[i][j]);
        }
        printf("\n");
    }
        for(i=1;i<a;i++)
        {

        for(j=0;j<i;j++)
        {
            sum +=array[i][j];
            printf("%d  ",array[i][j]);
        }
        printf("\n");
        //i++;
        }
        printf("Your sum =%d",sum);



}
