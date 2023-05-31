#include<stdio.h>
#include<stdlib.h>

int main(){
    FILE * fPtr = fopen("D:\\C Practice\\file\\newfile.txt", "w+");

    if(fPtr == NULL){
        printf("Error in file creation");
        exit(1);
    }
    int x = 10;
    char ch[255];
    fprintf(fPtr, "Hello Zahangir. x %d", x);
    fread(ch, sizeof(char), 255, fPtr);
    printf("%s", ch);
    fclose(fPtr);
    return 0;
}
