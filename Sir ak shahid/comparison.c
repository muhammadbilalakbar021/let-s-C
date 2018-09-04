int main()
{
    int a,b,c,d,e;
    printf("enter five values");
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
    if(a<b)
       if(a<c)
            if(a<d)
              if(a<e)
                   printf("%d is min",a);
                else
                   printf("%d is min",e);
             else
               printf("%d is min",d);
        else
          printf("%d is min",c);
    else
       printf("%d is min",b);

    return 0;
}
