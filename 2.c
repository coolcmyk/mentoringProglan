#include <stdio.h>


int main(){
    float num1, num2;
    scanf("%f %f", &num1, &num2);
    float proc = num1/num2;
    printf("%.2f", proc);
}