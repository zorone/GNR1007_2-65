#include <stdio.h>
#include <math.h>

#define PI 3.14159
#define M_PI 3.14159265358979323846
#define C_PI 3.141592654
#define F_PI 22.0/7.0

int gcd(int num1, int num2);

int toRad(int num);
int fromDec(int num);
int toDeg(int num);

int main(){
    for(int i=0; i<100000; i++){
        fromDec(i);

        if(i>72000) {
            printf("\n");
            continue;}
        toDeg(i);

        if(i>36000) {
            printf("\n");
            continue;}
        toRad(i);

        printf("\n");
    }
}

int gcd(int num1, int num2){
    int num = (num1 < num2) ? (num1+1)/2 : (num2+1)/2;
    if (num<4){
    	num = num1;
	}
    int temp = num;
    int result = 1;
    for(int i=2; i<=temp; i++){
        if(i == 2) i--;
        if(num1 % i == 0 && num2 % i == 0) {
            result *= i;
            temp = temp/i;
            i = 2;
        }
    }

    return result;

}

int fromDec(int num){
    float temp = num/1000.0;
    float pi_result = 180*temp/PI;
    float m_result = 180*temp/M_PI;
    float c_result = 180*temp/C_PI;
    float f_result = 180*temp/(F_PI);
    printf("DEC: %f    %f    %f    %f    \n", pi_result, m_result, c_result, f_result);
}

int toRad(int num){
    int commonDiv = gcd(num, 36000);
    int piFormUpper = num/commonDiv;
    int piFormLower = 36000/commonDiv;
    float pi_result = (PI*piFormUpper)/piFormLower;
    float m_result = (M_PI*piFormUpper)/piFormLower;
    float c_result = (C_PI*piFormUpper)/piFormLower;
    float f_result = ((F_PI)*piFormUpper)/piFormLower;

    printf("PI: (%d/%d)\u03c0    %f    %f    %f    %f    \n", piFormUpper, piFormLower, pi_result, m_result, c_result, f_result);
}

int toDeg(int num){
    float temp = num/100.0;
    double result = temp*180;
    printf("%.2lf\u03c0 = %f     \n", temp, num);
}