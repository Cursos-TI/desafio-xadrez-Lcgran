#include <stdio.h>

int main() {
    // --- Simulação do Movimento da Torre ---
    // A Torre se move em linha reta. Vamos simular um movimento de 5 casas para a direita usando um loop 'for'.
    printf("Simulando o movimento da Torre (5 casas para a direita):\n");
    for (int i = 0; i < 5; i++) {
        printf("Direita\n");
    }
    printf("\n");

    // --- Simulação do Movimento do Bispo ---
    // O Bispo se move na diagonal. Vamos simular um movimento de 5 casas na diagonal (para cima e a direita) usando um loop 'while'.
    int casas_bispo = 5;
    printf("Simulando o movimento do Bispo (5 casas na diagonal para cima e a direita):\n");
    while (casas_bispo > 0) {
        printf("Cima, Direita\n");
        casas_bispo--;
    }
    printf("\n");

    // --- Simulação do Movimento da Rainha ---
    // A Rainha se move em todas as direções. Vamos simular um movimento de 8 casas para a esquerda usando um loop 'do-while'.
    int casas_rainha = 8;
    printf("Simulando o movimento da Rainha (8 casas para a esquerda):\n");
    do {
        printf("Esquerda\n");
        casas_rainha--;
    } while (casas_rainha > 0);

    return 0;
}