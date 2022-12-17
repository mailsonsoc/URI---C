/*Leia um valor inteiro. A seguir, calcule o menor número de notas possíveis (cédulas) no qual o valor pode ser decomposto.
As notas consideradas são de 100, 50, 20, 10, 5, 2 e 1. A seguir mostre o valor lido e a relação de notas necessárias.*/

#include <stdio.h>

int main()
{

    int valor, aux;

    scanf("%d", &valor);

    printf("%d\n", valor);
    printf("%d nota(s) de R$ 100,00\n", valor / 100);
    aux = (valor % 100);

    printf("%d nota(s) de R$ 50,00\n", aux / 50);
    aux = (aux % 50);

    printf("%d nota(s) de R$ 20,00\n", aux / 20);
    aux = (aux % 20);

    printf("%d nota(s) de R$ 10,00\n", aux / 10);
    aux = (aux % 10);

    printf("%d nota(s) de R$ 5,00\n", aux / 5);
    aux = (aux % 5);

    printf("%d nota(s) de R$ 2,00\n", aux / 2);
    aux = (aux % 2);

    printf("%d nota(s) de R$ 1,00\n", aux / 1);
    return 0;
}