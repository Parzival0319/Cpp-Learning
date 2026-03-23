#include<stdio.h>
int isleapyear(int year){
	return (year%4==0&&year%100!=0)||(year%400==0);
}
int dayinmonth(int year,int month){
	int a[]{31,28,31,30,31,30,31,31,30,31,30,31};
	if(month==2&&isleapyear(year)){
		return 29;
	}else{
		return a[month-1];
	}
	
}
int main(){
	int year,month;
	scanf("%d %d",&year,&month);
	printf("%d",dayinmonth(year,month));
	return 0;
}
