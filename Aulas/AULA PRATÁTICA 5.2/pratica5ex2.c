#include <stdio.h>

int fibonacci(int n) {
    if(n < 1 || n > 30)
        return -1;
    if(!(n > 2))
        return 1;
        
    int fib[n];
    fib[0] = 1;
    fib[1] = 1;

    for(int i = 2; i < n; i++)
        fib[i] = fib[i-1] + fib[i-2];

    return fib[n-1];
}