#include <stdio.h>

int main() {
    //OBS: Só consigo usar acento nas palavras somente nos comentarios
    // Variáveis da Carta 1
    char estado1;
    char codcarta1[4];
    char cidade1[20];
    unsigned long int populacao1; // População maior
    float area1, pib1;
    int npt1;
    float densidade1, pibpercapita1, superpoder1;

    // -----------------------------
    // Variáveis da Carta 2
    // -----------------------------
    char estado2;
    char codcarta2[4];
    char cidade2[20];
    unsigned long int populacao2;
    float area2, pib2;
    int npt2;
    float densidade2, pibpercapita2, superpoder2;

    // -----------------------------
    // Entrada de dados da Carta 1
    // -----------------------------
    printf("=== Cadastro da Carta 1 ===\n");

    printf("Estado (A-H): ");
    scanf(" %c", &estado1);

    printf("Codigo da carta (ex: A01): ");
    scanf("%3s", codcarta1);

    printf("Nome da cidade (use sigla se preferir): ");
    scanf("%19s", cidade1);

    printf("Populacao: ");
    scanf("%lu", &populacao1); // unsigned long int

    printf("Area em km(quadrados): ");
    scanf("%f", &area1);

    printf("PIB (em bilhoes de reais): ");
    scanf("%f", &pib1);

    printf("Numero de pontos turisticos: ");
    scanf("%d", &npt1);

    // Cálculos da carta 1
    densidade1 = populacao1 / area1;
    pibpercapita1 = pib1 * 1000000000.0 / populacao1;
    superpoder1 = populacao1 + area1 + pib1 + npt1 + pibpercapita1 + (1.0 / densidade1);

    // -----------------------------
    // Entrada de dados da Carta 2
    // -----------------------------
    printf("\n=== Cadastro da Carta 2 ===\n");

    printf("Estado (A-H): ");
    scanf(" %c", &estado2);

    printf("Codigo da carta (ex: B02): ");
    scanf("%3s", codcarta2);

    printf("Nome da cidade (use sigla se preferir): ");
    scanf("%19s", cidade2);

    printf("Populacao: ");
    scanf("%lu", &populacao2);

    printf("Area em km(quadrados): ");
    scanf("%f", &area2);

    printf("PIB (em bilhoes de reais): ");
    scanf("%f", &pib2);

    printf("Numero de pontos turisticos: ");
    scanf("%d", &npt2);

    // Cálculos da carta 2
    densidade2 = populacao2 / area2;
    pibpercapita2 = pib2 * 1000000000.0 / populacao2;
    superpoder2 = populacao2 + area2 + pib2 + npt2 + pibpercapita2 + (1.0 / densidade2);

    // -----------------------------
    // Exibição formatada das cartas
    // -----------------------------
    printf("\n======= CARTA 1 =======\n");
    printf("Estado: %c\nCodigo: %s\nCidade: %s\nPopulacao: %lu\nArea: %.2f km²\nPIB: %.2f bilhoes\nPontos Turisticos: %d\nDensidade: %.2f hab/km²\nPIB per Capita: %.2f\nSuper Poder: %.2f\n",
           estado1, codcarta1, cidade1, populacao1, area1, pib1, npt1, densidade1, pibpercapita1, superpoder1);

    printf("\n======= CARTA 2 =======\n");
    printf("Estado: %c\nCodigo: %s\nCidade: %s\nPopulacao: %lu\nArea: %.2f km²\nPIB: %.2f bilhoes\nPontos Turisticos: %d\nDensidade: %.2f hab/km²\nPIB per Capita: %.2f\nSuper Poder: %.2f\n",
           estado2, codcarta2, cidade2, populacao2, area2, pib2, npt2, densidade2, pibpercapita2, superpoder2);

    // -----------------------------
    // Comparações entre as cartas
    // -----------------------------
    printf("\n======= Comparacao de Cartas =======\n");

    printf("Populacao: Carta 1 venceu (%d)\n", populacao1 > populacao2 ? 1 : 0);
    printf("Area: Carta 1 venceu (%d)\n", area1 > area2 ? 1 : 0);
    printf("PIB: Carta 1 venceu (%d)\n", pib1 > pib2 ? 1 : 0);
    printf("Pontos Turisticos: Carta 1 venceu (%d)\n", npt1 > npt2 ? 1 : 0);
    printf("Densidade Populacional: Carta 1 venceu (%d)\n", densidade1 < densidade2 ? 1 : 0); // menor vence
    printf("PIB per Capita: Carta 1 venceu (%d)\n", pibpercapita1 > pibpercapita2 ? 1 : 0);
    printf("Super Poder: Carta 1 venceu (%d)\n", superpoder1 > superpoder2 ? 1 : 0);

    return 0;
}