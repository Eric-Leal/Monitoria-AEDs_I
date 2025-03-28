#include <stdio.h>

int main() {
    //Codigo para mostrar mesma repetição usando While, Do While e For
    
    int numero;
    int contador = 1;
    
    //Usando While
    printf("Digite um numero para ver sua tabuada: ");
    scanf("%d", &numero);
    
    printf("\nTabuada do %d:\n", numero);
    while(contador <= 10) {
        printf("%d x %d = %d\n",numero, contador, numero * contador);
        contador++;
    }
    
    //Usando Do While
    contador = 1;
    printf("Digite um numero para ver sua tabuada: ");
    scanf("%d", &numero);
    
    printf("\nTabuada do %d:\n", numero);
    do {
        printf("%d x %d = %d\n", numero, contador, numero * contador);
        contador++;
    } while(contador <= 10);

    //Usando For
    printf("Digite um numero para ver sua tabuada: ");
    scanf("%d", &numero);
    
    printf("\nTabuada do %d:\n", numero);
    for(int i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", numero, i, numero * i);
    }

    return 0;
}