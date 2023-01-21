#include <stdio.h>
#include <math.h>

#define PI 3.14159
#define M_PI 3.14159265358979323846
#define C_PI 3.141592654
#define F_PI 22.0/7.0

int gcd(int num1, int num2);
int factor(int num);

int toRad(int num);
int fromDec(int num);
int toDeg(int num);

int main(){

    int k = 0;

    printf("             PI          M_PI         CASIO          22/7\n");
    for(k=0; k<=12570; k++){
        fromDec(k);
    }

    printf("\n");

    printf("                            PI        M_PI       CASIO        22/7\n");
    for(k=0; k<=36000; k++){
        toRad(k);
    }

    printf("\n");

    for(int k=0; k<=6000; k++){
        toDeg(k);
    }

    printf("\n");

    for(int k=2; k<1000; k++){
        factor(k);
    }

    printf("\n");

    for(int p=2; p<1000; p++){
        for(int q=p+1; q<=1000; q++){
            int result = gcd(p, q);
            printf("[%d, %d] = %d\n", p, q, result);
        }
    }
}

int gcd(int num1, int num2){
    int temp = (num1 < num2) ? num1 : num2;
    int num = temp;
    int result = 1;
    int i = 2;

    while(i<temp){
        while(num1 % i == 0 && num2 % i == 0) {
            result *= i;
            num1 = num1/i;
            num2 = num2/i;
            temp = num/i;
        }
        if(i == 2){
            i += 1;
            continue;
        }
        i += 2;
    }
    if(i==temp) result *= (num1 % i == 0 && num2 % i == 0) ? i : 1;

    return result;
}

int factor(int num){
    int i = 2, index = 0;
    int temp = num;
    int result[1000];

    printf("%d...\n", num);
    while(i<=temp){
        if(temp % i == 0) {
            result[index] = i;
            temp = temp/i;
            printf("    %d: %d\n", index, result[index]);
            index++;
            continue;
        }
        if(i == 2){
            i += 1;
            continue;
        }
        i += 2;
    }
    printf("\n");

}

int fromDec(int num){
    float temp = num/1000.0;
    float pi_result = 180*temp/PI;
    float m_result = 180*temp/M_PI;
    float c_result = 180*temp/C_PI;
    float f_result = 180*temp/(F_PI);
    printf("DEC: %f    %f    %f    %f\n", pi_result, m_result, c_result, f_result);
}

int toRad(int num){
    int commonDiv = gcd(num, 36000);
    int piFormUpper = num/commonDiv;
    int piFormLower = 36000/commonDiv;
    float pi_result = (PI*piFormUpper)/piFormLower;
    float m_result = (M_PI*piFormUpper)/piFormLower;
    float c_result = (C_PI*piFormUpper)/piFormLower;
    float f_result = ((F_PI)*piFormUpper)/piFormLower;

    printf("PI: (%-5d/ %5d)\u03c0    %-9f    %-9f    %-9f    %-9f\n", piFormUpper, piFormLower, pi_result, m_result, c_result, f_result);
}

int toDeg(int num){
    float temp = num/1000.0;
    double result = temp*180.0;
    printf("%.2lf\u03c0 = %f\u00b0\n", temp, result);
}