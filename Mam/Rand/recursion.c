#include<stdio.h>
void count(int n )
{
    printf("%d\n",n);

    if(n>1)
    count(n-1);
    printf("%d",n);
    }
    int main()
    {
        int n;
        print("Enter number");
        scanf("%d",&n);
        count(n);
        return 0;
    }
