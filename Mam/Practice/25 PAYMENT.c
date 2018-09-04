#include<stdio.h>
int main()
        {
            float basic,hra,ma,da,tax,fund,utility, ta;
        printf("Enter your basic salary\n");
        scanf("%f",&basic);

        if(basic < 5000)
        {
        hra =0.03* basic;
        ma =0.02* basic;
        da =0.02* basic;
        ta =0.01* basic;
        tax =0.00005* basic;
        fund =0.5* basic;
        utility= 0.04* basic;
        }

    else if(basic >=5000 && basic <= 30000)
             {
        hra =0.05* basic;
        ma =0.03* basic;
        da =0.03* basic;
        ta =0.02* basic;
        tax =0.02* basic;
        fund=0.08* basic;
        utility= 0.05* basic;
        }

        else if(basic > 30000)
        {
        hra =0.07* basic;
        ma =0.04* basic;
        da =0.04* basic;
        ta =0.03* basic;
        tax =0.3* basic;
        fund =0.1* basic;
        utility = 0.1* basic;
        }
        else
        {
            printf("invalid");
        }


        printf("HRA of basic salary =%f\n",hra);
        printf("M.A of basic salary =%f\n",ma);
        printf("D.A of basic salary =%f\n",da);
        printf("T.A of basic salary =%f\n",ta);
        printf("TAX of basic salary =%f\n",tax);
        printf("FUND of basic salary =%f\n",fund);
        printf("Utility bills of basic salary =%f\n",utility);

        return 0;
        }
