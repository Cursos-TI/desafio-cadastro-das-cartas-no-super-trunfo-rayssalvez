#include <stdio.h>

int main() {
    
    // Declaração de variáveis da carta 1.
   char letra_carta1;
   char codigo_carta1[50];
   char estado_carta1[30];
   unsigned long int quantidade_carta1;
   float area_carta1;
   float pib_carta1;
   int pontos_turisticos_carta1;

   // Declaração de variáveis da carta 2.
   char letra_carta2;
   char codigo_carta2[50];
   char estado_carta2[30];
   unsigned long int quantidade_carta2;
   float area_carta2;
   float pib_carta2;
   int pontos_turisticos_carta2;

   // Variáveis para os resultados dos cálculos.
   float densidade_populacional_carta1;
   float pib_per_capita_carta1;
   float densidade_populacional_carta2;
   float pib_per_capita_carta2;

   // Inserindo dados da Carta 1.
   printf("Digite a letra da carta 1: \n");
   scanf(" %c", &letra_carta1);

   // Cadastro das Cartas:
   printf("Digite o código da carta 1: \n");
   scanf(" %3s", codigo_carta1);
  
   printf("Digite o estado da carta 1: \\n");
   scanf(" %29[^\n]", estado_carta1);

   printf("Digite a População da cidade 1: \n");
   scanf("%lu", &quantidade_carta1);

   printf("Digite a Área da cidade 1: \n");
   scanf("%f", &area_carta1);
 
   printf("Digite o PIB da cidade 1: \n");
   scanf("%f", &pib_carta1);

   printf("Digite o número de Pontos Turísticos da cidade 1: \n");
   scanf("%d", &pontos_turisticos_carta1);

   // Calcular a densidade populacional e PIB per capita para a carta 1.
    if (area_carta1 != 0.0f) {   densidade_populacional_carta1 = (float)quantidade_carta1 / area_carta1;} else { 
    printf("Atenção: Área da Carta 1 é zero! Densidade definida como 0.00.\\n"); densidade_populacional_carta1 = 0.0f;}
    if (quantidade_carta1 != 0UL) { // 0UL para unsigned long int
    pib_per_capita_carta1 = (pib_carta1 * 1000000000.0f) 

   // Exibindo informações e resultados da carta 1
   printf("\n--- Carta 1 ---\n");
   printf("Estado: %s\n", letra_carta1);
   printf("Código: %s\n", codigo_carta1);
   printf("Nome da cidade: %s\n", estado_carta1);
   printf("População: %lu\n", quantidade_carta1);
   printf("Área: %.2f\n", area_carta1);
   printf("PIB: %.2f\n", pib_carta1);
   printf("Número de Pontos Turísticos: %d\n", pontos_turisticos_carta1);
   printf("Densidade Populacional: %.2f\n", densidade_populacional_carta1);
   printf("PIB per capita: %.2f\n", pib_per_capita_carta1);
   printf("\n\n");

    // Inserindo dados da carta 2.
    printf("Digite a letra da carta 2: \n");
    scanf(" %c", &letra_carta2);

    printf("Digite o código da carta 2: \\n");
    scanf(" %3s", codigo_carta2);

   printf("Digite o estado da carta 2: \\n");
   scanf(" %29[^\n]", estado_carta2);

    printf("Digite a População da cidade 2: \n");
    scanf("%lu", &quantidade_carta2);

    printf("Digite a Área da cidade 2: \n");
    scanf("%f", &area_carta2);

    printf("Digite o PIB da cidade 2: \n");
    scanf("%f", &pib_carta2);

    printf("Digite o número de Pontos Turísticos da cidade 2: \n");
    scanf("%d", &pontos_turisticos_carta2);

    // Calcular a densidade populacional e PIB per capita para a carta 2.
    if (area_carta2 != 0.0f) {    densidade_populacional_carta2 = (float)quantidade_carta2 / area_carta2;} else {    
    printf("Atenção: Área da Carta 2 é zero! Densidade definida como 0.00.\\n"); densidade_populacional_carta2 = 0.0f;}
    if (quantidade_carta2 != 0UL) {    pib_per_capita_carta2 = (pib_carta2 * 1000000000.0f) / (float)quantidade_carta2;} else {
    printf("Atenção: População da Carta 2 é zero! PIB per Capita definido como 0.00.\\n");    pib_per_capita_carta2 = 0.0f;} 

    // Exibindo informações e resultados da carta 2
    printf("\n--- Carta 2 ---\n");
    printf("Estado: %s\n", letra_carta2);
    printf("Código: %s\n", codigo_carta2);
    printf("Nome da cidade: %s\n", estado_carta2);
    printf("População: %lu\n", quantidade_carta2);
    printf("Área: %.2f\n", area_carta2);
    printf("PIB: %.2f\n", pib_carta2);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos_carta2);
    printf("Densidade Populacional: %.2f\n", densidade_populacional_carta2);
    printf("PIB per capita: %.2f\n", pib_per_capita_carta2);

// Calculando Super Poder das cartas.
    float inverso_densidade_c1 = (densidade_populacional_carta1 > 0) ? (1.0f / densidade_populacional_carta1) : 0.0f;
    float inverso_densidade_c2 = (densidade_populacional_carta2 > 0) ? (1.0f / densidade_populacional_carta2) : 0.0f;

    float super_poder_carta1 = (float)quantidade_carta1 + area_carta1 + pib_carta1 +
                               pontos_turisticos_carta1 + pib_per_capita_carta1 + inverso_densidade_c1;

    float super_poder_carta2 = (float)quantidade_carta2 + area_carta2 + pib_carta2 +
                               pontos_turisticos_carta2 + pib_per_capita_carta2 + inverso_densidade_c2;

    // Comparações (1 = Carta 1 venceu, 0 = Carta 2 venceu).
    printf("\nComparacao de Cartas:\n");

    printf("Populacao: Carta 1 venceu (%d)\n", (quantidade_carta1 > quantidade_carta2) ? 1 : 0);
    printf("Area: Carta 1 venceu (%d)\n", (area_carta1 > area_carta2) ? 1 : 0);
    printf("PIB: Carta 1 venceu (%d)\n", (pib_carta1 > pib_carta2) ? 1 : 0);
    printf("Pontos Turisticos: Carta 1 venceu (%d)\n", (pontos_turisticos_carta1 > pontos_turisticos_carta2) ? 1 : 0);
    printf("PIB per Capita: Carta 1 venceu (%d)\n", (pib_per_capita_carta1 > pib_per_capita_carta2) ? 1 : 0);

    // Densidade populacional: MENOR vence.
    printf("Densidade Populacional (menor vence): Carta 1 venceu (%d)\n", (densidade_populacional_carta1 < densidade_populacional_carta2) ? 1 : 0);

    // Super Poder: MAIOR vence.
    printf("Super Poder: Carta 1 venceu (%d)\n", (super_poder_carta1 > super_poder_carta2) ? 1 : 0);

    return 0;

}