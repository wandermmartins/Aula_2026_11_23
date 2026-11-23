#include <stdio.h>

int main(void) {
    // 1 Criar a matriz 
    int matriz[3][4] = {0}; // Inicializa todos os elementos com zero

    // Atribuir valores para a matriz
    matriz[1][2] = 10;

    printf("Valor do elemento matriz[1][2]: %d\n", matriz[1][2]);
    printf("Valor do elemento matriz[0][1]: %d\n", matriz[0][1]);

    return 0;
}
