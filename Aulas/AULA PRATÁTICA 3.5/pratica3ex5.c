#include <stdio.h>
#include <limits.h>

int main() {
    signed long long x = LLONG_MIN;
    unsigned long long y = ULLONG_MAX;

    printf("menor: %lld\nmaior: %llu\n", x, y);

    return 0;
}