#include<stdio.h>
int main(){
    float a,b,c,sum,average;

    printf("enter three number:");
    scanf("%f %f %f",&a, &b, &c);

    sum = a + b + c;
    average = sum/3;

    printf("average of three no is: %f",average);

    return 0;
}