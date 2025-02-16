#include <stdio.h>




double mike_keith(int d, int m, int y);
int main(void)
{
    int le_jour;
    int le_mois;
    int lannee;
    printf("Jour:\n");
    scanf("%d", &le_jour);
    printf("Mois:\n");
    scanf("%d", &le_mois);
    printf("Annee:\n");
    scanf("%d", &lannee);
    int reponse=mike_keith(le_jour, le_mois, lannee);

    switch (reponse) {
        case 0:
            printf("Dimanche");
            break;
        case 1:
            printf("Lundi");
        break;
        case 2:
            printf("Mardi");
        break;
        case 3:
            printf("Mercredi");
        break;
        case 4:
            printf("Jeudi");
        break;
        case 5:
            printf("Vendredi");
        break;
        case 6:
            printf("Samedi");
        break;
    }
    return 0;
}

double mike_keith(int d, int m, int y){
    if(m>=3) {
        int z=y;
        d= ( (23*m)/9 + d + 4 + y + (z/4) - (z/100) + (z/400) - 2 ) %7;
    }
    if (m<3) {
        int z=y-1;
        d= ( (23*m)/9 + d + 4 + y + (z/4) - (z/100) + (z/400)) %7;
    }
    return d;
}
