#include<stdio.h>

	int hasFive(int num){
		while(num>0){
			if(num%10==5){
				return 1;
			}
			num/=10;
		}
		return 0;
	}
int main(){

	int m,n,i,count,first;
	count=0;
	first=1;
	scanf("%d %d",&m,&n);
	for(i=m;i<=n;i++){
		if(i%3==0&&hasFive(i)){
			if(!first){
				printf(" ");
			}
			printf("%d",i);
			count++;
			first=0;
		}
		
	}
	if(count == 0){
        printf("No exist");
    }
	return 0;
}
