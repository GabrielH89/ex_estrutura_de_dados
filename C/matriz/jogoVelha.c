#include <stdio.h>
#include <stdbool.h>

// Função para exibir o tabuleiro do jogo da velha
void exibir_tabuleiro(char tabuleiro[3][3]) {
    printf("\n  Tabuleiro Atual:\n\n");
    printf("    0 1 2\n");
    for (int i = 0; i < 3; i++) {
        printf("%d   ", i);
        for (int j = 0; j < 3; j++) {
            printf("%c ", tabuleiro[i][j]);
            if (j < 2) {
                printf("| ");
            }
        }
        printf("\n");
        if (i < 2) {
            printf("   --|--|--\n");
        }
    }
    printf("\n");
}

// Função para verificar se houve um vencedor
bool verificar_vencedor(char tabuleiro[3][3], char jogador) {
    // Verificar linhas e colunas
    for (int i = 0; i < 3; i++) {
        if (tabuleiro[i][0] == jogador && tabuleiro[i][1] == jogador && tabuleiro[i][2] == jogador) {
            return true; // Linha completa
        }
        if (tabuleiro[0][i] == jogador && tabuleiro[1][i] == jogador && tabuleiro[2][i] == jogador) {
            return true; // Coluna completa
        }
    }
    // Verificar diagonais
    if (tabuleiro[0][0] == jogador && tabuleiro[1][1] == jogador && tabuleiro[2][2] == jogador) {
        return true; // Diagonal principal
    }
    if (tabuleiro[0][2] == jogador && tabuleiro[1][1] == jogador && tabuleiro[2][0] == jogador) {
        return true; // Diagonal secundária
    }
    return false;
}

int main() {
    char tabuleiro[3][3]; // Tabuleiro do jogo da velha
    int linha, coluna;    // Posições escolhidas pelos jogadores
    char jogador_atual = 'X'; // Começa com jogador 'X'
    bool jogo_terminado = false;
    int jogadas_restantes = 9;

    // Inicializar o tabuleiro vazio
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            tabuleiro[i][j] = '-';
        }
    }

    // Loop principal do jogo
    while (!jogo_terminado && jogadas_restantes > 0) {
        // Exibir o tabuleiro atual
        exibir_tabuleiro(tabuleiro);

        // Solicitar jogada do jogador atual
        printf("Jogador %c, insira a linha (0-2) e coluna (0-2) da sua jogada separadas por espaco: ", jogador_atual);
        scanf("%d %d", &linha, &coluna);

        // Verificar se a posição escolhida é válida
        if (linha < 0 || linha > 2 || coluna < 0 || coluna > 2 || tabuleiro[linha][coluna] != '-') {
            printf("Jogada invalida. Tente novamente.\n");
            continue; // Reiniciar o loop para solicitar nova jogada
        }

        // Registrar a jogada no tabuleiro
        tabuleiro[linha][coluna] = jogador_atual;
        jogadas_restantes--;

        // Verificar se o jogador atual venceu
        if (verificar_vencedor(tabuleiro, jogador_atual)) {
            exibir_tabuleiro(tabuleiro);
            printf("Parabens! Jogador %c venceu!\n", jogador_atual);
            jogo_terminado = true;
        } else {
            // Trocar o jogador atual
            jogador_atual = (jogador_atual == 'X') ? 'O' : 'X';
        }
    }

    // Verificar se o jogo terminou em empate
    if (!jogo_terminado && jogadas_restantes == 0) {
        exibir_tabuleiro(tabuleiro);
        printf("O jogo terminou em empate!\n");
    }

    return 0;
}
