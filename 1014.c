/*Calcule o consumo médio de um automóvel sendo fornecidos a distância total percorrida (em Km) e o total de combustível gasto (em litros).*/

#include <stdio.h>

int main()
{
    int x;
    double y;
    
    scanf("%d",&x);
    scanf("%lf",&y);
    
    printf("%.3f km/l\n", x/y);

    return 0;
}