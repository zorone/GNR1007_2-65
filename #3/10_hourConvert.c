#include<stdio.h>

int main(){
	int hRemain = 0; // output
	int H = 200;     // input
	int day = 0; // output
	printf("please put H\n");
	scanf("%d", &H);
	day = H/24;
	hRemain = H%24;
	printf("day = %d\n", day);
	printf("remain = %d\n", hRemain);
	return 0;
}