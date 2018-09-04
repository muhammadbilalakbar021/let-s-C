#include<stdio.h>
int main()
{
    int array[5];
    size_t i;
    int *b;

    printf("Enter 5 integers :");
    for(i=0;i<5;i++)
    {
        scanf("%d",&array[i]);
    }
    b=array;
    puts("-------------");
    printf("The numbers you entered are :");
    for(i=0;i<5;i++)
    {
        printf("The array[%d] element of array is %d\n",i,array[i]);
    }
    puts("-------------");
    printf("The numbers you entered are :");
    for(i=0;i<5;i++)
    {
        printf("The array[%d] element of array is %d\n",i,b[i]);

    }
     puts("-------------");
    printf("The numbers you entered are :");
    for(i=0;i<5;i++)
    {
        printf("The array[%d] element of array is %d\n",i,*b);
        b++;

    }
     puts("-------------");
    printf("The numbers you entered are :");
    for(i=0;i<5;i++)
    {
        printf("The array[%d] element of array is %d\n",i,*(b+i));
        b++;
    }


}
