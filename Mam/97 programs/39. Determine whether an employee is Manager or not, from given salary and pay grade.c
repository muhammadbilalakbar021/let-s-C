#include<stdio.h>
int main()
{
    int price,grade,b;
    printf("If you want to check an employee is manager or not");
    printf("Enter your choice :\n");
    printf("By price press 1\n");
    printf("By pay grade  press 2\n");
    scanf(" %d", &b);
    if(b==1)
    {
        printf("Enter price : \n");
        scanf("%d",&price);
        if(price>80000 || price<100000)
        printf("employee is manager");
        else
        printf("employee is not manager");
    }
    if(b==2)
    {
        printf("Enter pay grade : \n");
        scanf("%d",&grade);
        if(grade>20 || price<22)
        printf("employee is manager");
        else
        printf("employee is not manager");
    }
    return 0;
    }
