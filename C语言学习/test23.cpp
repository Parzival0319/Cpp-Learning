#include <stdio.h>

double maxVal(double x, double y, double z);
int main()
{

    double x, y, z;
    scanf("%lf %lf %lf", &x, &y,&z);
    double m;
    m=maxVal(x,y,z)/(maxVal(x+y,y,z)*maxVal(x,y,y+z));
   printf("%.2f",m);


    return 0;
}

double maxVal(double x, double y, double z){
	double max=x;
	if(y>max){
		max=y;
	}
	if(z>max){
		max=z;
	}
	return max;
}
