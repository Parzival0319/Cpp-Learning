#include<stdio.h>
int main(){
	int n,fact,i;
	scanf("%d",&n);
	fact=1;
	for(i=1;i<=n;i++){
		fact*=i;
	}
	printf("%d!=%d",n,fact);
	return 0;
}
