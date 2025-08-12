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
    printf("Ateção: População da Carta 2 é zero! PIB per Capita definido como 0.00.\\n");    pib_per_capita_carta2 = 0.0f;} 

    char estado[50];
    char codigo[5];
    char nome[50];
    unsigned long int populacao; // unsigned long int pra aguentar números grandes
    float area;
    float pib;
    int pontos_turisticos;
    float densidade;
    float pib_per_capita;
    float super_poder;

float calcular_densidade(unsigned long int populacao, float area) 
    return populacao / area;

float calcular_pib_per_capita(float pib, unsigned long int populacao) 
    return pib / populacao;

float calcular_super_poder(struct Carta c) {
    // inverso da densidade (quanto menor, melhor) -> (1 / densidade)
    float inverso_densidade = 1.0 / c.densidade;
    return c.populacao + c.area + c.pontos_turisticos + c.pib_per_capita + inverso_densidade;


    // Entrada de dados carta 1.
    printf("Digite o estado da carta 1: ");
    scanf("%s", carta1.estado);
    printf("Digite o código da carta 1: ");
    scanf("%s", carta1.codigo);
    printf("Digite o nome da carta 1: ");
    scanf(" %[^\n]", carta1.nome);
    printf("Digite a populacao da carta 1: ");
    scanf("%lu", &carta1.populacao);
    printf("Digite a area da carta 1: ");
    scanf("%f", &carta1.area);
    printf("Digite o PIB da carta 1: ");
    scanf("%f", &carta1.pib);
    printf("Digite o numero de pontos turisticos da carta 1: ");
    scanf("%d", &carta1.pontos_turisticos);

    // Calcula os valores extras da carta 1.
    carta1.densidade = calcular_densidade(carta1.populacao, carta1.area);
    carta1.pib_per_capita = calcular_pib_per_capita(carta1.pib, carta1.populacao);
    carta1.super_poder = calcular_super_poder(carta1);

    // Entrada de dados carta 2.
    printf("\nDigite o estado da carta 2: ");
    scanf("%s", carta2.estado);
    printf("Digite o código da carta 2: ");
    scanf("%s", carta2.codigo);
    printf("Digite o nome da carta 2: ");
    scanf(" %[^\n]", carta2.nome);
    printf("Digite a populacao da carta 2: ");
    scanf("%lu", &carta2.populacao);
    printf("Digite a area da carta 2: ");
    scanf("%f", &carta2.area);
    printf("Digite o PIB da carta 2: ");
    scanf("%f", &carta2.pib);
    printf("Digite o numero de pontos turisticos da carta 2: ");
    scanf("%d", &carta2.pontos_turisticos);

    // Calcula os valores extras da carta 2.
    carta2.densidade = calcular_densidade(carta2.populacao, carta2.area);
    carta2.pib_per_capita = calcular_pib_per_capita(carta2.pib, carta2.populacao);
    carta2.super_poder = calcular_super_poder(carta2);

    // Comparações.
    printf("\nComparacao de Cartas:\n");

    // População.
    printf("Populacao: Carta 1 venceu (%d)\n", carta1.populacao > carta2.populacao);

    // Área.
    printf("Area: Carta 1 venceu (%d)\n", carta1.area > carta2.area);

    // PIB.
    printf("PIB: Carta 1 venceu (%d)\n", carta1.pib > carta2.pib);

    // Pontos Turísticos.
    printf("Pontos Turisticos: Carta 1 venceu (%d)\n", carta1.pontos_turisticos > carta2.pontos_turisticos);

    // Densidade Populacional (menor vence).
    printf("Densidade Populacional: Carta 1 venceu (%d)\n", carta1.densidade < carta2.densidade);

    // PIB per capita.
    printf("PIB per Capita: Carta 1 venceu (%d)\n", carta1.pib_per_capita > carta2.pib_per_capita);

    // Super Poder.
    printf("Super Poder: Carta 1 venceu (%d)\n", carta1.super_poder > carta2.super_poder);

    return 0;
}