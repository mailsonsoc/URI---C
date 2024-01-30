#include <stdio.h>
#include <math.h>

int main()
{
    float valor;
    float resto100n, resto50n, resto20n, resto10n, resto5n;
    float resto1m, resto50c, resto25c, resto10c, resto5c, resto1c;
    
    scanf("%f", &valor);

    printf("NOTAS:\n");
    printf("%.0f nota(s) de R$ 100.00\n", floor(valor / 100));
    resto100n = fmod(valor, 100.00);
    printf("%.0f nota(s) de R$ 50.00\n", floor(resto100n / 50));
    resto50n = fmod(resto100n, 50.00);
    printf("%.0f nota(s) de R$ 20.00\n", floor(resto50n / 20));
    resto20n = fmod(resto50n, 20.00);
    printf("%.0f nota(s) de R$ 10.00\n", floor(resto20n / 10));
    resto10n = fmod(resto20n, 10.00);
    printf("%.0f nota(s) de R$ 5.00\n", floor(resto10n / 5));
    resto5n = fmod(resto10n, 5.00);
    printf("%.0f nota(s) de R$ 2.00\n", floor(resto5n / 2));
    printf("MOEDAS:\n");
    resto1m = fmod(resto5n, 2.00);
    printf("%.0f moeda(s) de R$ 1.00\n", floor(resto1m / 1));
    resto50c = fmod(resto1m, 1.00);
    printf("%.0f moeda(s) de R$ 0.50\n", floor(resto50c / 0.50));
    resto25c = fmod(resto50c, 0.50);
    printf("%.0f moeda(s) de R$ 0.25\n", floor(resto25c / 0.25));
    resto10c = fmod(resto25c, 0.25);
    printf("%.0f moeda(s) de R$ 0.10\n", floor(resto10c / 0.10));
    resto5c = fmod(resto10c, 0.10);
    printf("%.0f moeda(s) de R$ 0.05\n", floor(resto5c / 0.05));
    resto1c = fmod(resto5c, 0.05);
    printf("%.0f moeda(s) de R$ 0.01\n", (resto1c / 0.01));


    return 0;
}
