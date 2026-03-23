#include<stdio.h>
#include<string.h>
int main(){
    int a[26],i;
    memset(a,0,26*sizeof(int));
    char ch;
	while((ch=getchar())!='\n'){
		if(ch>='A'&&ch<='Z'){
			a[ch-'A']++;
		}
	}
	for(i=0;i<26;i++){
		printf("%c(%d)",'A'+i,a[i]);
		if((i+1)%5==0){
			printf("\n");
		}
	
	}
	return 0; 
}

