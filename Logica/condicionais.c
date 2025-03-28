#include <stdio.h>

int main() {
    int numero;
    

    printf("Digite um numero: ");
    scanf("%d", &numero);
    
    // Usando AND (&&) para verificar se numero está entre 1 e 10
    if(numero >= 1 && numero <= 10) {
        printf("O numero esta entre 1 e 10\n");
    }else{
        printf("O numero nao esta entre 1 e 10\n");
    }
    
    //Usando OR (||) para verificar se numero é menor que 20 ou maior que 50 ou se está entre 20 e 50
    printf("Digite um numero: ");
    scanf("%d", &numero);
    
    if(numero < 20 || numero > 50) {
        printf("O numero eh menor que 20 ou maior que 50\n");
    } else {
        printf("O numero esta entre 20 e 50\n");
    }

    return 0;
}