#include<stdio.h>
int isprime(int a); 
int main(){
	int N,temp=0;
	int prime[10000];
	scanf("%d",&N);
	for(int i=1;i<=N;i++){
		if(isprime(i)) prime[temp++]=i;
	}
	int cnt=0;
	for(int i=0;i<temp-1;i++){
		if(prime[i+1]-prime[i]==2) cnt++;
	}
	printf("%d",cnt);
	return 0;
} 

int isprime(int a){
	if(a<=1) return 0;
	if(a==2) return 1;
	if(a%2==0) return 0;
	for(int i=3;i*i<=a;i+=2){
		if(a%i==0) return 0;
	}
	return 1;
}
