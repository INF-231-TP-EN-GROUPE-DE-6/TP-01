#include <stdio.h>

int main() {
    int tab[] = {2, 4, 6, 8, 10};
    int taille = 5;
    
    // Affichage du tableau original
    printf("Tableau original : ");
    for (int i = 0; i < taille; i++) {
        printf("%d ", tab[i]);
    }
    printf("\n");
    
    // Inversion du tableau
    for (int i = 0; i < taille / 2; i++) {
        int temp = tab[i];
        tab[i] = tab[taille - 1 - i];
        tab[taille - 1 - i] = temp;
    }
    
    // Affichage du tableau inverse
    printf("Tableau inversé : ");
    for (int i = 0; i < taille; i++) {
        printf("%d ", tab[i]);
    }
    printf("\n");
    
    return 0;
}