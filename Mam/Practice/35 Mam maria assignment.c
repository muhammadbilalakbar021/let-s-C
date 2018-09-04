#include<stdio.h>
int main()
{
    int a,flag,high,low;
        printf("Enter the low number ");
        scanf("%d",&low);

        printf("Enter the high number");
        scanf("%d",&high);

    while(low < high)
    {
    flag=0;
        for(a=2;a<=low/2;++a)
        {
            if(low%a==0)
            {
                flag=1;
                break;
            }
        }
            if (flag==0)
            printf("%d\t",low);
            ++low;
            }
            return 0;


}
