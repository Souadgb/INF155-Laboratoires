#include <stdio.h>

int afficher_adresse(int var_entiere) {
    printf("%p\n", &var_entiere);

}

int main(void)
{
    int ma_var=100;
    printf("%p\n", &ma_var);
    afficher_adresse(ma_var);
    return 0;
}
