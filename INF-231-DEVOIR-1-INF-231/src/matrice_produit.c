#include <stdio.h>

int main() {
    int a[2][2], b[2][2], c[2][2];
    
    // Saisie première matrice
    printf("Entrez les éléments de la première matrice (2x2) :\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &a[i][j]);
        }
    }
    
    // Saisie deuxième matrice
    printf("\nEntrez les éléments de la deuxième matrice (2x2) :\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("b[%d][%d] = ", i, j);
            scanf("%d", &b[i][j]);
        }
    }
    
    // Produit des matrices
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            c[i][j] = 0;
            for (int k = 0; k < 2; k++) {
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }
    
    // Affichage du résultat
    printf("\nProduit des matrices :\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}