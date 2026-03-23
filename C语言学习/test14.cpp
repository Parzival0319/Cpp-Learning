#include<stdio.h>
int main(){
	int n,num,i,max;
	scanf("%d",&n);
	scanf("%d",&num);
	max=num;
	for(i=1;i<n;i++){
		scanf(" %d",&num);
		if(num>max){
			max=num;
		}
	}
	printf("%d",max);
	return 0;
}
