#include<stdio.h>
int getp(int a,int b){
	int p=0;
	while(a>0){
		int temp=a%10;
		if(temp==b){
			p=p*10+b;
		}
		a/=10;
	}
	return p;
}
int main(){
	int A,Da,B,Db;
	scanf("%d %d %d %d",&A,&Da,&B,&Db);
	printf("%d",getp(A,Da)+getp(B,Db));
	return 0;
}
