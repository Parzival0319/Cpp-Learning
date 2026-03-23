#include<stdio.h>
int main(){
	int num,i;
	scanf("%d",&num);
	int issushu=1;
	for(i=2;i<num;i++){
		if(num%i==0){
			issushu=0;
		}
	}
	if(issushu==1){
		printf("Yes");
	}else{
		printf("No");
	}
	return 0;
} 
