#include<stdio.h>
#include<conio.h>
int main()
{
        int a,b,c;
        char ch;

        while(1){
        printf("input two integers\n");
        scanf("%d%d",&a,&b);
        getchar();
        c=a+b;
        printf("%d + %d = %d\n",a,b,c);

        printf("do u wish to add more (y/n)");
        scanf("%c",&ch);
        if (ch == 'y' || ch =='Y')
        continue;
        else
        break;
        }

    system("pause");
    return 0;
    }
