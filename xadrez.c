#include <stdio.h>

int main() {

    int direcao_torre;
    int casas_torre;

    int direcao_bispo;
    int casas_bispo;

    int direcao_rainha;
    int casas_rainha;

    int direcao_cavalo;

    int incremento;

    printf("\n --- Movimentando peças de Xadrez\n\n");

    printf(" ===== Peça: Torre ===== \n");
    printf("1 - Direita\n");
    printf("2 - Esquerda\n");
    printf("3 - Cima\n");
    printf("4 - Baixo\n");

    printf("Selecione a direção: ");
    scanf("%d", &direcao_torre);

    printf("\nSelecione o número de casas para mover: ");
    scanf("%d", &casas_torre);
    
    // Lógica de movimentação da torre
    switch (direcao_torre) {
        case 1:
            printf("\nMovendo a torre %d casas para a direita.\n", casas_torre);
            for (int i = 1; i <= casas_torre; i++) {
                printf("Direita %d\n", i);
            }
            break;
        case 2:
            printf("\nMovendo a torre %d casas para a esquerda.\n", casas_torre);
            for (int i = 1; i <= casas_torre; i++) {
                printf("Esquerda %d\n", i);
            }
            break;
        case 3:
            printf("\nMovendo a torre %d casas para cima.\n", casas_torre);
            for (int i = 1; i <= casas_torre; i++) {
                printf("Cima %d\n", i);
            }
            break;
        case 4:
            printf("\nMovendo a torre %d casas para baixo.\n", casas_torre);
            for (int i = 1; i <= casas_torre; i++) {
                printf("Baixo %d\n", i);
            }
            break;
        default:
            printf("Direção inválida!\n");
            break;

    }

    printf("\n ===== Peça: Bispo ===== \n");
    printf("1 - Diagonal Superior Direita\n");
    printf("2 - Diagonal Superior Esquerda\n");
    printf("3 - Diagonal Inferior Direita\n");
    printf("4 - Diagonal Inferior Esquerda\n");

    printf("Selecione a direção: ");
    scanf("%d", &direcao_bispo);

    printf("\nSelecione o número de casas para mover: ");
    scanf("%d", &casas_bispo);

    // Lógica de movimentação do bispo
    switch (direcao_bispo) {
        case 1:
            printf("\nMovendo o bispo %d casas para a diagonal superior direita.\n", casas_bispo);
            incremento = 1;
            while (incremento<=casas_bispo)
            {
                printf("Cima, Direita %d\n", incremento);
                incremento++;
            }
            
            break;
        case 2:
            printf("\nMovendo o bispo %d casas para a diagonal superior esquerda.\n", casas_bispo);
            incremento = 1;
            while (incremento<=casas_bispo)
            {
                printf("Cima, Esquerda %d\n", incremento);
                incremento++;
            }
            break;
        case 3:
            printf("\nMovendo o bispo %d casas para a diagonal inferior direita.\n", casas_bispo);
            incremento = 1;
            while (incremento<=casas_bispo)
            {
                printf("Baixo, Direita %d\n", incremento);
                incremento++;
            }
            break;
        case 4:
            printf("\nMovendo o bispo %d casas para a diagonal inferior esquerda.\n", casas_bispo);
            incremento = 1;
            while (incremento<=casas_bispo)
            {
                printf("Baixo, Esquerda %d\n", incremento);
                incremento++;
            }
            break;
        default:
            printf("Direção inválida!\n");
            break;
    }

    printf("\n ===== Peça: Rainha ===== \n");
    printf("1 - Direita\n");
    printf("2 - Esquerda\n");
    printf("3 - Cima\n");
    printf("4 - Baixo\n");
    printf("5 - Diagonal Superior Direita\n");
    printf("6 - Diagonal Superior Esquerda\n");
    printf("7 - Diagonal Inferior Direita\n");
    printf("8 - Diagonal Inferior Esquerda\n");

    printf("Selecione a direção: ");
    scanf("%d", &direcao_rainha);

    printf("\nSelecione o número de casas para mover: ");
    scanf("%d", &casas_rainha);

    // Lógica de movimentação da rainha
    switch (direcao_rainha) {
        case 1:
            printf("\nMovendo a rainha %d casas para a direita.\n", casas_rainha);
            do {
                printf("Direita %d\n", casas_rainha);
                casas_rainha--;
            } while (casas_rainha > 0);
            break;
        case 2:
            printf("\nMovendo a rainha %d casas para a esquerda.\n", casas_rainha);
            do {
                printf("Esquerda %d\n", casas_rainha);
                casas_rainha--;
            } while (casas_rainha > 0);
            break;
        case 3:
            printf("\nMovendo a rainha %d casas para cima.\n", casas_rainha);
            do {
                printf("Cima %d\n", casas_rainha);
                casas_rainha--;
            } while (casas_rainha > 0);
            break;
        case 4:
            printf("\nMovendo a rainha %d casas para baixo.\n", casas_rainha);
            do {
                printf("Baixo %d\n", casas_rainha);
                casas_rainha--;
            } while (casas_rainha > 0);
            break;
        case 5:
            printf("\nMovendo a rainha %d casas para a diagonal superior direita.\n", casas_rainha);
            do {
                printf("Cima, Direita %d\n", casas_rainha);
                casas_rainha--;
            } while (casas_rainha > 0);
            break;
        case 6:
            printf("\nMovendo a rainha %d casas para a diagonal superior esquerda.\n", casas_rainha);
            do{
                printf("Cima, Esquerda %d\n", casas_rainha);
                casas_rainha--;
            } while (casas_rainha > 0);
            
            break;
        case 7:
            printf("\nMovendo a rainha %d casas para a diagonal inferior direita.\n", casas_rainha);
            do {
                printf("Baixo, Direita %d\n", casas_rainha);
                casas_rainha--;
            } while (casas_rainha > 0);
            break;
        case 8:
            printf("\nMovendo a rainha %d casas para a diagonal inferior esquerda.\n", casas_rainha);
            do {
                printf("Baixo, Esquerda %d\n", casas_rainha);
                casas_rainha--;
            } while (casas_rainha > 0);
            break;
        default:
            printf("Direção inválida!\n");
            break;

    }

    printf("\n ===== Peça: Cavalo ===== \n");
    printf("Selecione a direção do movimento em 'L' do cavalo:\n");
    printf("1 - Duas casas para baixo e uma para esquerda\n");
    printf("2 - Duas casas para baixo e uma para direita\n");
    printf("3 - Duas casas para cima e uma para esquerda\n");
    printf("4 - Duas casas para cima e uma para direita\n");

    printf("Selecione a direção: ");
    scanf("%d", &direcao_cavalo);

    // Lógica de movimentação do cavalo
    switch(direcao_cavalo) {
        case 1:
            printf("\nMovendo o cavalo duas vezes para baixo e uma para esquerda.\n");
            int movimentoCavalo = 1; 
            int movimentoLateral = 0;
            for (movimentoCavalo; movimentoCavalo >= 1; movimentoCavalo--) {
                
                while(movimentoLateral < 2) {
                    printf("Baixo %d\n", movimentoLateral + 1);
                    movimentoLateral++;

                }
                printf("Esquerda 1\n");
            }
            break;
        
        case 2:
            printf("\nMovendo o cavalo duas vezes para baixo e uma para direita.\n");
            movimentoCavalo = 1; 
            movimentoLateral = 0;
            for (movimentoCavalo; movimentoCavalo >= 1; movimentoCavalo--) {
                
                while(movimentoLateral < 2) {
                    printf("Baixo %d\n", movimentoLateral + 1);
                    movimentoLateral++;

                }
                printf("Direita 1\n");
            }
            break;

        case 3:
            printf("\nMovendo o cavalo duas vezes para cima e uma para esquerda.\n");
            movimentoCavalo = 1; 
            movimentoLateral = 0;
            for (movimentoCavalo; movimentoCavalo >= 1; movimentoCavalo--) {
                
                while(movimentoLateral < 2) {
                    printf("Cima %d\n", movimentoLateral + 1);
                    movimentoLateral++;

                }
                printf("Esquerda 1\n");
            }
            break;

        case 4:
            printf("\nMovendo o cavalo duas vezes para cima e uma para direita.\n");
            movimentoCavalo = 1;
            movimentoLateral = 0;
            for (movimentoCavalo; movimentoCavalo >= 1; movimentoCavalo--) {
                
                while(movimentoLateral < 2) {
                    printf("Cima %d\n", movimentoLateral + 1);
                    movimentoLateral++;

                }
                printf("Direita 1\n");
            }
            break;
        default:
            printf("Direção inválida!\n");
            break;
        
    }
    
    return 0;
}