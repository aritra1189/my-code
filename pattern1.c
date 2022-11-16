#include<stdio.h>
int main()
{
    int i,rows,j;
    printf("enter limiting number:");
    scanf("%d",&rows);
    for(j=1;j<=rows;j++)
  {
    for(i=1;i<=j;i++)
    {
        printf("*");
    }
        printf("\n");
    
  }
    return 0;
}