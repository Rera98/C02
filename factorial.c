#include <stdio.h>

int main() {
    // Déclaration des variables n et i
    int n, i;
    // Déclaration et initialisation de la variable factoriel à 1
    int factoriel = 1;
    // Demande à l'utilisateur de saisir un entier
    scanf("%d", &n);
    // calcule le factoriel 
    for (i = 1; i <= n; i++) {
        factoriel = factoriel * i;
    }
    // Affiche le factoreil
    printf("Le factoriel de %d est : %d\n", n, factoriel);

    return 0;
}