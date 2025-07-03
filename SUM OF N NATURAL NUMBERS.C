SUM OF N NATURAL NUMBERS


#include <stdio.h>

int main() {
  int i,n,sum=0;
  printf("Enter a positive integer:");
  scanf("%d",&n);
  for(i=1;i<=n;i++)
  sum=sum+i;
  printf("sum of natural numbers:%d",sum);
  

    return 0;
}