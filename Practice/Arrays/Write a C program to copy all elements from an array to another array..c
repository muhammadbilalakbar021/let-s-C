#include<stdio.h>
int main()
{
    int array1[5];
    int array2[5];
    size_t i;
    int temp;
    printf("Enter 5 values");
    for(i=0;i<5;i++)
    {
        scanf("%d",&array1[i]);
    }
    for(i=0;i<5;i++)
    {
        array2[i]=array1[i];

    }
    printf("The values in array2 are :\n");
    for(i=0;i<5;i++)
    {
        printf("array[%d]=%d\n",i,array2[i]);
    }
}
