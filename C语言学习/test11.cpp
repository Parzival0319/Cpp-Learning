#include<stdio.h>
int main(){
	int b,g,s,num;
	scanf("%d",&num);
	b=num/100;
	s=num%100/10;
	g=num%10;
	printf("%03d",g*100+s*10+b);
	return 0;
}
