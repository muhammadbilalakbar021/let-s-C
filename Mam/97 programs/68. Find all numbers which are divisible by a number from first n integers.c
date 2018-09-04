#include<stdio.h>
int main()
{
    int a,b,c=1,ans;
    printf("Enter any number \n");
    scanf("%d",&a);
    printf("Enter number to check divisibility \n");
    scanf("%d",&b);
    for(c;c<=a;c++)
    {
        if(c%b==0)
        {
            printf("%d",c);
        }
    }
     return 0;
}
