# Projet INF 231_EC2 — Structures de Données II

Responsable : PR MELATAGIA Paulin  
Groupe de TP : Programmation en C  
Domaine : Algorithmes et Structures de Données

## Description
Ce projet implémente une série d'algorithmes fondamentaux en langage C, couvrant les domaines des structures de données, de l'algèbre linéaire et de l'analyse algorithmique. Ces exercices sont destinés à renforcer la compréhension des concepts clés du cours INF 231_EC2.

## Fonctionnalités

- **Somme de matrices**: Addition élément par élément
- **Produit de matrices**: Multiplication matricielle classique
- **Recherche séquentielle**: Parcours linéaire avec comptage d'occurrences
- **Multiplication récursive**: Approche pédagogique
- **Détection de tri**: Vérification d'ordre croissant/décroissant
- **Calcul de médiane**: Valeur centrale avec gestion pair/impair
- **Inversion de tableau**: Algorithmes en place et avec copie
- **Produit vectoriel (3D)**: Calcul spécifique aux vecteurs 3D
- **Produit vecteur × matrice**: Combinaison linéaire

## Structure du projet
```
projet-structures-donnees/
│
├── src/
│   ├── matrice_somme.c                 # Somme de matrices
│   ├── matrice_produit.c               # Produit de matrices
│   ├── recherche.c                     # Recherche séquentielle
│   ├── axb.c                           # Multiplication récursive
│   ├── test_trie.c                     # Détection de tri
│   ├── mediane.c                       # Calcul de médiane
│   ├── inverse_tab.c                   # Inversion de tableau
│   ├── Produit Vectoriel.c             # Produit vectoriel (3D)
│   └── Produit vecteur x matrice.c     # Produit vecteur x matrice
│
└── README.md                           # Ce fichier

```
- **Somme de matrices (matrice_somme.c)**
  - Le programme lit au clavier deux matrices 2×2 entières via `scanf`. Il parcourt les 4 positions avec deux boucles imbriquées (lignes puis colonnes) et calcule `c[i][j] = a[i][j] + b[i][j]`. Enfin, il affiche la matrice résultat `c` ligne par ligne. Aucune vérification de dimensions n'est nécessaire ici car le format 2×2 est fixé.

- **Produit de matrices (matrice_produit.c)**
  - Le programme lit deux matrices 2×2. Pour chaque case `c[i][j]`, il initialise `c[i][j]` à 0 puis effectue une accumulation sur l'indice `k` avec la formule classique du produit matriciel: `c[i][j] += a[i][k] * b[k][j]`. Trois boucles imbriquées parcourent les indices `i`, `j`, `k`. Le résultat est affiché à la fin.

- **Recherche séquentielle (recherche.c)**
  - Un tableau fixe de 7 entiers est défini en dur. L'utilisateur saisit la valeur à rechercher. Le programme parcourt linéairement le tableau de gauche à droite; à la première égalité `tab[i] == element`, il mémorise l'indice et s'arrête (`break`). Il affiche soit la position trouvée (indexé à partir de 0), soit un message d'absence.

- **Multiplication récursive (axb.c) — implémentation itérative**
  - Le fichier simule la multiplication `a × b` par additions répétées. Après lecture de `a` et `b` (positifs), deux boucles imbriquées exécutent `a*b` incréments de `resultat` (on ajoute 1, `a` fois à l'intérieur, répété `b` fois à l'extérieur), ce qui revient à compter jusqu'à `a*b`. Le programme affiche ensuite le produit. Il s'agit d'une approche pédagogique, non récursive dans ce code précis.

- **Détection de tri (test_trie.c)**
  - Un tableau d'exemple (déjà trié) est parcouru une seule fois. On vérifie que chaque élément est inférieur ou égal au suivant (`tab[i] <= tab[i+1]`). En cas de violation, un drapeau `trie` passe à 0 et la boucle s'arrête. Un message final indique si le tableau est trié en ordre croissant. Le test du décroissant n'est pas implémenté ici.

- **Calcul de médiane (mediane.c)**
  - Le programme demande la taille puis lit les éléments « déjà triés ». Si la taille est impaire, la médiane est l'élément du milieu. Si elle est paire, la médiane est la moyenne des deux éléments centraux, calculée en flottant (`/ 2.0`). Il n'y a pas d'opération de tri dans ce code: l'ordre croissant des entrées est supposé.

- **Inversion de tableau (inverse_tab.c)**
  - À partir d'un tableau initial, le programme échange en place les éléments symétriques par rapport au centre: `tab[i]` et `tab[n-1-i]` pour `i` allant jusqu'à `n/2 - 1`. On obtient ainsi le tableau renversé, qui est ensuite affiché.

- **Produit vectoriel (3D) (Produit Vectoriel.c)**
  - Après saisie des deux vecteurs entiers `a` et `b` de dimension 3, le programme calcule `c = a × b` par la formule déterminantielle: `c[0] = a[1]*b[2] - a[2]*b[1]`, `c[1] = a[2]*b[0] - a[0]*b[2]`, `c[2] = a[0]*b[1] - a[1]*b[0]`. Les vecteurs d'entrée et le résultat sont affichés.

- **Produit vecteur × matrice (Produit vecteur x matrice.c)**
  - Le code définit un vecteur de taille 3 et une matrice 3×4, puis calcule le produit (vecteur ligne) × (matrice) pour obtenir un vecteur résultat de taille 4. Conceptuellement, pour chaque colonne `j`, on effectue la somme `resultat[j] = Σ_k vecteur[k] * matrice[k][j]`. Le fichier fait appel à des fonctions utilitaires d'affichage et à un macro `MAX` (non montrés ici), mais l'algorithme est le produit linéaire de chaque colonne par le vecteur.

## Installation et compilation

### Prérequis
- **Compilateur C**: gcc recommandé
- **Make**: optionnel

### Compilation manuelle
```sh
gcc -o projet src/*.c -Iinclude -Wall -Wextra -std=c99
```

### Compilation avec Makefile
```sh
make all     # Compile le projet
make clean   # Nettoie les fichiers objets
make run     # Compile et exécute
```

## Informations
- **Auteur**: Étudiant(e)s en INF L2
- **Cours**: INF 231_EC2
- **Année**: 2025
- **Responsable**: PR MELATAGIA Paulin