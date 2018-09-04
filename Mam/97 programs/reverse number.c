#include<stdio.h>
int main()
{
    int no,rvrse_no=0,rem,gvn_no;
    printf("Enter a number to reverse");
    scanf("%d",&gvn_no);
    no=gvn_no;
    while(no>0)
    {
        rem=no%10;
        rvrse_no=rvrse_no*10+rem;
        no=no/10;

    }
    printf("%d",rvrse_no);
    if(rvrse_no==gvn_no)
        printf("Entered no is palindrome");
    else
        printf("Entered no is not palindrome");
    return 0;
}
