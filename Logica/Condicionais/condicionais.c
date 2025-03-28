#include <stdio.h>

int main() {
    //Exemplo simples de uso de operadores logicos AND (&&) e OR (||)

    int numero;
    
    // Usando AND (&&) para verificar se numero está entre 1 e 10
    printf("Digite um numero: ");
    scanf("%d", &numero);
    
    if(numero >= 1 && numero <= 10) {
        //Se o numero for maior ou igual a 1 e menor ou igual a 10
        printf("O numero esta entre 1 e 10\n");
    }else{
        //Se o numero nao for maior ou igual a 1 e menor ou igual a 10
        printf("O numero nao esta entre 1 e 10\n");
    }
    
    //Usando OR (||) para verificar se numero é menor que 20 ou maior que 50 ou se está entre 20 e 50
    printf("Digite um numero: ");
    scanf("%d", &numero);
    
    if(numero < 20 || numero > 50) {
        //Se o numero for menor que 20 ou maior que 50
        printf("O numero %d eh menor que 20 ou maior que 50\n", numero);
    } else {
        //Se o numero nao for menor que 20 ou maior que 50 ou seja, se estiver entre 20 e 50
        printf("O numero %d esta entre 20 e 50\n", numero);
    }

    return 0;
}