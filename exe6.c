#include <stdio.h>
int main(){
    int a, b, auxiliar;

    printf("Digite um numero: ");
    scanf("%d", &a);

    printf("Digite um numero: ");
    scanf("%d", &b);

    printf("Antes da troca: a = %d, b = %d\n", a, b);

    auxiliar = a;
    
    a = b;
    
    b = auxiliar;

    printf("Depois da troca: a = %d, b = %d\n", a, b);

    return 0;
}