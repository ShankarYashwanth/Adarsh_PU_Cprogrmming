LOGICAL OPERATOR WITH CONDITIONAL STATEMENTS




#include <stdio.h>

int main() {
   int x,y;
   printf("input the coordinate (x,y):\n");
   scanf("%d",&x);
   scanf("%d",&y);
   if(x>0&&y>0)
   printf("the coordinate points lies in first quadrant");
   if(x<0&&y>0)
   printf("the coordinate points lies in second quadrant");
   if(x<0&&y<0)
   printf("the coordinate points lies in third quadrant");
  if(x>0&&y<0)
   printf("the coordinate points lies in fourth quadrant");

    return 0;
}