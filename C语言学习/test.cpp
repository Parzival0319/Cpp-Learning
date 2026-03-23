#include<stdio.h>
#include<string.h>
struct Friend{
	char name[11];
	char birth[9];
	char num[18];
};
int main(){
	int n;
	scanf("%d",&n);
	struct Friend friends[n];
	int i,j;
	for(i=0;i<n;i++){
		scanf("%s %s %s",friends[i].name,friends[i].birth,friends[i].num);
	}
	for(i=0;i<n-1;i++){
		for(j=0;j<n-i-1;j++){
			if(strcmp(friends[j].birth,friends[j+1].birth)>0){
				struct Friend temp=friends[j+1];
				friends[j+1]=friends[j];
				friends[j]=temp;
			}
		}
	}
	for(i=0;i<n;i++){
		printf("%s %s %s\n",friends[i].name,friends[i].birth,friends[i].num);
}
return 0;
}
