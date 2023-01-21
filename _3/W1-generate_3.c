#include <stdio.h>
#include <math.h>

#define PI 3.14159
#define M_PI 3.14159265358979323846
#define C_PI 3.141592654
#define F_PI 22.0/7

int gcd(int num1, int num2);

int toRad(int num);
int fromDec(int num);
int toDeg(int num);

int main(){
    for(int i=0; i<100000; i++){
        fromDec(i);

        if(i>72000) continue;
        toDeg(i);

        if(i>36000) continue;
        toRad(i);
    }
}

int gcd(int num1, int num2){
    int num = (num1 < num2) ? (num1+1)/2 : (num2+1)/2;
    int temp = num;
    int result = 1;
    for(int i=2; i<=temp; i+=2){
        if(i == 2) i--;
        if(num1 % i == 0 && num2 % i == 0) {
            result *= i;
            temp = num/i;
        }
    }

    return result;

}

int fromDec(int num){
    int result = 0;
    float temp = num/1000.0;
    float pi_result = 180*temp/PI;
    float m_result = 180*temp/M_PI;
    float c_result = 180*temp/C_PI;
    float f_result = 180*temp/F_PI;
    printf("DEC: %f    %f    %f    %f    \n", pi_result, m_result, c_result, f_result);
}

int toRad(int num){
    int commonDiv = gcd(num, 36000);
    int piFormUpper = num/commonDiv;
    int piFormLower = 36000/commonDiv;
    float pi_result = (PI*piFormUpper)/piFormLower;
    float m_result = (M_PI*piFormUpper)/piFormLower;
    float c_result = (C_PI*piFormUpper)/piFormLower;
    float f_result = (F_PI*piFormUpper)/piFormLower;

    printf("PI: (%f/%f)%u003c    %f    %f    %f    %f    \n", piFormUpper, piFormLower, pi_result, m_result, c_result, f_result);
}

int toDeg(int num){
    float temp = num/100.0;
    float result = temp*180;
    printf("%.3f%u003c = %f     \n", temp, num);
}