#include<stdio.h>
const float pi = 3.14;
void daire(float r,float *al,float *cev)
{
	*al = pi*(r)*(r);
	*cev = pi*(r)*2;
}
int main () {
	float yaricap,alan,cevre;
	printf("Yaricap giriniz : ");
	scanf("%f",&yaricap);
	daire(yaricap,&alan,&cevre);
	printf("\nAlan = %f ve Cevre = %f",alan,cevre);
	return 0;
}
