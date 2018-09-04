#include<stdio.h>

int main()
{
  int array[5] = {1,2,3,4,5};
  int *ptr;
  int i;
  ptr = array;//ptr = &array[0]

  printf("Value of array = %p\n",array);
  for(i=0;i<5;i++)
     {printf("array[%d] = %d\n",i,array[i]);}

  printf("\nValue of ptr = %p\n",ptr);
  for(i=0;i<5;i++)
     {printf("ptr[%d] = %d\n",i,ptr[i]);}
  for(i=0;i<5;i++)
     {printf("(array+%d) = %p\n",i,(array+i));

     }
for(i=0;i<5;i++)
     {printf("(ptr+%d) = %p\n",i,(ptr+i));

     }
printf("\nValue of ptr = %p\n",ptr);
for(i=0;i<5;i++)
     {
         printf("*array = %d\n",*array);
         //array++;
     }

for(i=0;i<5;i++)
     {
         printf("*ptr = %d\n",*ptr);
        ptr++;
     }

printf("\nValue of ptr = %p\n",ptr);

}
