#include<stdio.h>
int main(){
	int n,i,a[1000];
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	int first=1;
	for(i=n-1;i>=0;i--){
		if(!first){
			printf(" ");
		}printf("%d",a[i]);
		first=0;
	}
	return 0;
}
