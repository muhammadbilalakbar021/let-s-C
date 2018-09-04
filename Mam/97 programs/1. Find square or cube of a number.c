#include<stdio.h>
#include<conio.h>
int main()
{
        int sqr,cube,number;
        char a;
        printf("Enter '1'to sqr or'2 to take cube'");
        scanf("%c",&a);
        switch(a)
        {case '1':
        printf("Enter the number you want to take square");
        scanf("%d",&number);
        number=number*number;
        printf("sqr of no is%d",number);
        break;
        case'2':
        printf("Enter the number you want to take cube");
        scanf("%d",&number);
        number=number*number*number;
         printf("cube of no is%d",number);
        break;
        default:
        printf("soory");
        return 0;
        }
}
