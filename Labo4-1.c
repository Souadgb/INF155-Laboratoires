#include <stdio.h>

int main(void)
{
    int var_entiere;
    double var_reelle;

    printf("L'adresse de la variable entiere est %p et sa taille est de %zu\n",&var_entiere, sizeof(var_entiere));
    printf("L'adresse de la variable reelle est %p et sa taille est de %zu\n",&var_reelle, sizeof(var_reelle));

}
