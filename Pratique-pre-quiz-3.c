#include <stdio.h>


double integrale(double a, double b, int n);
double fonction(double x) {
    return x*x;
}

int main(void)
{
    int n=100000;
    double a;
    double b;

    printf("Entrez a: \n");
    scanf("%lf", &a);
    printf("Entrez b: \n");
    scanf("%lf", &b);

    double resultat=integrale(a,b,n);
    printf("L'aire approximative est de: %lf",resultat);
    return 0;
}

double integrale(double a, double b, int n) {
    double somme=0;
    double largeur= (b-a)/n;

    for (int i=0; i<n; i++) {
        double aire=a+i*largeur;
        somme+=fonction(aire)*largeur;
    }
    return somme;
}
