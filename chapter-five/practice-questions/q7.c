#include<stdio.h>
float convTem(float celsius);

int main(){
    printf("far : %f\n", convTem(37));
    return 0;
}

float convTem(float celsius){
    float far = celsius * (9.0/5.0) + 32;
    return far;
}