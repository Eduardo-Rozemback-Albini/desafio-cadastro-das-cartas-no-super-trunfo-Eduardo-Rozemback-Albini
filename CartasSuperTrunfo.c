#include <stdio.h>
#include <string.h>  // Para usar strcspn

int main() {
    // Declaração de variáveis para Carta 1
    char estado1;
    char codigoConcatenado1[5];  // Aumentei o tamanho para armazenar a concatenação
    char nomeCidade1[50];
    int populacao1;
    float area1, pib1;
    int pontosTuristicos1;
    int numeroCodigo1;  // Variável para armazenar o número da carta

    // Declaração de variáveis para Carta 2
    char estado2;
    char codigoConcatenado2[5];  // Aumentei o tamanho para armazenar a concatenação
    char nomeCidade2[50];
    int populacao2;
    float area2, pib2;
    int pontosTuristicos2;
    int numeroCodigo2;  // Variável para armazenar o número da carta

    // Leitura dos dados da Carta 1
    printf("=== Cadastro da Carta 1 ===\n\n");
    printf("Digite o Estado da Carta (escolha de A a H)\n");
    scanf(" %c", &estado1);
    printf("Digite o Codigo da Carta (escolha de 1 a 4)\n");
    scanf("%d", &numeroCodigo1);  // Leitura do número do código
    sprintf(codigoConcatenado1, "%c%02d", estado1, numeroCodigo1);  // Concatena estado com número (ex: A01)
    printf("Nome da Cidade: ");
    getchar();  // Para consumir o \n deixado pelo scanf anterior
    fgets(nomeCidade1, sizeof(nomeCidade1), stdin);
    nomeCidade1[strcspn(nomeCidade1, "\n")] = 0;  // Remove o '\n' do final da string
    printf("Populacao: ");
    scanf("%d", &populacao1);
    printf("Area (em km²): ");
    scanf("%f", &area1);
    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib1);
    printf("Numero de Pontos Turisticos: ");
    scanf("%d", &pontosTuristicos1);

    printf("\n");

    // Leitura dos dados da Carta 2
    printf("=== Cadastro da Carta 2 ===\n");
    printf("Digite o Estado da Carta (escolha de A a H)\n");
    scanf(" %c", &estado2);
    printf("Digite o Codigo da Carta (escolha de 1 a 4)\n");
    scanf("%d", &numeroCodigo2);  // Leitura do número do código
    sprintf(codigoConcatenado2, "%c%02d", estado2, numeroCodigo2);  // Concatena estado com número (ex: B02)
    printf("Nome da Cidade: ");
    getchar();  // Para consumir o \n deixado pelo scanf anterior
    fgets(nomeCidade2, sizeof(nomeCidade2), stdin);
    nomeCidade2[strcspn(nomeCidade2, "\n")] = 0;  // Remove o '\n' do final da string
    printf("Populacao: ");
    scanf("%d", &populacao2);
    printf("Area (em km²): ");
    scanf("%f", &area2);
    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib2);
    printf("Numero de Pontos Turisticos: ");
    scanf("%d", &pontosTuristicos2);

    printf("\n");

    // Exibição dos dados da Carta 1
    printf("=== Carta 1 ===\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigoConcatenado1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos1);

    printf("\n");

    // Exibição dos dados da Carta 2
    printf("=== Carta 2 ===\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigoConcatenado2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos2);

    return 0;
}
