#include<stdio.h>
#include<math.h>
int main()
{
    int sum,substruct,multiply,devision,power,moduler,x,y;

    printf("enter the value of x:");
    scanf("%d",&x);
    printf("enter the value of y:");
    scanf("%d",&y);
    sum=x+y;
    substruct=x-y;
    multiply=x*y;
    devision=x/y;
    power=pow(x,y);
    moduler= x%y;
    printf("the sum of two number is: %d\n", sum);
    printf("the substruction of two number is:%d\n", substruct);
    printf("the multiplication of two number is: %d\n", multiply);
    printf("the devision of two number is: %d\n",devision);
    printf("the power of two number is: %d\n",power);
    printf("the moduler of two number is: %d",moduler);
    
    return 0;
}