#include <stdio.h>

int main (){
	int Testcase;
	double Celsius,Farenheit,Reamur,Kelvin;
	scanf ("%d",&Testcase);
	for (int i=0;i<Testcase;i++){
	scanf ("%lf",&Celsius);
	Reamur = (4* Celsius)/5;
	Farenheit = (9* Celsius)/5+ 32;
	Kelvin = Celsius + 273;
	printf ("%.2f %.2f %.2f",Reamur,Farenheit,Kelvin);
	}
return 0;
}
