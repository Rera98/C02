#include <stdio.h>

int main() {
    int n, i;
    int factoriel = 1;

    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        factoriel = factoriel * i;
    }

    printf("Le factoriel de %d est : %d\n", n, factoriel);

    return 0;
}