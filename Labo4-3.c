#include <stdio.h>

int main(void)
{
    int valeur_saisie=90;
    int *valeur_entiere=&valeur_saisie;
    printf("%d",(*valeur_entiere)*2);
}
