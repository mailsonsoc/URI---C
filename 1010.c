/*Neste problema, deve-se ler o código de uma peça 1, o número de peças 1, o valor unitário de cada peça 1, o código de uma peça 2,
o número de peças 2 e o valor unitário de cada peça 2. Após, calcule e mostre o valor a ser pago.
*/
#include <stdio.h>

int main()
{
    int a, b;
    double c, pagar;
    
    scanf("%d%d%lf",&a,&b,&c);
    
    pagar = b*c;
    
    scanf("%d%d%lf",&a,&b,&c);
    
    pagar+= b*c;
    
    printf("VALOR A PAGAR: R$ %.2f\n", pagar);

    return 0;
}

