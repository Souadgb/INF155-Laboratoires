#include <stdio.h>


int lire_entier(int *entier);

int main(void)
{
    int adresse=lire_entier()
    return 0;
}

int lire_entier(int *entier) {
    int chiffre;
    printf("Saisissez une valeur: \n");
    scanf("%d", &chiffre);
    int *entier=&chiffre;
    return *entier;
}
