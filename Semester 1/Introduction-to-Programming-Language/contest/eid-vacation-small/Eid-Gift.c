#include<stdio.h>

int main() {

    int n, m;
    scanf("%d %d", &n, &m);

    if (m >= 1 && m <= 1000) {
        printf("%d %d\n", n/m, n%m);
    }

    return 0;
}



