#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>


int main(void)
{
    int m;
    int n;
    int i;
    int produit=1;
    printf("Minimum: \n");
    scanf("%d", &m);
    printf("Maximum: \n");
    scanf("%d", &n);
    i=m;
    while( i<=n) {
        produit*=i;
        i++;
    }
    printf("Le produit est: %d\n", produit);
    return 0;
    system("pause");
    return EXIT_SUCCESS;
}
