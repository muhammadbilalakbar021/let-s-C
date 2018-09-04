#include<stdio.h>
#define SIZE 10
int main()
{
    int array[SIZE]={0};
    size_t i;
    printf("This array is for Tabular method\nEnter 10 values: ");
    for(i=0;i<10;i++)
    {
        scanf("%d",&array[i]);
    }
    printf("%s%13s\n","Elements","Values");
    for(i=0;i<10;i++)
    {
        printf("array[%d]%13d\n",i,array[i]);
    }
}
