#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  char letra1, letra2;
  char codigo1[4], codigo2[4];
  char nome1[50], nome2[50];
  int populacao1, populacao2;
  float area1, area2;
  float pib1, pib2;
  int pontosTuristicos1, pontosTuristicos2;

  printf("Digite a letra da carta 1: ");
  scanf(" %c", &letra1);

  printf("Digite o código da carta 1: ");
  scanf(" %s", codigo1);

  printf("Digite o nome da carta 1: ");
  scanf(" %[^\n]", nome1);

  printf("Digite a população da carta 1: ");
  scanf("%d", &populacao1);

  printf("Digite a área da carta 1: ");
  scanf("%f", &area1);

  printf("Digite o PIB da carta 1: ");
  scanf("%f", &pib1);

  printf("Digite os pontos turísticos da carta 1: ");
  scanf("%d", &pontosTuristicos1);

  printf("Digite a letra da carta 2: ");
  scanf(" %c", &letra2);

  printf("Digite o código da carta 2: ");
  scanf(" %s", codigo2);

  printf("Digite o nome da carta 2: "); 
  scanf(" %[^\n]", nome2);

  printf("Digite a população da carta 2: ");
  scanf("%d", &populacao2);

  printf("Digite a área da carta 2: ");
  scanf("%f", &area2);

  printf("Digite o PIB da carta 2: ");
  scanf("%f", &pib2);

  printf("Digite os pontos turísticos da carta 2: ");
  scanf("%d", &pontosTuristicos2);

  printf("\nCarta 1:\n");
  printf("Estado: %c\n", letra1);
  printf("Código: %c%s\n", letra1, codigo1);
  printf("Nome da Cidade: %s\n", nome1);
  printf("População: %d\n", populacao1);
  printf("Área: %.2f km²\n", area1);
  printf("PIB: %.2f bilhões de reais\n", pib1);
  printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);

  printf("\nCarta 2:\n");
  printf("Estado: %c\n", letra2);
  printf("Código: %c%s\n", letra2, codigo2);
  printf("Nome da Cidade: %s\n", nome2);
  printf("População: %d\n", populacao2);
  printf("Área: %.2f km²\n", area2);
  printf("PIB: %.2f bilhões de reais\n", pib2);
  printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);

return 0;
} 
