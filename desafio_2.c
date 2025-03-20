#include <stdio.h>

int main() {
    char estado1, codigo1[4], nomeCidade1[50];
    int populacao1, pontosTuristicos1;
    float area1, pib1, densidadePopulacional1, pibPerCapita1;

    printf("Digite o estado da primeira cidade (A-H): ");
    scanf(" %c", &estado1);
    printf("Digite o código da primeira carta (ex: A01): ");
    scanf(" %s", codigo1);
    printf("Digite o nome da primeira cidade: ");
    scanf(" %s", nomeCidade1);
    printf("Digite a população da primeira cidade: ");
    scanf(" %d", &populacao1);
    printf("Digite a área da primeira cidade (km²): ");
    scanf(" %f", &area1);
    printf("Digite o PIB da primeira cidade (bilhões de reais): ");
    scanf(" %f", &pib1);
    printf("Digite o número de pontos turísticos: ");
    scanf(" %d", &pontosTuristicos1);

    densidadePopulacional1 = populacao1 / area1;
    pibPerCapita1 = (pib1 * 1000000000) / populacao1;

    char estado2, codigo2[4], nomeCidade2[50];
    int populacao2, pontosTuristicos2;
    float area2, pib2, densidadePopulacional2, pibPerCapita2;

    printf("\nDigite o estado da segunda cidade (A-H): ");
    scanf(" %c", &estado2);
    printf("Digite o código da segunda carta (ex: B02): ");
    scanf(" %s", codigo2);
    printf("Digite o nome da segunda cidade: ");
    scanf(" %s", nomeCidade2);
    printf("Digite a população da segunda cidade: ");
    scanf(" %d", &populacao2);
    printf("Digite a área da segunda cidade (km²): ");
    scanf(" %f", &area2);
    printf("Digite o PIB da segunda cidade (bilhões de reais): ");
    scanf(" %f", &pib2);
    printf("Digite o número de pontos turísticos: ");
    scanf(" %d", &pontosTuristicos2);

    densidadePopulacional2 = populacao2 / area2;
    pibPerCapita2 = (pib2 * 1000000000) / populacao2;

    printf("\nCarta 1:\nEstado: %c\nCódigo: %s\nNome: %s\n", estado1, codigo1, nomeCidade1);
    printf("População: %d\nÁrea: %.2f km²\nPIB: %.2f bilhões\n", populacao1, area1, pib1);
    printf("Pontos Turísticos: %d\nDensidade: %.2f hab/km²\n", pontosTuristicos1, densidadePopulacional1);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita1);

    printf("\nCarta 2:\nEstado: %c\nCódigo: %s\nNome: %s\n", estado2, codigo2, nomeCidade2);
    printf("População: %d\nÁrea: %.2f km²\nPIB: %.2f bilhões\n", populacao2, area2, pib2);
    printf("Pontos Turísticos: %d\nDensidade: %.2f hab/km²\n", pontosTuristicos2, densidadePopulacional2);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita2);

    return 0;
}
