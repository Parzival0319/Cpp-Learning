#include<stdio.h>
int main(){
	char n[101];
	scanf("%s",n);
	int sum=0;
	for(int i=0;n[i]!='\0';i++){
		sum+=n[i]-'0';
	}
	char res[10];
	sprintf(res,"%d",sum);
	char *pinyin[]={"ling","yi","er","san","si","wu","liu","qi","ba","jiu"};
	
	for(int i=0;res[i]!='\0';i++){
		if(i>0) printf(" ");
		printf("%s",pinyin[res[i]-'0']);
	}
}
