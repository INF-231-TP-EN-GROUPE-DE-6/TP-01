#include <stdio.h>

int main() {
    int tab[] = {5, 3, 8, 1, 9, 2, 7};
    int taille = 7;
    int element;
    
    printf("Entrez l'élément à rechercher : ");
    scanf("%d", &element);
    int trouve = -1;
    
    // Recherche séquentielle
    for (int i = 0; i < taille; i++) {
        if (tab[i] == element) {
            trouve = i;
            break;
        }
    }
    
    // Affichage du résultat
    if (trouve != -1) {
        printf("Element %d trouvé à la position %d\n", element, trouve);
    } else {
        printf("Element %d non trouvé\n", element);
    }
    
    return 0;
}