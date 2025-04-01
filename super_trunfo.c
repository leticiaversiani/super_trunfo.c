#include <stdio.h>

int main(){
  char estado[20]; // variável estado sendo uma string de 20 caracteres.
  char codigo[20]; // variável código da carta, sendo uma string de 20 caracteres. (ex: MG01)
  char nome_cidade[20]; // variável nome da cidade, sendo uma string de 20 caracteres.
  int populacao; // variável população da cidade como número inteiro.
  float area; // variável área em km² como float.
  float pib; // variável PIB em float.
  int pontos_turisticos; // variável inteira para quantidade de pontos turísticos.

  printf("Carta número 1. \n");

  printf("Digite o estado: \n");
  scanf("%s", estado);

  printf("Digite o código da carta: \n");
  scanf("%s", codigo);

  printf("Digite o nome da cidade: \n");
  scanf("%s", nome_cidade);

  printf("Digite a população da cidade: \n");
  scanf("%d", &populacao);

  printf("Digite a área da cidade em km²: \n");
  scanf("%f", &area);

  printf("Digite o PIB: \n");
  scanf("%f", &pib);

  printf("Digite a quantidade de pontos turísticos: \n");
  scanf("%d", &pontos_turisticos);

  printf("Carta 01: \n");
  printf("Estado: %s\n", estado);
  printf("Código: %s\n", codigo);
  printf("Nome da cidade: %s\n", nome_cidade);
  printf("População: %d\n", populacao);
  printf("Área em km²: %.4f\n", area);
  printf("PIB: %f\n", pib);
  printf("Quantidade de pontos turísticos: %d\n", pontos_turisticos);

  printf("Carta número 2. \n");

  printf("Digite o estado: \n");
  scanf("%s", estado);

  printf("Digite o código da carta: \n");
  scanf("%s", codigo);

  printf("Digite o nome da cidade: \n");
  scanf("%s", nome_cidade);

  printf("Digite a população da cidade: \n");
  scanf("%d", &populacao);

  printf("Digite a área da cidade em km²: \n");
  scanf("%f", &area);

  printf("Digite o PIB: \n");
  scanf("%f", &pib);

  printf("Digite a quantidade de pontos turísticos: \n");
  scanf("%d", &pontos_turisticos);

  printf("Carta 02: \n");
  printf("Estado: %s\n", estado);
  printf("Código: %s\n", codigo);
  printf("Nome da cidade: %s\n", nome_cidade);
  printf("População: %d\n", populacao);
  printf("Área em km²: %.4f\n", area);
  printf("PIB: %f\n", pib);
  printf("Quantidade de pontos turísticos: %d\n", pontos_turisticos);
}