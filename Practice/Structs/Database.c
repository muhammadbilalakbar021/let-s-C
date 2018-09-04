#include<stdio.h>

typedef struct st_database
{
    char f_name[10];
    char l_name[10];
    int roll;
    char sex;
    int marks1;
    int marks2;
    int marks3;
    float average;

}db;
typedef struct st_database1
{
    char f_name[10];
    char l_name[10];
    int roll;
    char sex;
    int marks1;
    int marks2;
    int marks3;
    float average;

}db1;
void new(db array[] , int size );
void add(db array[] , int size , int new_rc);
void delete(db array[] , int size ,int del_no);
void update(db array[] , int size ,int upd_no);
void view(db array[] ,int size , int viw);
void average(db array[] ,int size , int avg , int aver );
void averageall(db array[] ,int size , int aver);
void maximum(db array[] ,db1 array1[] , int size , int max);
void minimum(db array[] ,db1 array1[] , int size , int min);
void id(db array[] ,int size , int num);
void sorting(db array[] , int size);

int main()
{

    int a,b,new_rc,del,upd,viw,avg,aver=0,max=0,min=0,num;
    size_t i;
    db1 array1[2];
    puts("=====================================================================================================================");
    printf("\t\t\t\t\t\tWelcome to my database\n");
    puts("=====================================================================================================================");
    printf("What do you want to do ?\n ");
    puts("---------------------------------------------------------------------------------------------------------------------");
    printf("1. for new records\n");
    printf("2. To exit\n");
    printf("Press   : ");
    scanf("%d",&a);
    puts("======================================================================================================================");
    if(a==1)
    {
        printf("How many you want to add records :");
        scanf("%d",&b);
        printf("-------------------");
        db array[b];
        new(array,b);
        printf("\n\n\n");
        printf("The records you enter are :\n");
        for(i=0;i<b;i++)
        {
        printf("For student %d\n\n",i+1);
        printf("First name :%s\n",array[i].f_name);
        printf("Last name :%s\n",array[i].l_name);
        printf("Roll number :%d\n",array[i].roll);
        printf("Sex (m/f) :%c\n",array[i].sex);
        printf("Marks 1 :%d\n",array[i].marks1);
        printf("Marks 2 :%d\n",array[i].marks2);
        printf("Marks 3 :%d\n",array[i].marks3);
        puts("---------------------");
        }


    printf("1. Add student records\n");
    printf("2. Delete student records\n");
    printf("3. Update student records\n");
    printf("4. View all student records\n");
    printf("5. Calculate an average of a selected student scores\n");
    printf("6. Show student who gets the max total score\n");
    printf("7. Show student who gets the min total score\n");
    printf("8. Find student by ID\n");
    printf("9. Sort records by total scores\n");
    scanf("%d",&a);
    if(a==1)
    {
        printf("Now we are adding a record :");
        printf("How many records you want to enter :");
        scanf("%d",&new_rc);
        add(array,b,new_rc);
        new_rc=new_rc+b;
        for(i=0;i<new_rc;i++)
        {
        printf("For student %d\n\n",i+1);
        printf("First name :%s\n",array[i].f_name);
        printf("Last name :%s\n",array[i].l_name);
        printf("Roll number :%d\n",array[i].roll);
        printf("Sex (m/f) :%c\n",array[i].sex);
        printf("Marks 1 :%d\n",array[i].marks1);
        printf("Marks 2 :%d\n",array[i].marks2);
        printf("Marks 3 :%d\n",array[i].marks3);
        puts("---------------------");
        }

    }
    if(a==2)
    {
        printf("For which record you want to delete data ?");
        printf("Enter number :");
        scanf("%d",&del);
        delete(array,b,del);

        for(i=0;i<b-1;i++)
        {
       printf("For student %d\n\n",i+1);
        printf("First name :%s\n",array[i].f_name);
        printf("Last name :%s\n",array[i].l_name);
        printf("Roll number :%d\n",array[i].roll);
        printf("Sex (m/f) :%c\n",array[i].sex);
        printf("Marks 1 :%d\n",array[i].marks1);
        printf("Marks 2 :%d\n",array[i].marks2);
        printf("Marks 3 :%d\n",array[i].marks3);
        puts("---------------------");
        }

    }
    if(a==3)
    {
        printf("For which record you want to update data ?");
        printf("Enter number :");
        scanf("%d",&upd);
        update(array,b,upd);

        for(i=0;i<b-1;i++)
        {
        printf("For student %d\n\n",i+1);
        printf("First name :%s\n",array[i].f_name);
        printf("Last name :%s\n",array[i].l_name);
        printf("Roll number :%d\n",array[i].roll);
        printf("Sex (m/f) :%c\n",array[i].sex);
        printf("Marks 1 :%d\n",array[i].marks1);
        printf("Marks 2 :%d\n",array[i].marks2);
        printf("Marks 3 :%d\n",array[i].marks3);
        puts("---------------------");
        }

    }
    if(a==4)
    {
        printf("Press 1 to view all of you record\n");
        printf("or\nEnter number of record you want to see :");
        scanf("%d",&viw);

        if(viw==1)
        {
            for(i=0;i<b;i++)
        {
        printf("For student %d\n\n",i+1);
        printf("First name :%s\n",array[i].f_name);
        printf("Last name :%s\n",array[i].l_name);
        printf("Roll number :%d\n",array[i].roll);
        printf("Sex (m/f) :%c\n",array[i].sex);
        printf("Marks 1 :%d\n",array[i].marks1);
        printf("Marks 2 :%d\n",array[i].marks2);
        printf("Marks 3 :%d\n",array[i].marks3);
        puts("---------------------");
        }
        }
        else
        {
           view(array,b,viw);
        }


    }
    if(a==5)
    {
        printf("Press 10 to take and print average of  all of you record\n");
        printf("or\nEnter number of record you want take average :");
        scanf("%d",&avg);
        if(avg==10)
        {

           // for(i=0;i<b;i++)
            //{
                averageall(array,b,aver);
              //  printf("Average of student %d is =",i+1,aver);
            //}
        }
        else
        {
            average(array,b,avg,aver);
            //printf("Average of your students marks is %d",aver);
        }
    }
    if(a==6)
    {
        maximum(array,array1,b,2);
        printf("For student %d\n\n",max+1);
        printf("First name :%s\n",array1[0].f_name);
        printf("Last name :%s\n",array1[0].l_name);
        printf("Roll number :%d\n",array1[0].roll);
        printf("Sex (m/f) :%c\n",array1[0].sex);
        printf("Marks 1 :%d\n",array1[0].marks1);
        printf("Marks 2 :%d\n",array1[0].marks2);
        printf("Marks 3 :%d\n",array1[0].marks3);
        puts("---------------------");

    }
    if(a==7)
    {
        maximum(array,array1,b,min);
        printf("For student %d\n\n",min+1);
        printf("First name :%s\n",array1[0].f_name);
        printf("Last name :%s\n",array1[0].l_name);
        printf("Roll number :%d\n",array1[0].roll);
        printf("Sex (m/f) :%c\n",array1[0].sex);
        printf("Marks 1 :%d\n",array1[0].marks1);
        printf("Marks 2 :%d\n",array1[0].marks2);
        printf("Marks 3 :%d\n",array1[0].marks3);
        puts("---------------------");

    }
    if(a==8)
    {
       printf("Enter the roll number you want to search :");
       scanf("%d",&num);
       id(array,b,num);
    }
    if(a=9)
    {
        sorting(array,b);
        for(i=0;i<b-1;i++)
        {
       printf("For student %d\n\n",i+1);
        printf("First name :%s\n",array[i].f_name);
        printf("Last name :%s\n",array[i].l_name);
        printf("Roll number :%d\n",array[i].roll);
        printf("Sex (m/f) :%c\n",array[i].sex);
        printf("Marks 1 :%d\n",array[i].marks1);
        printf("Marks 2 :%d\n",array[i].marks2);
        printf("Marks 3 :%d\n",array[i].marks3);
        puts("---------------------");
        }
    }

}

}
void new(db array[] , int size)
{

    size_t i;
    for(i=0;i<size;i++)
    {
        printf("Enter first name :");
        scanf("%s",&array[i].f_name);
        printf("Enter last name :");
        scanf("%s",&array[i].l_name);
        printf("Enter roll number :");
        scanf("%d",&array[i].roll);
        printf("Enter sex (m/f) :");
        scanf("%s",&array[i].sex);
        printf("Enter marks 1 :");
        scanf("%d",&array[i].marks1);
        printf("Enter marks 2 :");
        scanf("%d",&array[i].marks2);
        printf("Enter marks 3 :");
        scanf("%d",&array[i].marks3);
        puts("---------------------");
    }
}
void add(db array[] , int size, int new_rc)
{
    int i;
    int ne;
    ne=size+new_rc;
    for(i=size-1;i<ne;i++)
    {
        printf("Enter first name :");
        scanf("%s",&array[i].f_name);
        printf("Enter last name :");
        scanf("%s",&array[i].l_name);
        printf("Enter roll number :");
        scanf("%d",&array[i].roll);
        printf("Enter sex (m/f) :");
        scanf("%s",&array[i].sex);
        printf("Enter marks 1 :");
        scanf("%d",&array[i].marks1);
        printf("Enter marks 2 :");
        scanf("%d",&array[i].marks2);
        printf("Enter marks 3 :");
        scanf("%d",&array[i].marks3);
        puts("---------------------");
    }

}
void delete(db array[] , int size ,int del_no)
{
    int i;
    for(i=0;i<size;i++)
    {
        if(i+1==del_no)
        {
            for(i;i<size-1;i++)
                array[i]=array[1+1];
        }
    }
}
void update(db array[] , int size ,int upd_no)
{
    int i;
    for(i=0;i<size;i++)
    {
        if(i+1==upd_no)
        {
        printf("Enter first name :");
        scanf("%s",&array[i].f_name);
        printf("Enter last name :");
        scanf("%s",&array[i].l_name);
        printf("Enter roll number :");
        scanf("%d",&array[i].roll);
        printf("Enter sex (m/f) :");
        scanf("%s",&array[i].sex);
        printf("Enter marks 1 :");
        scanf("%d",&array[i].marks1);
        printf("Enter marks 2 :");
        scanf("%d",&array[i].marks2);
        printf("Enter marks 3 :");
        scanf("%d",&array[i].marks3);
        puts("---------------------");
        }
    }
}
void view(db array[] ,int size , int viw)
{
    int i;
    i=viw-1;
        printf("For student %d\n\n",i+1);
        printf("First name :%s\n",array[i].f_name);
        printf("Last name :%s\n",array[i].l_name);
        printf("Roll number :%d\n",array[i].roll);
        printf("Sex (m/f) :%c\n",array[i].sex);
        printf("Marks 1 :%d\n",array[i].marks1);
        printf("Marks 2 :%d\n",array[i].marks2);
        printf("Marks 3 :%d\n",array[i].marks3);
        puts("---------------------");

}
void average(db array[] ,int size , int avg , int aver)
{
    int i;
    int total=1;
    i=avg-1;
        printf("Marks 1 :%d\n",array[i].marks1);
        printf("Marks 2 :%d\n",array[i].marks2);
        printf("Marks 3 :%d\n",array[i].marks3);
        puts("---------------------");
        aver= array[i].marks1 + array[i].marks2 + array[i].marks3;
        total=aver/3;
        printf("Average of your students marks is %d",total);
}
void averageall(db array[] ,int size , int aver)
{

        int i;
        int total=1;
        for(i=0;i<size;i++)
        {
        puts("---------------------\n");
        aver=array[i].marks1+array[i].marks2+array[i].marks3;
        printf("Total is %d",aver);
        total=aver/3;

        printf("Average of student %d is =%d/n",i+1,total);


        }
}
void maximum(db array[] ,db1 array1[] , int size , int max)
{
    int i;
    int total=0;

        for(i=1;i<size;i++)
        {
        puts("---------------------\n");
        if((array[0].marks1+array[0].marks2+array[0].marks3)>(array[i].marks1+array[i].marks2+array[i].marks3))
        {

            array1[0].f_name=array[i].f_name;
            array1[0].l_name=array[i].l_name;
            array1[0].roll=array[i].roll;
            array1[0].sex=array[i].sex;
            array1[0].marks1=array[i].marks1;
            array1[0].marks2=array[i].marks2;
            array1[0].marks3=array[i].marks3;

        }

        }


}
void minimum(db array[] ,db1 array1[] , int size , int min)
{
    int i;
    int total=0;

        for(i=0;i<size;i++)
        {
        puts("---------------------\n");
        if((array[0].marks1+array[0].marks2+array[0].marks3)<(array[i].marks1+array[i].marks2+array[i].marks3))
        {
            array1[1].f_name=array[i].f_name;
            array1[1].l_name=array[i].l_name;
            array1[1].roll=array[i].roll;
            array1[1].sex=array[i].sex;
            array1[1].marks1=array[i].marks1;
            array1[1].marks2=array[i].marks2;
            array1[1].marks3=array[i].marks3;

        }

        }


}
void id(db array[] ,int size , int num)
{
    int i=num-1;
        printf("For student %d\n\n",i+1);
        printf("First name :%s\n",array[i].f_name);
        printf("Last name :%s\n",array[i].l_name);
        printf("Roll number :%d\n",array[i].roll);
        printf("Sex (m/f) :%c\n",array[i].sex);
        printf("Marks 1 :%d\n",array[i].marks1);
        printf("Marks 2 :%d\n",array[i].marks2);
        printf("Marks 3 :%d\n",array[i].marks3);
        puts("---------------------");
}
void sorting(db array[] , int size)
{

int i;
    int total=0;

        for(i=1;i<size;i++)
        {
        puts("---------------------\n");
        if((array[i].marks1+array[i].marks2+array[i].marks3)<(array[i+1].marks1+array[i+1].marks2+array[i+1].marks3))
        {
            array[i].f_name=array[i+1].f_name;
            array[i].l_name=array[i+1].l_name;
            array[i].roll=array[i+1].roll;
            array[i].sex=array[i+1].sex;
            array[i].marks1=array[i+1].marks1;
            array[i].marks2=array[i+1].marks2;
            array[i].marks3=array[i+1].marks3;

        }

        }
}
