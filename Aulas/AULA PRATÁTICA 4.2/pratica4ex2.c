#include <stdio.h>

int main() {
    int v_max, v;
    
    scanf("%d %d", &v_max, &v);

    if(v < v_max || v == v_max)
        printf("Sem Infracao\n");
    else if(v > (v_max * 1.50))
        printf("Infracao Gravissima\n");
    else if(v > (v_max * 1.20))
        printf("Infracao Grave\n");
    else
        printf("Infracao Media\n");

   return 0;
}