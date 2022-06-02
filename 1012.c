/*Escreva um programa que leia três valores com ponto flutuante de dupla precisão: A, B e C. Em seguida, calcule e mostre:
a) a área do triângulo retângulo que tem A por base e C por altura.
b) a área do círculo de raio C. (pi = 3.14159)
c) a área do trapézio que tem A e B por bases e C por altura.
d) a área do quadrado que tem lado B.
e) a área do retângulo que tem lados A e B.*/

#include <stdio.h>

int main()
{
    double a, b, c;

    scanf("%lf%lf%lf",&a,&b,&c);
    
    printf("TRIANGULO: %.3f\n", (a*c)/2);
    printf("CIRCULO: %.3f\n", 3.14159*(c*c));
    printf("TRAPEZIO: %.3f\n", (a+b)*c/2);
    printf("QUADRADO: %.3f\n", b*b);
    printf("RETANGULO: %.3f\n", a*b);

    return 0;
}
