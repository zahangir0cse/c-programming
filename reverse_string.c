#include<stdio.h>

int main(){
    char s[100], r[100];
    int count = 0, i, start=0;
    printf("Input a string\n");
    gets(s);
    while(s[count] != '\0'){
        count++;
    }
    for(i = count-1; i>=0; i--){
        r[i] = s[start++];
    }
    r[count] = '\0';
    printf("Reverse string is: %s", r);
    return 0;
}
