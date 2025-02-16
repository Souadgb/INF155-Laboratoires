#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#define MAX 100
#define TAILLE 40


int nb_aleatoire(int min, int max)
{
    return min + (int)(rand() / (RAND_MAX + 0.001) * (max - min + 1));
}

int main(void)
{
    int tableau[TAILLE]={0};

    /* On initialise le generateur de nombres aleatoires. */
    srand((unsigned int)time(NULL));
    rand();
    
    for (int i=0;i<TAILLE;i++) {
        tableau[i]=nb_aleatoire(0, MAX);
        printf("Nombre : %d\n", tableau[i]);
    }

    system("pause");
    return EXIT_SUCCESS;
}
