#include<stdio.h>
int main()
{
    int a,b,ans;
    printf("Enter the 1st number : \n");
    scanf("%d",&a);
    printf("Enter the second number : \n");
    scanf("%d",&b);
   ans=a-b;
   if (ans < 0)
   {ans=ans*-1;
   printf("Your absolute answer is %d",ans);}
   else
   printf("Your absolute answer is %d",ans);
   return 0;
   }
