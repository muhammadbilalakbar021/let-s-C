#include<stdio.h>
int problem(int ,int, int, int);

int main()
{
    int a,b,ans,c;
    printf("Enter a number \n");
    scanf("%d",&a);
    printf("Enter a number \n");
    scanf("%d",&b);
    problem(a,b,ans,c);
}
int problem(int a, int b,int ans, int c )
{
    ans=a-b;
    if(ans<10)
    {
        c=a/b;
    printf("Your divide is %d",c);
    }
    if(ans>10)
    {
        c=a*b;
        printf("Yor multiplication is %d",c);
    }

}
