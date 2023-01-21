#include <stdio.h>

int main(){
	int sec = -3, min = -2, hr = -1;
	printf("please enter seconds\n");
	scanf("%d", &sec);
	hr = sec/3600;
	sec = sec%3600;
	min = sec/60;
	sec = sec%60;
	printf("%d hours, %d minutes, %d seconds\n", hr, min, sec);
	return 0;
}