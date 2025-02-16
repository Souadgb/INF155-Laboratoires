#include <stdio.h>



int permuter(int *entier1, int *entier2) {
    int temp;
    temp=*entier2;
    *entier2=*entier1;
    *entier1=temp;
}


int main(void)
{
    int entier11=11;
    int entier22=22;
    permuter(&entier11, &entier22);
    printf("Nouvel entier1 : %d\n", entier11);
    printf("Nouvel entier2: %d\n", entier22);

    return 0;
}
