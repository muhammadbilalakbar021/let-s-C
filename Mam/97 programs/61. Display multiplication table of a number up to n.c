#include<stdio.h>
int main()
{
    int a,b,c,t;
    printf("Enter the number you want to check the table : \n");
    scanf("%d",&a);
    printf("khn tak print karwana hai ? \n");
    scanf("%d",&b);

    for(c=1;c<=b;c++)
    {
        t=a*c;
        printf("%d\t",t);

    }
    return 0;

}
