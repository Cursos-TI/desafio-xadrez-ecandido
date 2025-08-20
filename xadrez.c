#include <stdio.h>

int main() {
    // --- Simulação do movimento da Torre (usando for) ---
    // A torre se move cinco casas para a direita.
    printf("--- Movimento da Torre (5 casas para a direita) ---\n");
    int casasTorre = 5;
    for (int i = 0; i < casasTorre; i++) {
        printf("Direita\n");
    }

    printf("\n"); // Adiciona uma linha em branco para melhor visualização

    // --- Simulação do movimento do Bispo (usando while) ---
    // O bispo se move cinco casas na diagonal para cima e para a direita.
    printf("--- Movimento do Bispo (5 casas na diagonal: Cima, Direita) ---\n");
    int casasBispo = 5;
    int i = 0;
    while (i < casasBispo) {
        printf("Cima, Direita\n");
        i++;
    }

    printf("\n"); // Adiciona uma linha em branco para melhor visualização

    // --- Simulação do movimento da Rainha (usando do-while) ---
    // A rainha se move oito casas para a esquerda.
    printf("--- Movimento da Rainha (8 casas para a esquerda) ---\n");
    int casasRainha = 8;
    int j = 0;
    // O loop do-while executa a instrução pelo menos uma vez, e depois checa a condição.
    if (casasRainha > 0) { // Garante que o loop só comece se houver casas para mover
        do {
            printf("Esquerda\n");
            j++;
        } while (j < casasRainha);
    }

    printf("\n"); // Adiciona uma linha em branco para melhor visualização

    // --- Simulação do movimento do Cavalo (usando for aninhado com while) ---
    // O cavalo se move duas casas para baixo e uma para a esquerda.
    printf("--- Movimento do Cavalo (2 casas para baixo, 1 para a esquerda) ---\n");
    
    // Define as casas a serem movidas
    int casasVertical = 2;
    int casasHorizontal = 1;

    // Loop externo (for) para o movimento vertical (para baixo)
    for (int k = 0; k < casasVertical; k++) {
        printf("Baixo\n");
    }

    // Loop interno (while) para o movimento horizontal (para a esquerda)
    int l = 0;
    while (l < casasHorizontal) {
        printf("Esquerda\n");
        l++;
    }

    return 0;
}
