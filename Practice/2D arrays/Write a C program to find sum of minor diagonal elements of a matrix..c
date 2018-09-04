#include<stdio.h>
int main()
{

    int a,b;
    printf("How many rows do you want : ");
    scanf("%d",&a);
    printf("How many columns do you want : ");
    scanf("%d",&b);
    int matrix[a][b];
    size_t i;
    size_t j;
    int sum,k;
    k=b-1;
    printf("Enter values :\n" );
    for(i=0;i<a;i++)
    {
        for(j=0;j<b;j++)
        {
            printf("Array[%d][%d]=",i,j);
            scanf("%d",&matrix[i][j]);
        }
        printf("\n");
    }
    printf("The array you  entered is :\n");
     for(i=0;i<a;i++)
    {
        for(j=0;j<b;j++)
        {
            printf("%d ",matrix[i][j]);

        }
        printf("\n");
    }
    sum=0;
    for(i=0;i<a;i++)
    {
        for(j=0;j<=b;j++)
       {
           if(i+j==k)
           sum +=matrix[i][j];
       }
    }

        printf("%d",sum);

}
