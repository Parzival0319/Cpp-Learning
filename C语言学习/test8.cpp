#include<stdio.h>
int main(){
	int h,m,c,u;
	scanf("%d %d",&u,&c);
	
	h=u/100+c/60;
	m=u%100;
	
	if((m+c%60)<60)
	m+=c%60;
	else {
	h++;
	m=(m+c)%60;} 
	
	printf("%d%02d",h,m);
	return 0;
}
