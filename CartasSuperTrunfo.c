#include <stdio.h>

int main() {
    // Declaração de variáveis para Carta 1 e Carta 2
    char estado1, estado2;
    int codigo1, codigo2;  
    char nomeCidade1[50], nomeCidade2[50];
    unsigned long int populacao1, populacao2;
    float area1, area2, pib1, pib2;
    int pontosTuristicos1, pontosTuristicos2;
    char codigoConcatenado1[5], codigoConcatenado2[5];

    printf("*** INPUT DOS DADOS ***\n\n");

    // Cadastro da Carta 1
    printf("=== Cadastro da Carta 1 ===\n");
    printf("Digite o Estado da Carta (A a H): ");
    scanf(" %c", &estado1);
    printf("Digite o Codigo da Carta (1 a 4): ");
    scanf("%d", &codigo1);
    sprintf(codigoConcatenado1, "%c%02d", estado1, codigo1);
    printf("Nome da Cidade: ");
    scanf(" %49[^\n]s", nomeCidade1); //Usado %49 para limitar a leitura e evitar estouro de buffer.
    printf("Populacao (em milhares de habitantes): ");
    scanf("%lu", &populacao1);
    printf("Area (em km²): ");
    scanf("%f", &area1);
    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib1);
    printf("Numero de Pontos Turisticos: ");
    scanf("%d", &pontosTuristicos1);

    printf("\n");

    // Cadastro da Carta 2
    printf("=== Cadastro da Carta 2 ===\n");
    printf("Digite o Estado da Carta (A a H): ");
    scanf(" %c", &estado2);
    printf("Digite o Codigo da Carta (1 a 4): ");
    scanf("%d", &codigo2);
    sprintf(codigoConcatenado2, "%c%02d", estado2, codigo2);
    printf("Nome da Cidade: ");
    scanf(" %49[^\n]s", nomeCidade2); //Usado %49 para limitar a leitura e evitar estouro de buffer.
    printf("Populacao (em milhares de habitantes): ");
    scanf("%lu", &populacao2);
    printf("Area (em km²): ");
    scanf("%f", &area2);
    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib2);
    printf("Numero de Pontos Turisticos: ");
    scanf("%d", &pontosTuristicos2);

    // Conversões para valores reais
    double populacaoReal1 = populacao1 * 1000;
    double populacaoReal2 = populacao2 * 1000;
    double pibEmReais1 = pib1 * 1e9;
    double pibEmReais2 = pib2 * 1e9;

    // Cálculo dos atributos derivados
    float densidadePopulacional1 = populacaoReal1 / area1;
    float pibPerCapita1 = pibEmReais1 / populacaoReal1;
    float densidadePopulacional2 = populacaoReal2 / area2;
    float pibPerCapita2 = pibEmReais2 / populacaoReal2;

    // Cálculo do Super Poder
    float superPoderCarta1 = populacaoReal1 + area1 + pibEmReais1 + pontosTuristicos1 + pibPerCapita1 + (1 / densidadePopulacional1);
    float superPoderCarta2 = populacaoReal2 + area2 + pibEmReais2 + pontosTuristicos2 + pibPerCapita2 + (1 / densidadePopulacional2);

    // Exibição das Cartas
    printf("\n*** Exibição das Cartas ***\n\n");
    printf("\n=== CARTA 1 ===\n");
    printf("Código: %s\n", codigoConcatenado1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %lu habitantes\n", populacaoReal1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: R$ %.2f bilhões\n", pib1);
    printf("Pontos Turísticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional1);
    printf("PIB per Capita: R$ %.2f\n", pibPerCapita1);
    printf("Super Poder: %.2f\n", superPoderCarta1);

    printf("\n=== CARTA 2 ===\n");
    printf("Código: %s\n", codigoConcatenado2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %lu habitantes\n", populacaoReal2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: R$ %.2f bilhões\n", pib2);
    printf("Pontos Turísticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional2);
    printf("PIB per Capita: R$ %.2f\n", pibPerCapita2);
    printf("Super Poder: %.2f\n", superPoderCarta2);

    // Comparação das Cartas
    printf("\n*** COMPARAÇÃO DAS CARTAS ***\n");
    printf("LEGENDA:\n(1 = Carta 1, 0 = Carta 2)\n");
    printf("População: Carta %d venceu\n", populacaoReal1 > populacaoReal2);
    printf("Área: Carta %d venceu\n", area1 > area2);
    printf("PIB: Carta %d venceu\n", pibEmReais1 > pibEmReais2);
    printf("Pontos Turísticos: Carta %d venceu\n", pontosTuristicos1 > pontosTuristicos2);
    printf("Densidade Populacional: Carta %d venceu (menor vence)\n", densidadePopulacional1 < densidadePopulacional2); //utilização do operador Menor
    printf("PIB per Capita: Carta %d venceu\n", pibPerCapita1 > pibPerCapita2);
    printf("Super Poder: Carta %d venceu\n\n\n", superPoderCarta1 > superPoderCarta2);

    return 0;
}
