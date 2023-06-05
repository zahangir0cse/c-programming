//
// Created by zahan on 6/3/2023.
//
// 1 + 1/2 + 1/3 + 1/4 + ..... + 1/n summation

#include <stdio.h>
#include <math.h>

double seriesSum(int n) {
    double sum = 0.0;

    for (int i = 1; i <= n; i++) {
        sum += 1.0 / i;
    }

    return sum;
}

int main(){
    int n;
    double sum;
    printf("Please enter value of n: ");
    scanf("%d", &n);
    sum = log(n);
    printf("Summation is: %f\n", sum);
    printf("Series Summation is: %f", seriesSum(n));
}