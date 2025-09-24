#include <stdio.h>
int main() {
    int a, b;
    int resultat = 0;
    
    printf("Entrez a : ");
    scanf("%d", &a);
    printf("Entrez b : ");
    scanf("%d", &b);
    
    // Multiplication avec +1
    for (int i = 0; i < b; i++) {
        for (int j = 0; j < a; j++) {
            resultat = resultat + 1;
        }
    }
    
    printf("%d * %d = %d\n", a, b, resultat);
    
    return 0;
}
