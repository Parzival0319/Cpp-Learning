#include<stdio.h>
int isprime(int a){
	if(a==2) return 1;
	if(a%2==0) return 0;
	for(int i=3;i*i<=a;i+=2){
		if(a%i==0) return 0;
	}
	return 1;
}

int main(){
	int M,N;
	scanf("%d %d",&M,&N);
	int cnt=0;
	int num=2;
	int b=0;
	while(cnt<N){
		if(isprime(num)){
			cnt++;
		if(cnt>=M){
			if(b) printf(" ");
			 printf("%d",num);
			 b++;
			 if(b%10==0){
			 	 printf("\n");
			 	 b=0;
			 }
		}
		
		}
		num++; 
	}
	return 0;
} 
