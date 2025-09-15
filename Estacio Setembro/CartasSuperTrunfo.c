#include <stdio.h>

int main() {
    //OBS: Só consigo usar acento nas palavras somente nos comentarios
    // Variáveis da Carta 1
    char estado1;            //char apenas 1 caractere
    char codcarta1[4];       //char aceita nesse caso 3 caracteres
    char cidade1[4];         //char aceita 3 caracteres
    int populacao1;          //int número inteiro
    float area1;             //float número com valor em decimal só aparece com a variável do tipo float
    float pib1;              //float número decimal
    int npt1;                //int número inteiro

    // Variáveis da Carta 2
    char estado2;
    char codcarta2[4];
    char cidade2[4];
    int populacao2;
    float area2;
    float pib2;
    int npt2;

    // -----------------------------
    // Entrada de dados da Carta 1
    // -----------------------------
    printf("=== Cadastro da Carta 1 ===\n");

    // Espaço antes do %c -> ignora ENTER ou espaço da digitação anterior
    printf("Estado (A-H): ");
    scanf("%c", &estado1);

    // %3s -> lê até 3 caracteres, evitando estouro do array codcarta1[4]
    printf("Codigo da carta (ex: A01): ");
    scanf("%3s", codcarta1);

    // %[^\n] -> lê todos os caracteres até encontrar ENTER
    printf("Nome da cidade (escreva a sigla para que nao haja erros): ");
    scanf("%3s", cidade1);

    printf("Populacao: ");
    scanf("%d", &populacao1);

    printf("Area em km(quadrados): ");
    scanf("%f", &area1);

    printf("PIB (em bilhoes de reais): ");
    scanf("%f", &pib1);

    printf("Numero de pontos turisticos: ");
    scanf("%d", &npt1);

    // -----------------------------
    // Entrada de dados da Carta 2
    // -----------------------------
    printf("\n=== Cadastro da Carta 2 ===\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado2);

    printf("Codigo da carta (ex: B02): ");
    scanf("%3s", codcarta2);

    printf("Nome da cidade: ");
    scanf("%3s", cidade2);

    printf("Populacao: ");
    scanf("%d", &populacao2);

    printf("Area em km(quadrados): ");
    scanf("%f", &area2);

    printf("PIB (em bilhoes de reais): ");
    scanf("%f", &pib2);

    printf("Numero de pontos turisticos: ");
    scanf("%d", &npt2);

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

    printf("\n======= CARTA 2 =======\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codcarta2);
    printf("Cidade: %s\n", cidade2);
    printf("Populacao: %d habitantes\n", populacao2);
    printf("Area: %.2f km(quadrados)\n", area2);
    printf("PIB: %.2f bilhoes de reais\n", pib2);
    printf("Pontos Turisticos: %d\n", npt2);

    return 0;
}