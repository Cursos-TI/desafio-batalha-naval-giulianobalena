#include <stdio.h>

#define TAMANHO 10

int main() {
    int tabuleiro[TAMANHO][TAMANHO] = {0}; // Inicializa o tabuleiro com 0 (água)
    char colunas[] = "ABCDEFGHIJ";

    // Posiciona um navio horizontalmente (linha 2, começando na coluna 'C' -> índice 2)
    for (int i = 0; i < 3; i++) {
        tabuleiro[1][2 + i] = 3;
    }

    // Posiciona um navio verticalmente (coluna 'H' -> índice 7, começando na linha 5)
    for (int i = 0; i < 3; i++) {
        tabuleiro[4 + i][7] = 3;
    }

    printf("   ");
    for (int i = 0; i < TAMANHO; i++) {
        printf("%c ", colunas[i]);
    }
    printf("\n");

    for (int i = 0; i < TAMANHO; i++) {
        printf("%2d ", i + 1); 
        for (int j = 0; j < TAMANHO; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}
