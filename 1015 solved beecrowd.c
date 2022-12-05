#include <stdio.h>
#include <math.h>

int main (){
	
	float a=0, b=0, c=0, d=0, dis=0;
	
	scanf("%f %f", &a, &b);
	scanf("%f %f", &c, &d);
	
	dis = sqrt(pow(c - a, 2) + pow(d - b, 2));
	
	printf("%.4f\n", dis);

	return 0;
}
