#include <stdio.h>

//une fonction qui calcule la somme des chiffres d'un nombre.
int combien_chiffre(int nombre);


int main(void)
{
    int nombre;

    printf("Entrez un nombre:\n");
    scanf("%d", &nombre);
    int resultat=combien_chiffre(nombre);

    printf("La somme des chiffres du nombre %d est de %d\n", nombre, resultat);
    return 0;
}
combien_chiffre(int nombre) {

    int i;
    int compteur;
    while (nombre>0) {
        nombre/=10;
        compteur++;
    }

    for (i=1; i<compteur; i++) {
        nombre/=10;
    }
    return ;
}
