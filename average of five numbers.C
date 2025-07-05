average of five numbers

#include <stdio.h>


void average(int,int,int,int,int);
void main(){
    int a,b,c,d,e;
    printf("\ngoing to calculate average of five numbers:");
    printf("\nenter the five numbers;");
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
    average(a,b,c,d,e);
}
void average(int a,int b,int c,int d,int e)
{
    float avg;
    avg=(a+b+c+d+e)/5;
    printf("the average of given five numbers;%f",avg);
    
}