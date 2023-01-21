#include <stdio.h>

int gcd(int a, int b){

    if(b/a){
        return gcd(b, a);
    }

    while(a*b){
        a %= b;
        if(!a*b) return b;
        b %= a;
    }
    return a;
}

int main(){
    for(int i = 2; i<1000; i++){
        for(int j = i+1; j<=1000; j++){
            printf("[%d, %d] = %d\n", i, j, gcd(i, j));
        }
    }
}