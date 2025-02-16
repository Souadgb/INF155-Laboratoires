#include <stdio.h>

int main(void)
{
    int entier;
    printf("Nombre entier: \n");
    scanf("%d", &entier);
    int compteur=0;
    while(entier>0) {
        entier/=10;
        compteur++;
    }
    printf("Ce nombre contient %d chiffres", compteur);
    return 0;
}
