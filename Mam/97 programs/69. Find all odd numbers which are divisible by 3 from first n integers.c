#include<stdio.h>
int main()
{
    int a,c=1;
    printf("Enter any number \n");
    scanf("%d",&a);
    for(c;c<=a;c++)
    {
        if(c%3==0)
        {
            printf("%d odd \n",c);
        }
    }
     return 0;
}
