#include<stdio.h>
int main()
{
    int a[10];
    size_t i;
    int *p;
    int b=0;
    printf("Enter 10 values :\n");
    for(i=0;i<10;i++)
    {

        printf("Enter %d value : ",i+1);
        scanf("%d",&a[i]);
        b=b+ a[i];

    }
    p=a;
    for(i=1;i<=10;i++)
    {
        printf("The value in in %d pointer is =%d ",i,*p);
        printf("\n");
        p++;
    }
    printf("The total is %d",b);

}
