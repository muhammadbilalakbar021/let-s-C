#include<stdio.h>
int main()
{
    int array[5];
    int *pointer[5];
    int i;

    printf("Enter 5 values : \n");
    for(i=0;i<5;i++)
    {
        printf("Enter %d value : ",i+1);
        scanf("%d",&array[i]);
    }
    for(i=0;i<5;i++)
    {
        printf("the %d values you entered was : %d\n",i+1,array[i]);
        printf("The address of %d array is %p  : \n",i+1,&array[i]);

    }
    for(i=0;i<5;i++)
    {
        pointer[i]=&array[i];
        *pointer[i]=*pointer[i] + array[i];

    }
    for(i=0;i<5;i++)
    {
        printf("the %d values of pointer is  : %d \n",i+1,*pointer[i]);
        printf("The address of %d pointer  is %p  : \n",i+1,&pointer[i]);

    }
    for(i=0;i<5;i++)
    {
        printf("The address of %d pointer is %p",(i+1),&pointer[i]);


    }
}
