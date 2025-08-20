#include <stdio.h>

// --- Funções Recursivas para as peças ---

// Função recursiva para o movimento da Torre
// Move-se para a direita. A cada chamada, decrementa o número de casas.
void moverTorre(int casas) {
    // Caso base da recursão: quando não há mais casas para mover
    if (casas <= 0) {
        return;
    }
    // Ação: imprime a direção do movimento
    printf("Direita\n");
    // Chamada recursiva para a próxima casa
    moverTorre(casas - 1);
}

// Função recursiva para o movimento da Rainha
// Move-se para a esquerda. A cada chamada, decrementa o número de casas.
void moverRainha(int casas) {
    // Caso base da recursão
    if (casas <= 0) {
        return;
    }
    // Ação
    printf("Esquerda\n");
    // Chamada recursiva
    moverRainha(casas - 1);
}

// --- Funções com loops aninhados para o Bispo ---

// Função para o movimento do Bispo
// Utiliza loops aninhados para simular a diagonal (cima e direita)
void moverBispo(int casas) {
    printf("--- Movimento do Bispo (5 casas na diagonal: Cima, Direita) ---\n");
    int i = 0;
    while (i < casas) {
        // Loop interno para o movimento horizontal (direita)
        // Isso é uma simplificação para ilustrar a combinação de loops.
        // Na prática, a combinação de loops é mais útil para simulações mais complexas.
        for (int j = 0; j < 1; j++) {
            printf("Cima, Direita\n");
        }
        i++;
    }
}


int main() {
    // --- Simulação da Torre com Recursividade ---
    printf("--- Movimento da Torre (5 casas para a direita) ---\n");
    moverTorre(5);

    printf("\n");

    // --- Simulação do Bispo com Loops Aninhados ---
    // A lógica de recursividade para o bispo foi substituída por loops aninhados, conforme solicitado.
    // A função 'moverBispo' já implementa essa lógica.
    moverBispo(5);

    printf("\n");

    // --- Simulação da Rainha com Recursividade ---
    printf("--- Movimento da Rainha (8 casas para a esquerda) ---\n");
    moverRainha(8);

    printf("\n");

    // --- Simulação do Cavalo com Loops Aninhados e Condições ---
    printf("--- Movimento do Cavalo (2 casas para cima, 1 para a direita) ---\n");

    int casasVertical = 2;
    int casasHorizontal = 1;

    // Loop externo (for) para controlar o movimento vertical para cima
    for (int i = 0; i < 3; i++) {
        // Condição para o movimento vertical
        if (i < casasVertical) {
            printf("Cima\n");
            // Usamos 'continue' para pular para a próxima iteração do loop,
            // garantindo que apenas o movimento vertical seja impresso nesta fase.
            continue;
        }

        // Condição para o movimento horizontal (acionado após o movimento vertical)
        if (i == casasVertical) {
            // Loop interno para o movimento horizontal para a direita
            for (int j = 0; j < casasHorizontal; j++) {
                printf("Direita\n");
            }
            // Usamos 'break' para sair do loop externo após o movimento completo do cavalo,
            // pois o padrão "L" já foi concluído.
            break;
        }
    }

    return 0;
}
