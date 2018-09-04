#include<stdio.h>
int main()
{
    int a,b,c;
    char ch;
        while(1){
            printf("input two integers\n");
            scanf("%d%d",&a,&b);
            getchar();
            c=a+b;
            printf("%d + %d = %d",a,b,c);
            printf("if u want to add more numbers (y/n)\n");
            scanf("%c",&ch);
            if (ch =='y')
            continue;
            else
                break;
system("pause");
}
return 0;
}
