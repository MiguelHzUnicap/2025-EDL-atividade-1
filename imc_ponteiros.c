#include <stdio.h>

int main() {
    float peso, altura, imc;
    float *pPeso = &peso;
    float *pAltura = &altura;

    printf("Digite seu peso (kg): ");
    scanf("%f", pPeso);

    printf("Digite sua altura (m): ");
    scanf("%f", pAltura);

    imc = (*pPeso) / ((*pAltura) * (*pAltura));

    printf("Seu IMC é: %.2f\n", imc);

    return 0;
}
