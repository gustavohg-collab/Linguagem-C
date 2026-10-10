#include <stdio.h>
int main(){
    float valor_compra, valor_pago, troco;

    printf("Digite o valor da compra: ");
    scanf("%d", &valor_compra);

    printf("Digite o valor pago: ");
    scanf("%d", &valor_pago);

    troco = valor_compra - valor_pago;

    printf("O troco da sua compra e %d", troco);

    return 0;
}