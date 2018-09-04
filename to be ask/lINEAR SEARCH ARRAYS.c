#include<stdio.h>

int search(int array[], int key );
int main()
{
    int a[10]={1,2,3,4,5,6,7,8,9,10};
    int key;
    int d;

    printf("Enter a number you want to check \n");
    scanf("%d",&key);

    d=search(a,key);

    if(d!=0)
    {
        printf("Key found at %d",d);
    }
    else
    {
        printf("Found none");
    }
}
int search(int array[], int key )
{
   int n;
   for(n=0;n<10;++n)
   {
       if(array[n]==key)
       {
           return n;
       }
       else
            return 0;
   }
}
