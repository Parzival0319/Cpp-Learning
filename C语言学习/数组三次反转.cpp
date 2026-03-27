#include<stdio.h>
void reverse(int a[],int left,int right){
	while(left<right){
		int temp=a[left];
		a[left]=a[right];
		a[right]=temp;
		left++;
		right--;
	}
}
int main(){
	int N,M;
	scanf("%d %d",&N,&M);
	int nums[100];
	for(int i=0;i<N;i++){
		scanf("%d",&nums[i]);
	}
    M%=N;
    reverse(nums,0,N-1);
    reverse(nums,0,M-1);
    reverse(nums,M,N-1);
	for(int i=0;i<N;i++){
		if(i>0) printf(" ");
		printf("%d",nums[i]);
	}
	return 0;
} 
