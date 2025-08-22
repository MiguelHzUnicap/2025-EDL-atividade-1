#include <stdio.h>

int main() {
    float peso, altura, imc;

    printf("Digite sua altura: ");
    scanf("%f", &altura);   

    printf("Digite seu peso: ");
    scanf("%f", &peso);

    imc = peso / (altura * altura);

    printf("\nVocê tem %.2f de altura (m) e pesa %.2f (kg).\n", altura, peso);
    printf("\nSeu IMC é %.2f \n", imc);

    return 0;

}