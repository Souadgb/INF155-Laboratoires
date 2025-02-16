#include <stdio.h>


int le_grand(int nombre);
int le_petit(int nombre);
int la_moyenne(int nombre);

int main(void)
{
    int n;
    printf("Entrez un entier : \n");
    scanf("%d", &n);

    int i;
    int chiffre;
    for(i=1; i<=n; i++) {
        printf("Entier %d?: \n", i);
        scanf("%d", &chiffre);
    }
    int moyenne=la_moyenne(n);
    printf("La moyenne est: %d \n",moyenne);
    return 0;
}

la_moyenne(int nombre) {
    int i;
    int somme=0;
    for(i=0; i<nombre; i++) {
      somme+=nombre;
    }
    return somme/nombre;
}
le_grand (int nombre) {
    int grand;
    int petit;
    int moyenne;

    return 0;

}
le_petit(int nombre) {


}
