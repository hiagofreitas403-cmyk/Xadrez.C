#include <stdio.h>

int main() {
    int i;

    printf("=== Movimento da Torre (usando for) ===\n");
    // A torre se move em linha reta — exemplo: 5 casas para a direita
    for (i = 1; i <= 5; i++) {
        printf("Torre move 1 casa para a direita (%d)\n", i);
    }

    printf("\n=== Movimento do Bispo (usando while) ===\n");
    // O bispo se move na diagonal — exemplo: 4 casas na diagonal superior direita
    i = 1;
    while (i <= 4) {
        printf("Bispo move 1 casa na diagonal superior direita (%d)\n", i);
        i++;
    }

    printf("\n=== Movimento da Rainha (usando do-while) ===\n");
    // A rainha pode se mover em qualquer direção — exemplo: 3 casas para cima
    i = 1;
    do {
        printf("Rainha move 1 casa para cima (%d)\n", i);
        i++;
    } while (i <= 3);

    printf("\nSimulação concluída!\n");

    return 0;
}
