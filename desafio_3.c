#include <stdio.h>

int main() {
    // Variáveis para os dados das cartas
    char nome1[50], nome2[50];
    int codigo1, codigo2;
    unsigned long int populacao1, populacao2;
    float area1, area2, pib1, pib2, pib_per_capita1, pib_per_capita2;
    int pontos_turisticos1, pontos_turisticos2;
    float densidade_populacional1, densidade_populacional2;
    float super_poder1, super_poder2;

    // Dados para Carta 1
    printf("Digite o nome da Carta 1: ");
    fgets(nome1, 50, stdin);
    printf("Digite o codigo da Carta 1: ");
    scanf("%d", &codigo1);
    printf("Digite a populacao da Carta 1: ");
    scanf("%lu", &populacao1);
    printf("Digite a area da Carta 1: ");
    scanf("%f", &area1);
    printf("Digite o PIB da Carta 1: ");
    scanf("%f", &pib1);
    printf("Digite os pontos turisticos da Carta 1: ");
    scanf("%d", &pontos_turisticos1);
    
    // Calcular a densidade populacional da Carta 1
    densidade_populacional1 = (float)populacao1 / area1;
    
    // Calcular o PIB per capita da Carta 1
    pib_per_capita1 = pib1 / populacao1;
    
    // Calcular o Super Poder da Carta 1
    super_poder1 = (float)(populacao1 + area1 + pib1 + pontos_turisticos1 + (1/densidade_populacional1) + pib_per_capita1);

    // Dados para Carta 2
    printf("\nDigite o nome da Carta 2: ");
    getchar(); // Para limpar o buffer da entrada
    fgets(nome2, 50, stdin);
    printf("Digite o codigo da Carta 2: ");
    scanf("%d", &codigo2);
    printf("Digite a populacao da Carta 2: ");
    scanf("%lu", &populacao2);
    printf("Digite a area da Carta 2: ");
    scanf("%f", &area2);
    printf("Digite o PIB da Carta 2: ");
    scanf("%f", &pib2);
    printf("Digite os pontos turisticos da Carta 2: ");
    scanf("%d", &pontos_turisticos2);

    // Calcular a densidade populacional da Carta 2
    densidade_populacional2 = (float)populacao2 / area2;

    // Calcular o PIB per capita da Carta 2
    pib_per_capita2 = pib2 / populacao2;

    // Calcular o Super Poder da Carta 2
    super_poder2 = (float)(populacao2 + area2 + pib2 + pontos_turisticos2 + (1/densidade_populacional2) + pib_per_capita2);

    // Comparação das cartas
    printf("\nComparação de Cartas:\n");

    // Comparar População
    if (populacao1 > populacao2) {
        printf("População: Carta 1 venceu\n");
    } else {
        printf("População: Carta 2 venceu\n");
    }

    // Comparar Área
    if (area1 > area2) {
        printf("Área: Carta 1 venceu\n");
    } else {
        printf("Área: Carta 2 venceu\n");
    }

    // Comparar PIB
    if (pib1 > pib2) {
        printf("PIB: Carta 1 venceu\n");
    } else {
        printf("PIB: Carta 2 venceu\n");
    }

    // Comparar Pontos Turísticos
    if (pontos_turisticos1 > pontos_turisticos2) {
        printf("Pontos Turísticos: Carta 1 venceu\n");
    } else {
        printf("Pontos Turísticos: Carta 2 venceu\n");
    }

    // Comparar Densidade Populacional (menor vence)
    if (densidade_populacional1 < densidade_populacional2) {
        printf("Densidade Populacional: Carta 1 venceu\n");
    } else {
        printf("Densidade Populacional: Carta 2 venceu\n");
    }

    // Comparar PIB per Capita
    if (pib_per_capita1 > pib_per_capita2) {
        printf("PIB per Capita: Carta 1 venceu\n");
    } else {
        printf("PIB per Capita: Carta 2 venceu\n");
    }

    // Comparar Super Poder
    if (super_poder1 > super_poder2) {
        printf("Super Poder: Carta 1 venceu\n");
    } else {
        printf("Super Poder: Carta 2 venceu\n");
    }

    return 0;
}
