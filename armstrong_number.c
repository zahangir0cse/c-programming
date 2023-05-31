#include<stdio.h>

int main(){
    int n, temp, sum = 0, reminder;
    printf("Please enter value of n: ");
    scanf("%d", &n);
    temp = n;
    while(n > 0){
        reminder = n%10;
        sum += reminder * reminder * reminder;
        n = n/10;
    }
    if(temp == sum){
        printf("It's armstrong number");
    }else{
        printf("It's not armstrong number");
    }
    return 0;
}
