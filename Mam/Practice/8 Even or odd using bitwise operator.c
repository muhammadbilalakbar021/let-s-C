#include<stdio.h>
int main()
{
        int no;
        char a;
        while(1){
        printf("enter the number\n");
        scanf("%d",&no);
        getchar();
        if(no&1==1)
        printf("ODD\n");
        else
        printf("even\n");
        printf("do u wish to add more numbers then enter the no\n");
        scanf("%a",&a);

        }
system("pause");
return 0;
}
