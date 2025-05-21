#include <stdio.h>

int main() {
    // Déclaration de la variable n
    int n;
    // Demande à l'utilisateur de saisir un entier
    scanf("%d", &n);
    // Vérifie si le modulo de n et 2 est égal à 0
    if (n % 2 == 0) {
        // Affiche que n est pair
        printf("%d est pair.\n", n);
    } else {
        // Affiche que n est impair
        printf("%d est impair.\n", n);
    }

    return 0;
}