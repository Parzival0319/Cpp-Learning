#include<stdio.h>
int main(){
	char ch[80][81];
	int cnt=0;
	while(scanf("%s",ch[cnt])==1){
		cnt++;
		if (getchar() == '\n') break; 
	}
	for(int i=cnt-1;i>=0;i--){
		printf("%s",ch[i]);
		if(i>0) printf(" ");
	}
	return 0;
}
