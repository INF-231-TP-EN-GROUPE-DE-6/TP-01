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
