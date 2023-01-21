#include <stdio.h>
#include <string.h>

#define PI 3.14159
#define M_PI 3.14159265358979323846
#define C_PI 3.141592654

int returnAsPI();
int returnAsDeg();
int returnAsDec();

int main(){
    char *mode = -1, *str = '\0';
    double num = 0;
    printf("Please enter your value...");
    scanf("%f", &num);
    if (num*10 < 1){
        mode = "PI";
    }
    if (num >= 1){
        mode = 0;
    }
    if(mode == -1){
        mode = "Degree";
    }
    if(strcmp(mode, "PI")){
        printf("please enter another argument, with last character as \'p\' for pi, or \'x\' for multiplier...\n");
        scanf("%s", str);
    }
    switch(mode[0]){
        case 'P': returnAsPI()
        case 'D':
        case 0:
        default:
    }
}

int returnAsPI(){

}

int returnAsDeg(){

}

int returnAsDec(){

}