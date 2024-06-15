#include<stdio.h>

int main() {
    int n, sum = 0, count = 0;
    scanf("%d", &n);

    if (n > 0) {
        while (sum < n) {
            if ((3 + sum) <= n)
                sum += 3;
            else if ((2 + sum) <= n)
                sum += 2;
            else
                sum += 1;
            count++;
        }
        printf("%d\n", count);
    }

    return 0;
}
