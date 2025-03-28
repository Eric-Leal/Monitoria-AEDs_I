#include <stdio.h>
#include <stdlib.h>

int main() {
    float num1, num2, resultado;
    int opcao;

    printf("\nEscolha a operacao:\n");
    printf("1 - Soma\n");
    printf("2 - Subtracao\n");
    printf("3 - Multiplicacao\n");
    printf("4 - Divisao\n");
    printf("5 - Sair\n");
    scanf("%d", &opcao);

    printf("Digite o primeiro numero: ");
    scanf("%f", &num1);
    printf("Digite o segundo numero: ");
    scanf("%f", &num2);

    switch(opcao){
        case 1:
            resultado = num1 + num2;
            printf("O resultado da soma e: %.2f\n", resultado);
            break;
        case 2:
            resultado = num1 - num2;
            printf("O resultado da subtracao e: %.2f\n", resultado);
            break;
        case 3:
            resultado = num1 * num2;
            printf("O resultado da multiplicacao e: %.2f\n", resultado);
            break;
        case 4:
            if(num2 == 0) {
                printf("Erro: Divisao por zero!\n");
            } else {
                resultado = num1 / num2;
                printf("O resultado da divisao e: %.2f\n", resultado);
            }
            break;
        case 5:
            printf("Saindo...\n");
            break;
        default:
            printf("Operacao invalida\n");
            break;
    }

    return 0;
}