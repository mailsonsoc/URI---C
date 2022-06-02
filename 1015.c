/*eia os quatro valores correspondentes aos eixos x e y de dois pontos quaisquer no plano, p1(x1,y1) e p2(x2,y2) 
e calcule a distância entre eles, mostrando 4 casas decimais após a vírgula, segundo a fórmula:*/

#include <stdio.h>
#include <math.h>

int main()
{
    float a, b, c, d;
    
    scanf("%f%f",&a,&b);
    scanf("%f%f",&c,&d);
    
    printf("%.4f\n", sqrt(((c-a)*(c-a))+((d-b)*(d-b))));
    
    return 0;
}