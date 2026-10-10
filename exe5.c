#include <stdio.h>
int main(){
    int celcius, fahrenheit;
    
    printf("Digite a temperatura em celcius: ");
    scanf("%d", &celcius);

    fahrenheit = celcius * 9/5 + 32;

    printf("A temperatura em fahrenheit e %d", fahrenheit);

    return 0;
}