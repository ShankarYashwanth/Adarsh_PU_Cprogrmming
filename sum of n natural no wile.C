
#include <stdio.h>

int main() {
   int i=1,n,sum=0;
   printf("enter a positive integer :");
   scanf("%d",&n);
  while (i <= n) {
        sum += i;
        i++;
    }
printf("sum of n natural numbers:%d",sum);
    return 0;
}