/*Faça um programa que leia três valores e apresente o maior dos três valores lidos seguido da mensagem “eh o maior”. Utilize a fórmula:
Obs.: a fórmula apenas calcula o maior entre os dois primeiros (a e b). Um segundo passo, portanto é necessário para chegar no resultado esperado.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, c, maior;
    
    scanf("%d%d%d",&a,&b,&c);
    
    maior = (a + b + abs(a-b))/2;
    
    if(maior > c){
        maior = maior;
    }
    
    if(maior < c){
        maior = c;
    }
    
    printf("%d eh o maior\n", maior);

    return 0;
}
