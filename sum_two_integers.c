#include <stdio.h>

int main() {
    // Déclaration des variables a, b, et somme 
    int a, b, somme;
   // Demande à l'utilisateur de saisir 2 entiers
    scanf("%d %d", &a, &b);
    // Calcul de la somme entre a et b
    somme = a + b;
    // Affiche la somme 
    printf("La somme est : %d\n", somme);

    return 0;
}