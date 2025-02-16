#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/*
 * FONCTION: nb_aleatoire
 * Cette fonction retourne une valeur al�atoire dans l'intervalle entier
   [min, max]. Chaque valeur poss�de la m�me probabilit� d'�tre g�n�r�e.

        - min : La plus petite valeur pouvant �tre g�n�r�e (type : int).
        - max : La plus grande valeur pouvant �tre g�n�r�e (type : int).

    VALEUR DE RETOUR : Une valeur se trouvant dans l'intervalle
                       [min, max]  (type : int).
 */

int nb_aleatoire(int min, int max)
{
    return min + (int)(rand() / (RAND_MAX + 0.001) * (max - min + 1));
}

int main(void) {
    int nombre_aleatoire;  /* Re�oit un nombre al�atoire. */
    int compteur=0;
    double moyenne;
    float total_lance=0;
    /* On initialise le g�n�rateur de nombres al�atoires. */
    srand((unsigned int)time(NULL));
    rand();

    while (compteur <1000000) {
        nombre_aleatoire = nb_aleatoire(1, 6);
        total_lance+=nombre_aleatoire;
        compteur++;
    }

    moyenne= total_lance/1000000;
    printf("La moyenne des lances est de %.4lf\n",moyenne);
    system("pause");
    return EXIT_SUCCESS;
}












