#include<stdio.h>

void passing(int [] , int);
void elmnt(int b);

int main()
{
    int a[10];
    size_t c;
    printf("Enter 10 values : \n");

    for(c=0;c<10;++c)
    {
        scanf("%d",&a[c]);
    }
    printf("\nYour original  array is \n");
    for(c=0;c<10;++c)
    {
        printf("a[%d]\t%d\n",c,a[c]);
    }
    elmnt(a[7]);
    printf("\nyour modifies  index is %d\n",a[7]);
    passing(a,10);
    printf("Your modified is:: \n");
    for(c=0;c<10;++c)
    {
        printf("%d\t%d\n",c,a[c]);
    }
    elmnt(a[7]);
    printf("\nyour modifies  index is %d\n",a[7]);
}


void passing(int a[] , int i)
{
    int q;
    for(q=0;q<=10;++q)
       {
            a[q]=a[q]*2;
       }

}
void elmnt(int b)
{
    b=b*2;
    printf("\nYour modify element is %d",b);
}
