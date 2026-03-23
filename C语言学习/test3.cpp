#include<stdio.h>
int main (){
	int foot;
	double inch,cm;
	scanf("%lf",&cm);
	foot=cm/30.48;
	inch=(cm/30.48-foot)*12;
	printf("%d %d",foot,(int)inch);
	return 0;
}
