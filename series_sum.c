//
// Created by zahan on 6/5/2023.
//

// Series is: 1*3 + 2*5 + 3*7 + …. + n*(2n+1)


#include <stdio.h>

int seriesSum2(int n){
    int sum = 0.0;
    for(int i = 1; i <=n; i++){
        sum += n * (2*n + 1);
    }
    return sum;
}

int main(){
    int n;
    printf("Please enter value of n: ");
    scanf("%d", &n);
    printf("Sum of Series is: %d", seriesSum2(n));
    return 0;
}