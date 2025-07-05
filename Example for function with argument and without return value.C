Example for function with argument and without return value.


#include <stdio.h>
void sum(int,int);
void main()
{
    int c,d,result;
    printf("\n going to calculate the sum of two numbers:");
    printf("\n enter two numbers:");
    scanf("%d %d",&c,&d);
    sum(c,d);
}
void sum(int a,int b)
{
    printf("\n the sum is %d",a+b);
}