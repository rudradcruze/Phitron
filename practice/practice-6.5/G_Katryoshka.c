/*
    * Title: Problem G
    * This program is about: Katryoshka
    Author: Francis Rudra D Cruze
    Author Email: francisrudra@gmail.com
*/
#include <stdio.h>

int main()
{
    long long eye, mouth, body, count = 0;
    scanf("%lld %lld %lld", &eye, &mouth, &body);

    long long min = eye;
    if (mouth < min)
    {
        min = mouth;
    }
    if (body < min)
    {
        min = body;
    }

    count += min;
    eye -= min;
    mouth -= min;
    body -= min;

    min = eye / 2 > body ? body : eye / 2;
    count += min;

    printf("%lld\n", count);

    return 0;
}