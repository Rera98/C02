#include <stdio.h>

int main() {
    // Déclaration des variables a et b
    int a, b;
   // Demande à l'utilisateur de saisir 2 entiers
    scanf("%d %d", &a, &b);

    // Échange sans variable temporaire
    a = a + b;
    b = a - b;
    a = a - b;
   // Affiche a et b après l'échange
    printf("Après échange : a = %d, b = %d\n", a, b);

    return 0;
}