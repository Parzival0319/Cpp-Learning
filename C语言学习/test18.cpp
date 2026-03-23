#include<stdio.h>
int main(){
	int i,num,p=0,n=0,zero=0;
	
	for(i=0;i<10;i++){
		
		    scanf("%d",&num);
		    if(num>0){
		    	p++;
			}else if(num<0){
				n++;
			}else{
				zero++;
			}
		    
	}
	printf("%d %d %d",p,n,zero);
	return 0;
}
