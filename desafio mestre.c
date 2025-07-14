#include <stdio.h>

int main() {
    // Carta 1
    char estado1;
    char codigo1[4];
    char nomeCidade1[50];
    unsigned long int populacao1;
    float area1;
    float pib1;
    int pontos1;
    float densidade1, pibPerCapita1, superPoder1;

    // Carta 2
    char estado2;
    char codigo2[4];
    char nomeCidade2[50];
    unsigned long int populacao2;
    float area2;
    float pib2;
    int pontos2;
    float densidade2, pibPerCapita2, superPoder2;

    // Entrada dos dados - Carta 1
    printf("Cadastro da Carta 1\n");
    printf("Estado:\n");
    scanf(" %c", &estado1);
    printf("Código:\n");
    scanf("%s", codigo1);
    printf("Nome da cidade:\n");
    scanf(" %[^\n]", nomeCidade1);
    printf("População:\n");
    scanf("%lu", &populacao1);
    printf("Área (km²):\n");
    scanf("%f", &area1);
    printf("PIB (em bilhões):\n");
    scanf("%f", &pib1);
    printf("Número de pontos turísticos:\n");
    scanf("%d", &pontos1);

    // Entrada dos dados - Carta 2
    printf("\nCadastro da Carta 2\n");
    printf("Estado:\n");
    scanf(" %c", &estado2);
    printf("Código:\n");
    scanf("%s", codigo2);
    printf("Nome da cidade:\n");
    scanf(" %[^\n]", nomeCidade2);
    printf("População:\n");
    scanf("%lu", &populacao2);
    printf("Área (km²):\n");
    scanf("%f", &area2);
    printf("PIB (em bilhões):\n");
    scanf("%f", &pib2);
    printf("Número de pontos turísticos:\n");
    scanf("%d", &pontos2);

    // Cálculos
    densidade1 = populacao1 / area1;
    pibPerCapita1 = (pib1 * 1000000000) / (float)populacao1;
    superPoder1 = (float)populacao1 + area1 + (pib1 * 1000000000) + pontos1 + pibPerCapita1 + (1 / densidade1);

    densidade2 = populacao2 / area2;
    pibPerCapita2 = (pib2 * 1000000000) / (float)populacao2;
    superPoder2 = (float)populacao2 + area2 + (pib2 * 1000000000) + pontos2 + pibPerCapita2 + (1 / densidade2);

    // Comparações (1 = Carta 1 venceu, 0 = Carta 2 venceu)
    int resultadoPopulacao = populacao1 > populacao2;
    int resultadoArea = area1 > area2;
    int resultadoPib = pib1 > pib2;
    int resultadoPontos = pontos1 > pontos2;
    int resultadoDensidade = densidade1 < densidade2; // menor vence
    int resultadoPibPerCapita = pibPerCapita1 > pibPerCapita2;
    int resultadoSuperPoder = superPoder1 > superPoder2;

    // Exibição dos resultados
    printf("\n=== Comparação de Cartas ===\n");
    printf("População: Carta 1 venceu (%d)\n", resultadoPopulacao);
    printf("Área: Carta 1 venceu (%d)\n", resultadoArea);
    printf("PIB: Carta 1 venceu (%d)\n", resultadoPib);
    printf("Pontos Turísticos: Carta 1 venceu (%d)\n", resultadoPontos);
    printf("Densidade Populacional: Carta 1 venceu (%d)\n", resultadoDensidade);
    printf("PIB per Capita: Carta 1 venceu (%d)\n", resultadoPibPerCapita);
    printf("Super Poder: Carta 1 venceu (%d)\n", resultadoSuperPoder);

    return 0;
}
