#include <stdio.h>

int main() {
    //OBS: Só consigo usar acento nas palavras somente nos comentarios
    // Variáveis da Carta 1
    char estado1;
    char codcarta1[4];
    char cidade1[20];    // deixei maior para aceitar nomes/siglas maiores
    int populacao1;
    float area1;
    float pib1;
    int npt1;
    float densidade1, pibpercapita1;

    // Variáveis da Carta 2
    char estado2;
    char codcarta2[4];
    char cidade2[20];
    int populacao2;
    float area2;
    float pib2;
    int npt2;
    float densidade2, pibpercapita2;

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
    scanf("%d", &populacao1);

    printf("Area em km(quadrados): ");
    scanf("%f", &area1);

    printf("PIB (em bilhoes de reais): ");
    scanf("%f", &pib1);

    printf("Numero de pontos turisticos: ");
    scanf("%d", &npt1);

    // Cálculos da carta 1
    densidade1 = populacao1 / area1;
    pibpercapita1 = pib1 * 1000000000.0 / populacao1;  
    // Multiplicamos por 1 bilhão para transformar PIB de "bilhões" em reais

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
    scanf("%d", &populacao2);

    printf("Area em km(quadrados): ");
    scanf("%f", &area2);

    printf("PIB (em bilhoes de reais): ");
    scanf("%f", &pib2);

    printf("Numero de pontos turisticos: ");
    scanf("%d", &npt2);

    // Cálculos da carta 2
    densidade2 = populacao2 / area2;
    pibpercapita2 = pib2 * 1000000000.0 / populacao2;

    // -----------------------------
    // Exibição formatada
    // -----------------------------
    printf("\n======= CARTA 1 =======\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codcarta1);
    printf("Cidade: %s\n", cidade1);
    printf("Populacao: %d habitantes\n", populacao1);
    printf("Area: %.2f km(quadrados)\n", area1);
    printf("PIB: %.2f bilhoes de reais\n", pib1);
    printf("Pontos Turisticos: %d\n", npt1);
    printf("Densidade Populacional: %.2f hab/km2\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", pibpercapita1);

    printf("\n======= CARTA 2 =======\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codcarta2);
    printf("Cidade: %s\n", cidade2);
    printf("Populacao: %d habitantes\n", populacao2);
    printf("Area: %.2f km(quadrados)\n", area2);
    printf("PIB: %.2f bilhoes de reais\n", pib2);
    printf("Pontos Turisticos: %d\n", npt2);
    printf("Densidade Populacional: %.2f hab/km2\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pibpercapita2);

    return 0;
}