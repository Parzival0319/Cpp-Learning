#include<stdio.h>
struct student{
	char num[6];
	char name[11];
	int grade;
};
int main(){
	int n;
	scanf("%d",&n);
	int i,sum=0;
	struct student students[n];
	for(i=0;i<n;i++){
		scanf("%s %s %d",students[i].num,students[i].name,&students[i].grade);
		sum+=students[i].grade;
	}
	double average=(double)sum/n;
	printf("%.2f\n",average);
	for(i=0;i<n;i++){
		if(students[i].grade<average){
			printf("%s %s\n",students[i].name,students[i].num);
		}
	}
	return 0;
}
