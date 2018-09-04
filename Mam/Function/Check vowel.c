#include<stdio.h>
char vowel(char a);
int main()
{
    char vl;
    printf("Enter an alphabet \n");
    scanf("%ch",&vl);
    if(vowel(vl)==1)
     printf("%c IS a vowel",vl);
    else
        printf("%c is not a vowel",vl);
}

char vowel(char vl)
{
    if (vl == 'A' || vl == 'a' || vl == 'E' ||  vl == 'e' ||vl == 'i' || vl == 'I'
         || vl == 'o' || vl == 'O' || vl == 'u' || vl == 'U' )
        return 1;
    else
        return 0;

}
