#include<stdio.h>
#define ROW 2
#define COL 2
void show(const int a[][COL],int row,int col)
{
  int r,c;

  for(r=0;r<row;r++)
  {
    for(c=0;c<col;c++)
      { printf("%d\t",a[r][c]);}
    printf("\n");

  }

}
void get(const int a[][COL],int row,int col)
{
  int r,c;

  for(r=0;r<row;r++)
  {
    for(c=0;c<col;c++)
      { printf("[%d][%d] = ",r,c);
        scanf("%d",&a[r][c]);
      }
  }

}

int main()
{
    int x[ROW][COL] = {{1,1},{1,1}},y[ROW][COL]={{2,3},{4,5}},z[ROW][COL]={0};
    int i,j;
    printf("Enter values for x  : \n");
    get(x,ROW,COL);

    printf("Enter values for y  : \n");
    get(y,ROW,COL);

    for(i=0;i<ROW;i++)
    {
        for(j=0;j<COL;j++)
            z[i][j] = x[i][j] + y[i][j];
    }

    printf("Array X : \n");
    show(x,ROW,COL);
    printf("Array y : \n");
    show(y,ROW,COL);
    printf("Array z : \n");
    show(z,ROW,COL);
}
