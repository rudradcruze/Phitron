#include<stdio.h>

int main() {

    char ch;
    scanf("%c", &ch);

    if (ch >= '0' && ch <= '9')
        printf("IS DIGIT\n");


    if (ch >= 'a' && ch <= 'z') {
        printf("ALPHA\n");
        printf("IS SMALL\n");
    }
    if(ch >= 'A' && ch <= 'Z') {
        printf("ALPHA\n");
        printf("IS CAPITAL\n");
    }


    return 0;
}
