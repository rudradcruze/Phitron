#include<stdio.h>

int main() {

    int a, temp;
    scanf("%d", &a);
    if (a >= 999 && a <= 9999) {
        if (a >= 1000) {
            temp = a / 1000;
        } else {
            temp = a / 100;
        }
        if (temp % 2 == 0)
            printf("EVEN\n");
        else
            printf("ODD\n");
    }

    return 0;
}
