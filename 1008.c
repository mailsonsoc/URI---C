/*Escreva um programa que leia o número de um funcionário, seu número de horas trabalhadas, 
o valor que recebe por hora e calcula o salário desse funcionário. 
A seguir, mostre o número e o salário do funcionário, com duas casas decimais.*/

#include <stdio.h>

int main(){

    int a, b;
    float c, salario;

    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%f", &c);

    salario = b*c;

    printf("NUMBER = %d\n", a);
    printf("SALARY = U$ %.2f\n", salario);

    return 0;

}