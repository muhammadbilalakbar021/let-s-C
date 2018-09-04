#include<stdio.h>
#include<conio.h>

void printARRAY(int a[][3] );

int main(void)
{
    int array1[2][3] = {{1,2,3},{6,7,8}};
    int array2[2][3] = {{11,21,31},{61,71,81}};

    printf("The array you entered is :\n");
    printARRAY(array1);

    printf("The array you entered is :\n");
    printARRAY(array2);
}
void printARRAY(int a[][3] )
{
    size_t i;
    size_t j;
    for(i=0;i<=1;++i)
    {
        for(j=0;j<=2;++j)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
}

