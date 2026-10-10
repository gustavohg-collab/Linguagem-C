#include <stdio.h>
int main(){
    int altura, base, area;
    
    printf("Digite a altura: ");
    scanf("%d", &altura);

    printf("Digite a base: ");
    scanf("%d", &base);

    area = altura * base;

    printf("A area do retangulo e %d", area);

    return 0;
}