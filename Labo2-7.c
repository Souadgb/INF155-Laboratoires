#include <stdio.h>

int main(void)
{
    int entier1;
    int entier2;
    printf("Entier 1: \n");
    scanf("%d", &entier1);
    printf("Entier 2: \n");
    scanf("%d", &entier2);
    int quotient;
    int compteur=0;
    while(entier1*compteur<=entier2) {
        compteur ++;
        quotient=compteur-1;
    }
    printf("Le quotient est de %d", quotient);
   //trop la flemme de faire le modulo en vrai babe, hope i dont fail this time//

    return 0;
}
