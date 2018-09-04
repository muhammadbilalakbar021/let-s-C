#include<stdio.h>
int main()
{
    float temp,celcuis,faren,kelvin,rankie;
    char a;
    printf("1 for celcius \n");
    printf("2 for Fahrenheit \n");
    printf("3 for Kelvin \n");
    printf("4 for Rankie \n");
    scanf("%c",&a);




    switch(a)
    {
        case'1' :
            {
                printf("Enter temperature : \n");
    scanf("%f",&temp);
            celcuis=32+(temp*1.8);
            printf("your temperature in celcuis =%.2f",celcuis);
            break;
            }
        case'2' :
        {
            printf("Enter temperature : \n");
    scanf("%f",&temp);
            faren=(temp-32)/1.8;
            printf("Your temperature in farenheit =%.2f",faren);
            break;
        }
        case'3' :
            {
                printf("Enter temperature : \n");
    scanf("%f",&temp);
            kelvin=273.15+temp;
            printf("Your temperature in kelvin =%.2f",kelvin);
            break;
            }
        case'4' :
            {
                printf("Enter temperature : \n");
    scanf("%f",&temp);
                rankie=temp*(5.0/9.0);
                printf("Your temperature in rankie =%.2f",rankie);
                break;
            }
        default:
            printf("None");
    }
    return 0;
}
