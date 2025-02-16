#include <stdio.h>


int min_max_saisie(int *min, int *max, int nombre);

int main(void)
{
    int nombre;
    printf("Combien de nombres voulez-vous saisir?: \n");
    scanf("%d", &nombre);

    int min;
    int max;
    min_max_saisie(&min, &max, nombre);
    printf("Min: %d\n", min);
    printf("Max: %d\n", max);
    return 0;
}

int min_max_saisie(int *min, int *max, int n) {

    int val=0;
    *min=*max=val;
    int compteur=1;
    for(int i=0; i<n; i++) {
        printf("Valeur %d :\n", compteur);
        scanf("%d", &val);
        compteur++;
        if (val < *min) {
            *min = val;
        }
        if (val > *max) {
            *max = val;
        }
    }
}