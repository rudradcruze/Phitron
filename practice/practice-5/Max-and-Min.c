#include<stdio.h>

int main() {

    int a,b,c;
    scanf("%d %d %d", &a, &b, &c);

    int min, max;
    min = 0;
    max = 0;

    if (a > b) {
        if (a > c)
            max = a;
        else
            max = c ;

        if (b < c)
            min = b;
        else
            min = c;
    } else {
        if (b > c)
            max = b;
        else
            max = c;

        if (a < c)
            min = a;
        else
            min = c;
    }

    printf("%d %d\n", min, max);


    return 0;
}
