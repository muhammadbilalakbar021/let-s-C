#include<conio.h>
int main()
        {
       int no,rvrse_num=0;
        printf("Enter the number u want to check  :");
        scanf("%d",&no);
        while(no>=1)
        {
            rvrse_num=rvrse_num*10+no%10;
        no=no/10;
        }
        printf("Your reverse number=%d",rvrse_num);
        return 0;
        }
