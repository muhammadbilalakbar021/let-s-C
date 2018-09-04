#include<stdio.h>
#define SIZE 10
int pass(int *z ,size_t size);
int main()
{
    int a[SIZE]={9,8,7,6,5,4,3,2,1};
    size_t i;
    printf("The original values are :\n");
    for(i=0;i<SIZE;i++)
    {
        printf("%d value is :%d\n",i+1,a[i]);
    }
    pass(a,SIZE);
    printf("The values in ascending are :\n");
    for(i=0;i<SIZE;i++)
    {
        printf("%d value is :%d\n",i+1,a[i]);
    }
}
int pass(int *z ,size_t size)
{

    int  swap( int *no1 , int *no2);
    int c,b;
    for(b=0;b<size;b++)
    {
        for(c=0;c<size-1;c++)
        {
            if(z[c]>z[c+1])
            {
                swap(&z[c] ,&z[c+1]);
            }
        }
    }
}
int  swap( int *no1 , int *no2)
{
        int temp;
        temp=*no1;
        *no1=*no2;
        *no2=temp;
}
