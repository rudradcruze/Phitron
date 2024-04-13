#include<stdio.h>

int main() {

    int a, b;
    scanf("%d %d", &a, &b);
    if (a >= 1 && b >= 1) {
        if (a % b == 0 || b % a == 0)
            printf("Multiples\n");
        else
            printf("No Multiples\n");
    }

    return 0;
}
