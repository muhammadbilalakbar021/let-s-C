#include<stdio.h>
int main()
{
    int num,b=1,dec_no=0,bnr_no,rem;
    printf("Enter your binary number\n");
    scanf("%d",&bnr_no);
    num=bnr_no;
    do
    {
        rem=num%10;
        dec_no=dec_no+rem*b;
        num=num/10;
        b=b*2;
    }
    while(num!=0);
        printf("%d",dec_no);
    return 0;


}
