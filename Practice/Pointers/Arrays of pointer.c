#include<stdio.h>
int main()
{
    int array[10];
    int *parray[10],i;
    printf("Enter ten values for array : \n");
    for(i=0;i<10;i++)
    {
        printf("Enter value for %d :",i+1);
        scanf("%d",&array[i]);

    }
    for(i=0;i<10;i++)
    {
        printf("the values you entered are %d\n",array[i]);
        printf("the addresses of  array  are %d",&array[i]);
        parray[i]=&array[i];
        *parray[i]=*parray[i] + array[i];

    }
    for(i=0;i<10;i++)
    {
        printf("the values you pointer array  are %d\n",*parray[i]);
        printf("the addresses of  pointer array  are %d\n",&parray[i]);


    }
}
