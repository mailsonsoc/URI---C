#include <stdio.h>
/*A fórmula para calcular a área de uma circunferência é: area = π . raio2. Considerando para este problema que π = 3.14159:

- Efetue o cálculo da área, elevando o valor de raio ao quadrado e multiplicando por π.*/

int main() {
 
    double n=3.14159, raio, area;

    scanf("%lf", &raio);
    area = n*(raio*raio);

    printf("A=%.4lf\n", area);

    return 0;
}