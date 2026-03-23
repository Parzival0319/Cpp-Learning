#include<stdio.h>
int main(){
	int n,i,first,j;
	scanf("%d",&n);
	for(i=2;i<=n;i++){
		printf("%d = ",i);
	
	int temp=i;
	first=1;
	for(j=2;j*j<=temp;j++){
		while(temp%j==0){
			if(!first){
				printf(" * ");
			}
			printf("%d",j);
			temp/=j;
			first=0;
		}
    }
	if(temp>1){
		if(!first){
				printf(" * ");
			}
		printf("%d",temp);
	}
	
   printf("\n");
 }
	return 0;
  
}

