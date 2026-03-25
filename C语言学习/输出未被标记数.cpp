#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int nums[100];
	for(int i=0;i<n;i++){
		scanf("%d",&nums[i]);
	}
	int remark[101]={0};
	for(int i=0;i<n;i++){
		int temp_n=nums[i];
		while(temp_n!=1){
			if(temp_n%2==0) temp_n=temp_n/2;
			else{
				temp_n=(3*temp_n+1)/2;
			}
			if(temp_n<=100) remark[temp_n]=1;
		}
	}
	int result[100],cnt=0;
	for(int i=0;i<n;i++){
		if(remark[nums[i]]==0){
			result[cnt++]=nums[i];
		}
	}
	for(int i=0;i<cnt-1;i++){
		for(int j=0;j<cnt-i-1;j++){
			if(result[j]<result[j+1]){
				int t=result[j];
				result[j]=result[j+1];
				result[j+1]=t;
			}
		}
	}
	for(int i=0;i<cnt;i++){
		if(i>0) printf(" ");
		printf("%d",result[i]);
	}
	return 0;
} 
