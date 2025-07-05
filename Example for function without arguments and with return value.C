
Example for function without arguments and with return value


#include <stdio.h>
int sum ();
void main()
{
    int result;
    printf("\n going to calculate the sum of two numbers:");
    result=sum();
    printf("%d",result);
}
int sum ()
{
 int a,b;
 printf("\n enter to numbers");
 scanf ("%d %d",&a,&b);
 return a+b;
