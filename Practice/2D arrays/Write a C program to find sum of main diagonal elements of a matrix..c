#include<stdio.h>
int main()
{
    int matrix[3][3];
    size_t i;
    size_t j;
    int sum;
    printf("Enter 9 values");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&matrix[i][j]);
        }
    }

    sum=0;
    for(i=0;i<3;i++)
    {
       sum +=matrix[i][i];
    }

        printf("%d",sum);

}
