/*Leia 3 valores, no caso, variáveis A, B e C, que são as três notas de um aluno. 
A seguir, calcule a média do aluno, sabendo que a nota A tem peso 2, a nota B tem peso 3 e a nota C tem peso 5. 
Considere que cada nota pode ir de 0 até 10.0, sempre com uma casa decimal.*/

#include <stdio.h>

int main(){

    float A, B, C, media;

    scanf("%f",&A);
    scanf("%f",&B);
    scanf("%f",&C);

    media = (A*2+B*3+C*5)/10;

    printf("MEDIA = %.1f\n", media);

    return 0;

}