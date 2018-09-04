#include<stdio.h>
int main()
{
    int price,width,b;
    printf("If you want to check a phone type");
    printf("Enter your choice :\n");
    printf("By price press 1\n");
    printf("By width  press 2\n");
    scanf(" %d", &b);
    if(b==1)
    {
        printf("Enter price : \n");
        scanf("%d",&price);
        if(price>2000 || price<3000)
        printf("Your phone is smart phone");
        else
        printf("Your phone is not smart phone");
    }
    if(b==2)
    {
        printf("Enter width : \n");
        scanf("%d",&width);
        if(price>5 || price<8)
        printf("Your phone is smart phone");
        else
        printf("Your phone is not smart phone");
    }
    return 0;
    }
