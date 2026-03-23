#include<stdio.h>
int main(){
	int a,b,min,yue,i;
	scanf("%d %d",&a,&b);
	min=a<b?a:b;
	for(i=1;i<=min;i++){
		if(a%i==0&&b%i==0){
			yue=i;
		}
	}
	printf("%d",yue);
	return 0;
}
