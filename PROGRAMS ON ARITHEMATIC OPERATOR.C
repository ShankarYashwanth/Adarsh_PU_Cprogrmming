PROGRAMMING ON ARITHEMATIC OPERATORS



#include <stdio.h>

int main() {
  int a,b,c;
  int sum,sub,multi,divi;
  printf("Enter the value of a:");
  scanf("%d",&a);
  printf("Enter the value ofb:");
  scanf("%d",&b);
  printf("Enter the value of c:");
  scanf("%d",&c);
  sum=a+b+c;
  sub=a-b-c;
  multi=a*b*c;
  divi=a/b/c;
  printf("a+b+c=%d\na-b-c=%d\na*b*c=%d\na/b/c=%d\n",sum,sub,multi,divi);
  
  

    return 0;
}