#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
#include <stdio.h>
#include <time.h>


int nb_aleatoire(int min, int max)
{
    return min + (int)(rand() / (RAND_MAX + 0.001) * (max - min + 1));
}

int main(void) {
    int compteur=0;
    int valeur=7;
    float occurence=0;

    srand((unsigned int)time(NULL));
    rand();

    while (compteur < 1000000) {
        if (nb_aleatoire (1 , 6) + nb_aleatoire(1,6)== valeur) {
            occurence++;
        }
        compteur++;
    }
    float probabilite= occurence/1000000;
    printf("La probabilite d'obtenir 7 est de %.4f %\n", probabilite*100);

    system("pause");
    return EXIT_SUCCESS;
}
//I DIDNT DO THIS ONE ITS NOT RIGHT THIS IS JUST COPIED CODE FROM #3 I THINK//







