#include <stdio.h>


int compter_chiffre();


int main(void)
{
    int nombre;
    printf("Entrez un nombre: ");
    scanf("%d", &nombre);

    printf("Le nombre de chiffres dans %d est de %d",nombre, compter_chiffre(nombre));

    return 0;
}

compter_chiffre(int nombre) {

    int compteur=0;

    while (nombre>0) {
        nombre/=10;
        compteur++;
    }
    return compteur;
}
