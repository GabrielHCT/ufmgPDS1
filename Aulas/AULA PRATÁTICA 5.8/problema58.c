#include <stdio.h>

int mdc(int a, int b) {
    int primo = 2, mdc = 1;

    while(1) {
        if(a % primo == 0 && b % primo == 0) {
            a /= primo;
            b /= primo;
            mdc *= primo;
        } else if(a % primo == 0 && a != 1)
            a /= primo;
        else if(b % primo == 0 && b != 1)
            b /= primo;
        else
            primo++;
        
        if(a == 1 && b == 1)
            return mdc;
    }
}