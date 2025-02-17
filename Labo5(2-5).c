#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#define MAX 100
#define TAILLE 40

int test_remplir_aleatoire(void);
void remplir_aleatoire(int tableau[], int nb_elements);
int compter_occurences(int tableau[], int nb_elts, int elt_a_trouver);
int test_compter_occurences(void);
int copier_tableau(int tab_source[], int nb_elts_source, int tab_dest[], int max_elts_dest);

int test_all();

int nb_aleatoire(int min, int max)
{
    return min + (int)(rand() / (RAND_MAX + 0.001) * (max - min + 1));
}

void remplir_aleatoire(int tableau[], int nb_elements) {
    for (int i=0;i<nb_elements;i++) {
        tableau[i]=nb_aleatoire(0, MAX);
    }
}
int test_remplir_aleatoire(void) {
    int tab_test[TAILLE]= {0};
    int copie;

    //Remplir le tableau de -1 pour ensuite voir si les valeurs vont changer//
    for (int i=0; i<TAILLE; i++) {
        tab_test[i]=-1;
    }
    remplir_aleatoire(tab_test, TAILLE);

    for (int i=0; i<TAILLE; i++) {
        if (tab_test[i]==-1) {
            printf("*** ERREUR: le tableau n'a pas ete integralement remplit de nouvelles valeurs.");
            return 0;
        }
    }
    //Test avec une taille de tableau nulle//
    copie=tab_test[0];
    remplir_aleatoire(tab_test, 0);
    if (tab_test[0]!=copie) {
        printf("*** ERREUR: Le tableau est rempli avec une taille nulle.");
        return 0;
    }
    return 1;
}

int compter_occurences(int tableau[], int nb_elts, int elt_a_trouver) {
    int compteur_occurences=0;
    for (int i=0;i<nb_elts;i++) {
        if(tableau[i]==elt_a_trouver) {
            compteur_occurences++;
        }
    }
    return compteur_occurences;
}
int test_compter_occurences(void) {
    int tab_test[5]={1,2,3,4,3};
    int occurences;

    printf("*** TEST: compter_occurences\n");

    occurences=compter_occurences(tab_test, 5, 3);

    if (occurences!=2) {
        printf("*** ERREUR: Erreur de calcul du nombre d'occurence. Attendu: 2, Obtenu: %d.\n", occurences);
        return 0;
    }
    occurences = compter_occurences(tab_test, 0, 10);
    if (occurences != 0)
    {
        printf("*** ERREUR: Erreur de calcul du nombre d'occurence avec tableau vide.\n");
        return 0;
    }
    occurences = compter_occurences(tab_test, 5, -1);
    if (occurences != 0)
    {
        printf("*** ERREUR: Erreur de calcul du nombre d'occurence avec valeur inexistante.\n");
        return 0;
    }
    return 1;
}

int copier_tableau(int tab_source[], int nb_elts_source, int tab_dest[], int max_elts_dest) {
    if (nb_elts_source > max_elts_dest)
    { //Copie impossible car le tableau de destination est trop petit.
        return 0;
    }

    for (int i=0; i<max_elts_dest;i++) {
        if (i<nb_elts_source) {
            tab_dest[i]=tab_source[i];
        }
        else {
            tab_dest[i]=0;
        }
    }
    return 1;
}

int main(void)
{
    int tab[TAILLE]={0};

    /* On initialise le generateur de nombres aleatoires. */
    srand((unsigned int)time(NULL));
    rand();


    system("pause");
    return EXIT_SUCCESS;
}


