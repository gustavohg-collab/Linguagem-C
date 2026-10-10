#include <stdio.h>
int main(){
    int altura, base, perimetro;
    
    printf("Digite a altura: ");
    scanf("%d", &altura);

    printf("Digite a base: ");
    scanf("%d", &base);

    perimetro = 2 * (altura + base);

    printf("O perimetro e %d", perimetro);

    return 0;
}