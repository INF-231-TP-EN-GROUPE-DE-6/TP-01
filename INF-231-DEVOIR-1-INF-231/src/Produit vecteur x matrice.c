#include <stdio.h>

int main() {
    int vecteur[] = {1, 2, 3};
    int matrice[3][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };
    int resultat[4] = {0, 0, 0, 0};
    
    // Calcul du produit vecteur × matrice
    for (int j = 0; j < 4; j++) {
        for (int i = 0; i < 3; i++) {
            resultat[j] += vecteur[i] * matrice[i][j];
        }
    }
    
    // Affichage
    printf("Résultat: ");
    for (int i = 0; i < 4; i++) {
        printf("%d ", resultat[i]);
    }
    printf("\n");
    
    return 0;
}