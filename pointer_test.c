//
// Created by zahan on 6/4/2023.
//

#include <stdio.h>
#include <string.h>

int main(){
    char *p = "Hello World";
    int len = strlen(p);
    int i;
    /*while (*p != '\0'){
        printf("%c\n", *p);
        p++;
    }
    printf("Reverse\n");*/
    for(i = len-1; i >=0; i--){
        if (*(p+i) >= 'A' && *(p+i) <= 'Z'){
            printf("%c", *(p+i) + 32);
        } else if (*(p+i) >= 'a' && *(p+i) <= 'z'){
            printf("%c", *(p+i) - 32);
        } else{
            printf("%c", *(p+i));
        }
    }
    return 0;
}