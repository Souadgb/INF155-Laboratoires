#include <stdio.h>

double celcius_farenheit(double celcius) {
    return celcius*1.8+32;
}
int main(void)
{
    double t_celcius;
    double t_farenheit;
    printf("La temperature en celcius: ");
    scanf("%lf", &t_celcius);
    t_farenheit=celcius_farenheit(t_celcius);
    printf("La temperature en farenheit: %.2lf\n", t_farenheit);
    return 0;
}
