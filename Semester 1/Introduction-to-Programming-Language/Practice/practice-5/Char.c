#include<stdio.h>

int main() {

    char a;
    scanf("%c", &a);
    int temp = (int)(a);
    if (temp >= 90)
        printf("%c\n", temp-32);
    else
        printf("%c\n", temp+32);
    return 0;
}
