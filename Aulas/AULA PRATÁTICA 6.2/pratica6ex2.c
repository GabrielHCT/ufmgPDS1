#include <stdio.h>
#include <string.h>

void concatena(char *a, int n1, char *b, int n2, char *s) {
    strcpy(s, a);
    strcat(s, b);
}