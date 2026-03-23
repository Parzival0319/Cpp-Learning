#include<stdio.h>
void move(int,char,char,char);
int main()
{
    int n;
    scanf("%d",&n);
    printf("the step to moving %2d diskes:\n",n);
    move(n,'a','b','c');
    return 0;
}
void move(int n,char a,char b,char c){
	if(n==1){
		printf("%c-->%c\n", a, c);
	}else{
		move(n-1,a,c,b);
		printf("%c-->%c\n", a, c);
		move(n-1,b,a,c);
	}

}
