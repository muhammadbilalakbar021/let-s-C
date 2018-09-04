#include<stdio.h>
int main()
{

        int num=0;
		int i=0;
		int k=0;
		int sol=0;
		printf("Enter the number to check ");
		scanf("%d",&num);
		if(num>100)
		{
			k=3;
		}
		else
		{
			k=2;
		}
		if(k==2)
		{
			if((num/10)==(num%10))
			{
				printf("%d is a palindrone ",num);
			}
			else
			{
				printf("%d is not a palindrone ",num);
			}
		}
		else if(k==3)
		{
			if((num/100)==(num%10))
			{
				printf("%d is a palindrone ",num);
			}
			else
			{
				printf("%d is not a palindrone ",num);
			}
		}
}
