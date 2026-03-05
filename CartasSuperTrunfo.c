#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  char letra1, letra2;
  char codigo1[4], codigo2[4];
  char nome1[50], nome2[50];
  unsigned long int populacao1, populacao2;
  float densidadePopulacional1, densidadePopulacional2;
  float area1, area2;
  float pib1, pib2;
  float pibPerCapita1, pibPerCapita2;
  int pontosTuristicos1, pontosTuristicos2;
  float superPoder1, superPoder2;

  printf("Digite a letra da carta 1: ");
  scanf(" %c", &letra1);

  printf("Digite o código da carta 1: ");
  scanf(" %s", codigo1);

  printf("Digite o nome da carta 1: ");
  scanf(" %[^\n]", nome1);

  printf("Digite a população da carta 1: ");
  scanf("%lu", &populacao1);

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

  pibPerCapita1 = pib1 * 1000000000 / populacao1; //Foi adicionado o fator de multiplicação para converter o PIB para Bilhões de reais, já que o PIB é inserido em bilhões.
  pibPerCapita2 = pib2 * 1000000000 / populacao2; //Foi adicionado o fator de multiplicação para converter o PIB para Bilhões de reais, já que o PIB é inserido em bilhões.

  densidadePopulacional1 = populacao1 / area1;
  densidadePopulacional2 = populacao2 / area2;

  superPoder1 = populacao1 + area1 + pib1 + (float) pontosTuristicos1 + pibPerCapita1 + (area1 / (float) populacao1);
  superPoder2 = populacao2 + area2 + pib2 + (float) pontosTuristicos2 + pibPerCapita2 + (area2 / (float) populacao2);

  printf("\nCarta 1:\n");
  printf("Estado: %c\n", letra1);
  printf("Código: %c%s\n", letra1, codigo1);
  printf("Nome da Cidade: %s\n", nome1);
  printf("População: %lu\n", populacao1);
  printf("Área: %.2f km²\n", area1);
  printf("PIB: %.2f bilhões de reais\n", pib1);
  printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);
  printf("PIB per Capita: %.2f\n", pibPerCapita1);
  printf("Densidade Populacional: %.2f\n", densidadePopulacional1);
  printf("Super Poder: %.2f\n", superPoder1);

  printf("\nCarta 2:\n");
  printf("Estado: %c\n", letra2);
  printf("Código: %c%s\n", letra2, codigo2);
  printf("Nome da Cidade: %s\n", nome2);
  printf("População: %lu\n", populacao2);
  printf("Área: %.2f km²\n", area2);
  printf("PIB: %.2f bilhões de reais\n", pib2);
  printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);
  printf("PIB per Capita: %.2f\n", pibPerCapita2);
  printf("Densidade Populacional: %.2f\n", densidadePopulacional2);
  printf("Super Poder: %.2f\n", superPoder2);

  printf("\nComparações:\n");

  printf("A população da carta 1 é maior que a carta 2? %d Carta %d venceu\n", (populacao1 > populacao2), (populacao1 > populacao2) ? 1 : 2);
  printf("A área da carta 1 é maior que a carta 2? %d\n Carta %d venceu\n", (area1 > area2), (area1 > area2) ? 1 : 2);
  printf("O PIB da carta 1 é maior que a carta 2? %d\n Carta %d venceu\n", (pib1 > pib2), (pib1 > pib2) ? 1 : 2);
  printf("O número de pontos turísticos da carta 1 é maior que a carta 2? %d\n Carta %d venceu\n", (pontosTuristicos1 > pontosTuristicos2), (pontosTuristicos1 > pontosTuristicos2) ? 1 : 2);
  printf("O PIB per capita da carta 1 é maior que a carta 2? %d\n Carta %d venceu\n", (pibPerCapita1 > pibPerCapita2), (pibPerCapita1 > pibPerCapita2) ? 1 : 2);
  printf("A densidade populacional da carta 1 é menor que a carta 2? %d\n Carta %d venceu\n", (densidadePopulacional1 < densidadePopulacional2), (densidadePopulacional1 < densidadePopulacional2) ? 1 : 2);
  printf("O super poder da carta 1 é maior que a carta 2? %d\n Carta %d venceu\n", (superPoder1 > superPoder2), (superPoder1 > superPoder2) ? 1 : 2);
return 0;
} 
