/*Leia um valor inteiro correspondente à idade de uma pessoa em dias e informe-a em anos, meses e dias. Considerando um ano com 365dias e todos os meses com 30*/

int main() {

    int dias, aux;
    
    scanf("%d", &dias);
    
    printf("%d ano(s)\n", dias/365);
    aux = dias%365;
    printf("%d mes(es)\n", aux/30);
    printf("%d dia(s)\n", aux%30);
    
    return 0;
}