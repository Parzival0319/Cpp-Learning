#include<stdio.h>
int main(){
	int x,y,z,a,b,c;
	scanf("%d %d %d",&x,&y,&z);
	a=x/3;
	b=(y+a)/3;
	c=(z+a+b)/3;
	printf("%d %d %d",a+b+c,b+c,c);
	return 0;
	
	
	
	
	
}
