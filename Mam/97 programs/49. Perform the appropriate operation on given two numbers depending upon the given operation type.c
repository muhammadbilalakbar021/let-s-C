#include<stdio.h>
int main()
{
    int no1,no2,ans,a;
    char b;
    printf("1 for addition\n");
    printf("2 for subtraction\n");
    printf("3 for multiplication\n");
    printf("4 for division\n");

    scanf("%c",&b);
    switch(b)
   {

    case'1' :
        {
            scanf("%d",&no1);
            scanf("%d",&no2);
            ans=no1+no2;
            printf("Result = %d",ans);
            break;
        }
    case'2' :
        {
            scanf("%d",&no1);
            scanf("%d",&no2);
            ans=no1-no2;
            printf("Result = %d",ans);
            break;
        }
    case'3' :
        {
            scanf("%d",&no1);
            scanf("%d",&no2);
            ans=no1*no2;
            printf("Result = %d",ans);
            break;
        }
    case'4' :
        {
            scanf("%d",&no1);
            scanf("%d",&no2);
            ans=no1/no2;
            printf("Result = %d",ans);
            break;
        }
    default:
        printf("Wrong choice");
   }
return 0;
}
