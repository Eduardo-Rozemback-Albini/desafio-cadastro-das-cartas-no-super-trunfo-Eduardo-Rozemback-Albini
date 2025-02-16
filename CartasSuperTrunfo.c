#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste Eduardo

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    char nomeCidade[30];
    int codCidade;
    float populacao;
    float area;
    float pib;
    int numPontosTuristicos;

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.

    printf("Digite o nome da cidade\n");
    scanf("%29s", nomeCidade);

    printf("Digite o codigo da cidade\n");
    scanf("%d", &codCidade);

    printf("Digite a população da cidade\n");
    scanf("%f", &populacao);

    printf("Digite a area da cidade\n");
    scanf("%f", &area);

    printf("Digite o PIB da cidade\n");
    scanf("%f", &pib );

    printf("Digite o numero de pontos turisticos da cidade\n");
    scanf("%d", &numPontosTuristicos);


    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    printf("\nRESULTADO:\n* Nome da Cidade: %s\n* Codigo da Cidade: %d\n* População: %f\n* Area: %f\n* PIB: %f\n* Numero de Pontos Turisticos: %d\n\n\n", nomeCidade, codCidade, populacao, area, pib, numPontosTuristicos);
        
        

    return 0;
}
