#include <stdio.h>

// Função para calcular densidade populacional
float calcularDensidade(double populacao, float area) {
    return populacao / area;
}

// Função para calcular PIB per capita
float calcularPIBPerCapita(double pib, double populacao) {
    return pib / populacao;
}

// Função para formatar e exibir população de forma amigável
void exibirPopulacao(int populacao) {
    if (populacao >= 1000) {
        printf("População: %d milhões\n", populacao / 1000);
    } else {
        printf("População: %d mil\n", populacao);
    }
}

int main() {
    char estado1, estado2;
    int codigo1, codigo2;
    char nomeCidade1[50], nomeCidade2[50];
    int populacao1, populacao2;
    float area1, area2, pib1, pib2;
    int pontosTuristicos1, pontosTuristicos2;
    char codigoConcatenado1[5], codigoConcatenado2[5];

    printf("*** INPUT DOS DADOS ***\n\n");

    // Input dos dados da Carta 1
    printf("=== Cadastro da Carta 1 ===\n");
    printf("Digite o Estado da Carta (escolha de A a H): ");
    scanf(" %c", &estado1);
    printf("Digite o Codigo da Carta (escolha de 1 a 4): ");
    scanf("%d", &codigo1);
    sprintf(codigoConcatenado1, "%c%02d", estado1, codigo1);
    printf("Nome da Cidade: ");
    scanf(" %[^\n]s", nomeCidade1);
    printf("Populacao (em milhares de habitantes): ");
    scanf("%d", &populacao1);
    printf("Area (em km²): ");
    scanf("%f", &area1);
    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib1);
    printf("Numero de Pontos Turisticos: ");
    scanf("%d", &pontosTuristicos1);

    printf("\n");

    // Input dos dados da Carta 2
    printf("=== Cadastro da Carta 2 ===\n");
    printf("Digite o Estado da Carta (escolha de A a H): ");
    scanf(" %c", &estado2);
    printf("Digite o Codigo da Carta (escolha de 1 a 4): ");
    scanf("%d", &codigo2);
    sprintf(codigoConcatenado2, "%c%02d", estado2, codigo2);
    printf("Nome da Cidade: ");
    scanf(" %[^\n]s", nomeCidade2);
    printf("Populacao (em milhares de habitantes): ");
    scanf("%d", &populacao2);
    printf("Area (em km²): ");
    scanf("%f", &area2);
    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib2);
    printf("Numero de Pontos Turisticos: ");
    scanf("%d", &pontosTuristicos2);

    // Conversões
    double populacaoReal1 = populacao1 * 1000;
    double populacaoReal2 = populacao2 * 1000;
    double pibEmReais1 = pib1 * 1e9;
    double pibEmReais2 = pib2 * 1e9;

    // Ajuste da área para exibição mais realista
    float areaExibicao1 = (area1 >= 1000) ? area1 / 1000 : area1;
    float areaExibicao2 = (area2 >= 1000) ? area2 / 1000 : area2;
    char unidadeArea1[] = (area1 >= 1000) ? "mil km²" : "km²";
    char unidadeArea2[] = (area2 >= 1000) ? "mil km²" : "km²";

    float densidadePopulacional1 = calcularDensidade(populacaoReal1, area1);
    float pibPerCapita1 = calcularPIBPerCapita(pibEmReais1, populacaoReal1);
    float densidadePopulacional2 = calcularDensidade(populacaoReal2, area2);
    float pibPerCapita2 = calcularPIBPerCapita(pibEmReais2, populacaoReal2);

    printf("\n");

    printf("*** EXIBIÇÃO DOS DADOS ***\n\n");

    // Exibição dos dados da Carta 1
    printf("=== Carta 1 ===\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigoConcatenado1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    exibirPopulacao(populacao1);
    printf("Área: %.2f %s\n", areaExibicao1, unidadeArea1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional1);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita1);

    printf("\n");

    // Exibição dos dados da Carta 2
    printf("=== Carta 2 ===\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigoConcatenado2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    exibirPopulacao(populacao2);
    printf("Área: %.2f %s\n", areaExibicao2, unidadeArea2);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional2);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita2);

    return 0;
}
