#include<stdio.h>
#include<conio.h>
int main()
{

       int a=0,b=0,number;
        printf("Enter which you want to calculate");
        scanf("%d",&a);
        if(a>100)
        {
            b=3;
        }
        else
        {
            b=2;
        }
        if(b==3)
        {
            if((a/100)==(a%10))
                {
                    printf("This is the number%d",a);
                }
                else
                {
                    printf("%d THIS IS NOT THE NUMBER",a);
                }
                        }
        else if(b==2)
                {
                    if((b/10)==(b%10))
                    {
                        printf("tHIS number is wo wala%d",a);
                    }
                    else
                    {
                        printf("This is not that number%d",a);
                    }
                }
}
