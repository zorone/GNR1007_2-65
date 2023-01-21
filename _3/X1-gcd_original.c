#include <stdio.h>

int gcd(int a, int b) {
    int remainder = a % b;

    if (remainder == 0) {
        return b;
    }

    return gcd(b, remainder);
}

int main(){
    for(int i = 2; i<1000; i++){
        for(int j = i+1; j<=1000; j++){
            printf("[%d, %d] = %d\n", i, j, gcd(i, j));
        }
    }
}