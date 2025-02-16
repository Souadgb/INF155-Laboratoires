#include <stdio.h>

int main(void)
{
    int entier;
    printf("Entier entre 1 et 100: \n");
    scanf("%d", &entier);
    if (entier>100 || entier<1) {
        printf("Saisir un nombre valide.\n");
    } else {
        printf("Le nombre est bien dans l'intervalle\n");
    }
    return 0;
}
