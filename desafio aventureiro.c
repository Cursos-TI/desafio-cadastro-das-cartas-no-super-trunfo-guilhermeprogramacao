#include <stdio.h>

int main() {
    // Variáveis da Carta 1
    char estado1;
    char codigo1[4];
    char nomecidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontosturisticos1;
    float densidade1;
    float pibPerCapita1;

    // Variáveis da Carta 2
    char estado2;
    char codigo2[4];
    char nomecidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontosturisticos2;
    float densidade2;
    float pibPerCapita2;

    // Entrada da Carta 1
    printf("Cadastro da carta 1\n");

    printf("Digite o estado (A - Alagoas):\n");
    scanf(" %c", &estado1);

    printf("Digite o código da carta:\n");
    scanf("%s", codigo1);

    printf("Digite o nome da cidade:\n");
    scanf(" %[^\n]", nomecidade1);

    printf("Digite a população:\n");
    scanf("%d", &populacao1);

    printf("Digite a área (em km²):\n");
    scanf("%f", &area1);

    printf("Digite o PIB (em bilhões de reais):\n");
    scanf("%f", &pib1);

    printf("Digite o número de pontos turísticos:\n");
    scanf("%d", &pontosturisticos1);

    // Cálculos da carta 1
    densidade1 = populacao1 / area1;
    pibPerCapita1 = (pib1 * 1000000000) / populacao1;  // PIB em reais

    // Entrada da Carta 2
    printf("\nCadastro da carta 2\n");

    printf("Digite o estado (B - Paraná):\n");
    scanf(" %c", &estado2);

    printf("Digite o código da carta:\n");
    scanf("%s", codigo2);

    printf("Digite o nome da cidade:\n");
    scanf(" %[^\n]", nomecidade2);

    printf("Digite a população:\n");
    scanf("%d", &populacao2);

    printf("Digite a área (em km²):\n");
    scanf("%f", &area2);

    printf("Digite o PIB (em bilhões de reais):\n");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turísticos:\n");
    scanf("%d", &pontosturisticos2);

    // Cálculos da carta 2
    densidade2 = populacao2 / area2;
    pibPerCapita2 = (pib2 * 1000000000) / populacao2;

    // Saída formatada
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomecidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosturisticos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita1);

    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomecidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosturisticos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita2);

    return 0;
}
