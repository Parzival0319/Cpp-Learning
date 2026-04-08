#include <stdio.h>
int main(){
	int num[1000];int n=0;
	while(scanf("%d",&num[n])==1){
		n++;
	}
	for(int i=0;i<n;i++){
		if(i%2==0){
			num[i]*=num[i+1];
		}else{
			num[i]-=1;
		}
	}
    int a=0;
	for(int i=0;i<n;i+=2){
        if(num[i]==0) continue;
		if(a==1) printf(" ");
		printf("%d %d",num[i],num[i+1]);
		a=1;
		}
	if(a==0) printf("0 0");
	return 0;
} 
