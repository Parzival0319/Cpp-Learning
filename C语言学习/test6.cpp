#include<stdio.h>
int main(){
int a,b,c,d,sum;
scanf("%d %d %d %d",&a,&b,&c,&d);
sum=a+b+c+d;
double average;
average=sum/4.0;
printf("Sum = %d\n",sum);
printf("Average = %.2f",average);
return 0;


}
