#include <stdio.h>

int main() {
    int tab[] = {1, 4, 5, 7, 9};
    int taille = 5;
    int trie = 1;

    for (int i = 0; i < taille - 1; i++) {
        if (tab[i] > tab[i + 1]) {
            trie = 0;
            break;
        }
    }
    
    if (trie) {
        printf("Le tableau est trié\n");
    } else {
        printf("Le tableau n'est pas trié\n");
    }
    
    return 0;
}