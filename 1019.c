/*Leia um valor inteiro, que é o tempo de duração em segundos de um determinado evento em uma fábrica, 
e informe-o expresso no formato horas:minutos:segundos.*/

#include <stdio.h>

int main() {

    int tempo, hr, min, seg;
    
    scanf("%d",&tempo);
    
    //3600 = horas x segundos
    hr = (tempo/3600);
    min = (tempo -(3600*hr))/60;
    seg = tempo%60;
    
    printf("%d:%d:%d\n", hr, min, seg);
    
    return 0;
}