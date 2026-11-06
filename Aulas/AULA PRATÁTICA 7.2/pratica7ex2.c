#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    int vetor[N];

    for(int i = 0; i < N; i++)
        scanf("%d", &vetor[i]);

    for(int i = N-1; i >= 0; i--)
        printf("%d ", vetor[i]);
}