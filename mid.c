#include <stdio.h>
#include <math.h>


int main(void){

	double a = -2;
	double b = 0;
	double c = (a+b)/2;
	double y1, y2, y3, fac, fbc, zettaiti, cosa, cosb, cosc;

	while(1){
		c = (a+b)/2;
		
		cosa = cos(a);
		cosb = cos(b);
		cosc = cos(c);

		y1 = a + cosa;
		y2 = b + cosb;
		y3 = c + cosc;

		fac = y1 * y3;
		fbc = y2 * y3;

		if( fac < 0){
			b = c;
		}else if( fbc < 0){
			a = c;
		}

		zettaiti = a - b;

		if( fabs(zettaiti) < 0.000001 ){
			printf("answer:%0.6lf\n", a);
			return 0;
		}
	}
	return 0;
}
