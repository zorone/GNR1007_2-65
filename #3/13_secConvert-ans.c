#include <stdio.h>

int main(){
	int totalS = 4000;//input
	int hour = 0, minute = 0, second = 0; //output
	hour = totalS/3600;
	minute = (totalS%3600)/60;
	second = (totalS%3600)%60;
	printf("hour = %d\n minute = %d\n second = %d\n", hour, minute, second);
	
	return 0;
}