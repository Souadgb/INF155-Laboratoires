#include <stdio.h>

int main(void)
{
    int entier;
    int diviseur=1;
    printf("Entier positif: \n");
    scanf("%d", &entier);
    while(diviseur< entier) {
        diviseur++;
        if (entier % diviseur ==0) {
            printf("%d\n" ,diviseur);
        }
    }
    return 0;
}
