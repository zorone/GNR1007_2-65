#include <stdio.h>

int main(){
	float r=0, h=0, volume=0;
	float pi = 3.14159;
	printf("please put r\n");
	scanf("%f", &r);
	printf("please put h\n");
	scanf("%f", &h);
	volume = 1.0/3*r*r*h*pi;
	printf("volume = %f", volume);
	
	return 0;
}