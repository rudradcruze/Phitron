#include<stdio.h>

int main() {

    int n, number, single;
    scanf("%d", &n);

    if (n >= 1000 && n <= 9999) {
        for(int i=0; i<4; i++) {
            single = n % 10;
            n = n / 10;
            printf("%d", single);
        }
        printf("\n", single);
    }

    return 0;
}




