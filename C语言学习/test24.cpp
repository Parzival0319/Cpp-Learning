#include<stdio.h>
int main(){
	int N;
	scanf("%d",&N);
	int i=0;
	int sum=0;
	while(N>0){
	
		sum+=(N%10);
		N/=10;
		i++;
	}
	printf("%d %d",i,sum);
	return 0;
}
