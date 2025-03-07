#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    char estado;
    char codigo[50];
    char nome_cidade[50];
    int populacao;
    float area;
    float pib;
    int numer_turist;

    char estado1;
    char codigo1[50];
    char nome_cidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int numer_turist1;

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    printf("Bem vindo ao jogo!\n");
    printf("\nPor favor, informe as informacoes para a CARTA 1:\n");

    printf("Informe uma letra de 'A' a 'H'(representando um dos oito estados).\n");
    scanf("%s", estado);

    printf("Por favor: Informe uma letra do estado seguida de um número de 01 a 04 (ex: A01, B03).\n");
    scanf("%s", codigo);

    printf("Por favor: Informe o nome da cidade do estado informado.\n");
    scanf("%s", nome_cidade);

    printf("Digite o número de habitantes da cidade:\n");
    scanf("%d", &populacao);

    printf("Por favor: Informe a área da cidade em quilômetros:\n");
    scanf("%f", &area);

    printf("Por favor: Informe o Produto Interno Bruto da cidade:\n");
    scanf("%f", &pib);

    printf("Por fim, informe a quantidade de pontos turísticos na cidade.\n");
    scanf("%d", &numer_turist);

    // Criando os codigos da CARTA 2

    printf("\nAgora, vamos com as informacoes para a CARTA 2:\n");

    printf("Informe uma letra de 'A' a 'H'(representando um dos oito estados).\n");
    scanf("%s", estado1);

    printf("Por favor: Informe uma letra do estado seguida de um número de 01 a 04 (ex: A01, B03).\n");
    scanf("%s", codigo1);

    printf("Por favor: Informe o nome da cidade do estado informado.\n");
    scanf("%s", nome_cidade1);

    printf("Digite o número de habitantes da cidade:\n");
    scanf("%d", &populacao1);

    printf("Por favor: Informe a área da cidade em quilômetros:\n");
    scanf("%f", &area1);

    printf("Por favor: Informe o Produto Interno Bruto da cidade:\n");
    scanf("%f", &pib1);

    printf("Por fim, informe a quantidade de pontos turísticos na cidade.\n");
    scanf("%d", &numer_turist1);

    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    printf("\nVeja o resultado das cartas informadas:\n");
    printf("\nCarta 1:\n");
    printf("Estado: %s\n", estado);
    prinff("Código: %s\n", codigo);
    printf("Nome da Cidade: %s\n", nome_cidade);
    printf("População: %d\n", populacao);
    printf("Área: %f\n", area);
    printf("PIB: %f\n", pib);
    printf("Número de Pontos Turísticos: %d\n", numer_turist);

    printf("\nCarta 2:\n");
    printf("Estado: %s\n", estado1);
    prinff("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nome_cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %f\n", area1);
    printf("PIB: %f\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", numer_turist1);

    printf("\nBons Jogos!\n");

    return 0;
}
