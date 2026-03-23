#include<stdio.h>
int main(){
	double F,C;
	scanf("%lf",&F);
	C=(F-32.0)/9*5;
	printf("%.6f",C);
	return 0;
}
