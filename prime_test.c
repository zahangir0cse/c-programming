//
// Created by zahan on 6/5/2023.
//
#include <stdio.h>
#include <stdbool.h>

bool isPrime(int n){
    if(n <=1){
        return false;
    }
    for(int i = 2; i * i <= n; i++){
        if(n % i == 0){
            return false;
        }
    }
    return true;
}

int main(){
    int n;
    printf("Please enter value of n: ");
    scanf("%d", &n);
    if(isPrime(n)){
        printf("It is Prime");
    } else{
        printf("It is not Prime");
    }
    return 0;
}