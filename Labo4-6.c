#include <stdio.h>


int division_entiere(int numerateur, int diviseur, int *reste);


int main(void)
{
    int num;
    int denum;
    int reste;
    int quotient;
    printf("Numerateur: \n");
    scanf("%d", &num);
    printf("Diviseur: \n");
    scanf("%d", &denum);

    quotient=division_entiere(num, denum, &reste);
    printf("La division donne %d reste %d", quotient, reste);

    return 0;
}

int division_entiere(int numerateur, int diviseur, int *reste) {
    int quotient;
    *reste= numerateur % diviseur;
    quotient= numerateur / diviseur;
    return quotient;
}
