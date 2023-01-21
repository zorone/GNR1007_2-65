#include<stdio.h>

int main(){
	int h = 45, r = 79;
	float A = 0;
	const float pi = 22.0/7;
	A = (pi*r*r*h)/3;
	printf("Area of cone with radius = %d and height = %d is %.2f\n", r, h, A);
}