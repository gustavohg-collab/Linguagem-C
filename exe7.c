#include <stdio.h>
int main(){
    float capital, taxa, tempo, juros;

    printf("Digite o capital: ");
    scanf("%f", &capital);

    printf("Digite a taxa: ");
    scanf("%f", &taxa);

    printf("Digite o tempo em meses: ");
    scanf("%f", &tempo);

    juros = capital * taxa * tempo;

    printf("O juros e%f\n", juros);

    return 0;
}