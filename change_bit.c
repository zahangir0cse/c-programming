//
// Created by zahan on 6/5/2023.
//

#include <stdio.h>

int countBitsToChange(int a, int b) {
    int xor = a^b;
    int count = 0;
    while (xor != 0){
        if(xor & 1){
            count++;
        }
        xor >>=1;
    }
    return count;
}

int main(){
    int a, b;
    printf("Please enter value of A & B:\n");
    scanf("%d%d", &a, &b);
    printf("A= %d & B = %d\n", a, b);
    printf("Count Bit Flipped: %d", countBitsToChange(a, b));
    return 0;
}