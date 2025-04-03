#include <stdio.h>

int main(){
  char estado1[20], estado2[20]; // variável estado sendo uma string de 20 caracteres.
  char codigo1[20], codigo2[20]; // variável código da carta, sendo uma string de 20 caracteres. (ex: MG01)
  char nome_cidade1[20], nome_cidade2[20]; // variável nome da cidade, sendo uma string de 20 caracteres.
  int populacao1, populacao2; // variável população da cidade como número inteiro.
  float area1, area2; // variável área em km² como float.
  float pib1, pib2; // variável PIB em float.
  int pontos_turisticos1, pontos_turisticos2; // variável inteira para quantidade de pontos turísticos.

  printf("Carta número 1. \n");

  printf("Digite o estado: \n");
  scanf("%s", estado1);

  printf("Digite o código da carta: \n");
  scanf("%s", codigo1);

  printf("Digite o nome da cidade: \n");
  scanf("%s", nome_cidade1);

  printf("Digite a população da cidade: \n");
  scanf("%d", &populacao1);

  printf("Digite a área da cidade em km²: \n");
  scanf("%f", &area1);

  printf("Digite o PIB: \n");
  scanf("%f", &pib1);

  printf("Digite a quantidade de pontos turísticos: \n");
  scanf("%d", &pontos_turisticos1);

  printf("Carta número 2. \n");

  printf("Digite o estado: \n");
  scanf("%s", estado2);

  printf("Digite o código da carta: \n");
  scanf("%s", codigo2);

  printf("Digite o nome da cidade: \n");
  scanf("%s", nome_cidade2);

  printf("Digite a população da cidade: \n");
  scanf("%d", &populacao2);

  printf("Digite a área da cidade em km²: \n");
  scanf("%f", &area2);

  printf("Digite o PIB: \n");
  scanf("%f", &pib2);

  printf("Digite a quantidade de pontos turísticos: \n");
  scanf("%d", &pontos_turisticos2);

  printf("Carta 01: \n");
  printf("Estado: %s\n", estado1);
  printf("Código: %s\n", codigo1);
  printf("Nome da cidade: %s\n", nome_cidade1);
  printf("População: %d\n", populacao1);
  printf("Área em km²: %.4f\n", area1);
  printf("PIB: %f\n", pib1);
  printf("Quantidade de pontos turísticos: %d\n", pontos_turisticos1);

  printf("Carta 02: \n");
  printf("Estado: %s\n", estado2);
  printf("Código: %s\n", codigo2);
  printf("Nome da cidade: %s\n", nome_cidade2);
  printf("População: %d\n", populacao2);
  printf("Área em km²: %.4f\n", area2);
  printf("PIB: %f\n", pib2);
  printf("Quantidade de pontos turísticos: %d\n", pontos_turisticos2);
}
