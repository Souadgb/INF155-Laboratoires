#include <stdio.h>
#define TAILLE_MAX 100
int somme_elements(int tab[][TAILLE_MAX], int nb_lignes, int nb_colonnes);
int somme_diagonale(int tab[][TAILLE_MAX], int taille_matrice);
void additionner_matrices(double mat1[][TAILLE_MAX], double mat2[][TAILLE_MAX], double resultat[][TAILLE_MAX], int nb_lignes, int nb_colonnes);
void calculer_transposee(double mat[][TAILLE_MAX], double transposee[][TAILLE_MAX], int nb_lignes, int nb_colonnes);


int main(void)
{
    //Reste a implementer les fonctions dans le main//
    printf("Hello, World!\n");
    return 0;
}

int somme_elements(int tab[][TAILLE_MAX], int nb_lignes, int nb_colonnes) {
    int i;
    int j;
    int somme=0;

    for (i=0;i<nb_lignes; i++) {
        for (j=0; j<nb_colonnes;j++) {
            somme+=tab[i][j];
        }
    }
    return somme;
}
int somme_diagonale(int tab[][TAILLE_MAX], int taille_matrice) {
    int i;
    int somme_diag=0;
    for (i=0; i<taille_matrice;i++) {
       somme_diag+=tab[i][i];
    }
    return somme_diag;
}
void additionner_matrices(double mat1[][TAILLE_MAX], double mat2[][TAILLE_MAX], double resultat[][TAILLE_MAX], int nb_lignes, int nb_colonnes) {
    int i;
    int j;
    int somme=0;
    for(i=0;i<nb_lignes;i++) {
        for(j=0;j<nb_colonnes;j++){}
       resultat[i][j] =mat1[i][j]+mat2[i][j];
    }
}

int test_egales(double tab1[][TAILLE_MAX],double tab2[][TAILLE_MAX], int nb_lignes, int nb_colonnes) {
    int i;
    int j;
    for(i=0;i<nb_lignes;i++) {
        for(j=0;j<nb_colonnes;j++) {
            if(tab1[i][j] != tab2[i][j]) {
                return 0;
            }
        }
    }
    return 1;
}

void calculer_transposee(double mat[][TAILLE_MAX], double transposee[][TAILLE_MAX], int nb_lignes, int nb_colonnes) {
    int i;
    int j;
    for(i=0;i<nb_lignes;i++) {
        for(j=0;j<nb_colonnes;j++) {
          transposee[j][i]=mat[i][j];
        }
    }
}




