#include<stdio.h>
#include<string.h>

void reverse(char c[]) {
    int left = 0, right = strlen(c) - 1;
    char temp;
    while (left < right) {
        temp = c[right];
        c[right--] = c[left];
        c[left++] = temp;
    }
}

int main() {
    char s[100], r[100];
    int count = 0, i, start = 0;
    printf("Input a string\n");
    gets(s);
    /*while (s[count] != '\0') {
        count++;
    }
    for (i = count - 1; i >= 0; i--) {
        r[i] = s[start++];
    }*/
    reverse(s);
    //r[count] = '\0';
    printf("Reverse string is: %s", s);
    return 0;
}
