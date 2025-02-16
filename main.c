#include <stdio.h>


int afficher_chiffre(int nombre, int position);


int main(void)
{
    int nombre;
    int position;
    printf("Entrez un nombre:\n");
    scanf("%d", &nombre);
    printf("Entrez une position:\n");
    scanf("%d",&position);
    int resultat=afficher_chiffre(nombre,position);

    printf("Le chiffre a la position %d est de %d\n", position, resultat);

    return 0;
}

afficher_chiffre(int nombre, int position) {

    int i;
    for (i=1; i<position; i++) {
        nombre/=10;
    }
    return nombre %10;
}
