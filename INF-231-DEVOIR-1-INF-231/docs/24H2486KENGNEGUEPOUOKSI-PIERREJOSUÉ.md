# Nom: KENGNE GUEPOUOKSI 
# Prénom: PIERRE JOSUÉ 
# Matricule: (24H2486)
```text
    Pour ma part dans le projet INF 231, j'ai travaillé sur deux programmes : 
L'inversion de tableau et le produit vectoriel 3D.
```

## Inversion de tableau (inverse_tab.c)

Ce programe inverse un tableau en place en échangeant les éléments symétriques.

```c
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
```

## Produit vectoriel (3D) (Produit Vectoriel.c)

Ce programme calcule le produit vectoriel de deux vecteurs 3D en utilisant la formule déterminantielle. Pratique pour les maths.

```c
#include <stdio.h>

int main() {
    int a[3], b[3], c[3];
    
    printf("Entrez les composantes du premier vecteur (x, y, z) :\n");
    for (int i = 0; i < 3; i++) {
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }
    
    printf("\nEntrez les composantes du deuxième vecteur (x, y, z) :\n");
    for (int i = 0; i < 3; i++) {
        printf("b[%d] = ", i);
        scanf("%d", &b[i]);
    }
    
    c[0] = a[1] * b[2] - a[2] * b[1]; 
    c[1] = a[2] * b[0] - a[0] * b[2]; 
    c[2] = a[0] * b[1] - a[1] * b[0]; 
    
    printf("\nVecteur a : (%d, %d, %d)\n", a[0], a[1], a[2]);
    printf("Vecteur b : (%d, %d, %d)\n", b[0], b[1], b[2]);
    printf("a × b = (%d, %d, %d)\n", c[0], c[1], c[2]);
    
    return 0;
}
```