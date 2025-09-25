#include <stdio.h>

int main() {
    int tab[10];
    int taille;
    
    // Saisie de la taille
    printf("Combien d'éléments ? ");
    scanf("%d", &taille);
    
    // Saisie des éléments
    printf("Entrez les éléments (déjà triés) :\n");
    for (int i = 0; i < taille; i++) {
        printf("Élément %d : ", i + 1);
        scanf("%d", &tab[i]);
    }
    
    // Calcul de la médiane
    float mediane;
    if (taille % 2 == 1) {
        // Nombre impair
        mediane = tab[taille / 2];
    } else {
        // Nombre pair
        mediane = (tab[taille / 2 - 1] + tab[taille / 2]) / 2.0;
    }
    
    printf("Médiane: %.1f\n", mediane);
    
    return 0;
}