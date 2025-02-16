#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
#include <stdio.h>
#include <time.h>


int nb_aleatoire(int min, int max)
{
	return min + (int)(rand() / (RAND_MAX + 0.001) * (max - min + 1));
}



int main(void)
{
	int nombre_aleatoire;  /* Re�oit un nombre al�atoire. */
	int compteur=1;
	/* On initialise le g�n�rateur de nombres al�atoires. */
	srand((unsigned int)time(NULL));
	rand();

while (compteur <6) {
	nombre_aleatoire = nb_aleatoire(1, 6);
	printf("Le de #%d affiche %d\n",compteur, nombre_aleatoire);
	compteur++;
}

	system("pause");
	return EXIT_SUCCESS;
}












