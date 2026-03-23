#include<stdio.h>
int main(){
	int h,m,u,c;
	scanf("%d %d",&u,&c);
	h=u/100;
	m=u%100;
	int new_m=h*60+m;
	int new_h=(new_m+c)/60;
	m=(new_m+c)%60;
	printf("%d%02d",new_h,m);
	return 0;
}
