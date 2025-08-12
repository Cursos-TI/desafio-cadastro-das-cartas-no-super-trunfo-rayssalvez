#include <stdio.h>

int main() {
    // Carta 1.
    char letra_carta1;
    char codigo_carta1[4]; // 3 caracteres.
    char nome_cidade_carta1[30];
    unsigned long int quantidade_carta1;
    float area_carta1;
    float pib_carta1; // PIB em bilhões.
    int pontos_turisticos_carta1;

    // Carta 2.
    char letra_carta2;
    char codigo_carta2[4];
    char nome_cidade_carta2[30];
    unsigned long int quantidade_carta2;
    float area_carta2;
    float pib_carta2;
    int pontos_turisticos_carta2;

    // Resultados.
    float densidade_populacional_carta1, pib_per_capita_carta1, super_poder1;
    float densidade_populacional_carta2, pib_per_capita_carta2, super_poder2;

    // CARTA 1.
    printf("Digite a letra da carta 1:\n");
    scanf(" %c", &letra_carta1);

    printf("Digite o código da carta 1:\n");
    scanf(" %3s", codigo_carta1);

    printf("Digite o nome da cidade 1:\n");
    scanf(" %29[^\n]", nome_cidade_carta1);

    printf("Digite a população da cidade 1:\n");
    scanf("%lu", &quantidade_carta1);

    printf("Digite a área da cidade 1:\n");
    scanf("%f", &area_carta1);

    printf("Digite o PIB (em bilhões) da cidade 1:\n");
    scanf("%f", &pib_carta1);

    printf("Digite o número de pontos turísticos da cidade 1:\n");
    scanf("%d", &pontos_turisticos_carta1);

    // Cálculos Carta 1.
    if (area_carta1 != 0.0f) {
        densidade_populacional_carta1 = (float)quantidade_carta1 / area_carta1;
    } else {
        printf("Atenção: Área da Carta 1 é zero! Densidade definida como 0.00.\n");
        densidade_populacional_carta1 = 0.0f;
    }

    if (quantidade_carta1 != 0UL) {
        pib_per_capita_carta1 = (pib_carta1 * 1000000000.0f) / (float)quantidade_carta1;
    } else {
        printf("Atenção: População da Carta 1 é zero! PIB per capita definido como 0.00.\n");
        pib_per_capita_carta1 = 0.0f;
    }

    float inverso_densidade1 = 0.0f;
    if (densidade_populacional_carta1 != 0.0f) {
        inverso_densidade1 = 1.0f / densidade_populacional_carta1;
    }

    super_poder1 = (float)quantidade_carta1 + area_carta1 + pib_carta1 +
                   pib_per_capita_carta1 + inverso_densidade1 +
                   (float)pontos_turisticos_carta1;

    // CARTA 2.
    printf("\n Digite a letra da carta 2:\n");
    scanf(" %c", &letra_carta2);

    printf("Digite o código da carta 2:\n");
    scanf(" %3s", codigo_carta2);

    printf("Digite o nome da cidade 2:\n");
    scanf(" %29[^\n]", nome_cidade_carta2);

    printf("Digite a população da cidade 2:\n");
    scanf("%lu", &quantidade_carta2);

    printf("Digite a área da cidade 2:\n");
    scanf("%f", &area_carta2);

    printf("Digite o PIB (em bilhões) da cidade 2:\n");
    scanf("%f", &pib_carta2);

    printf("Digite o número de pontos turísticos da cidade 2:\n");
    scanf("%d", &pontos_turisticos_carta2);

    // Cálculos Carta 2.
    if (area_carta2 != 0.0f) {
        densidade_populacional_carta2 = (float)quantidade_carta2 / area_carta2;
    } else {
        printf("Atenção: Área da Carta 2 é zero! Densidade definida como 0.00.\n");
        densidade_populacional_carta2 = 0.0f;
    }

    if (quantidade_carta2 != 0UL) {
        pib_per_capita_carta2 = (pib_carta2 * 1000000000.0f) / (float)quantidade_carta2;
    } else {
        printf("Atenção: População da Carta 2 é zero! PIB per capita definido como 0.00.\n");
        pib_per_capita_carta2 = 0.0f;
    }

    float inverso_densidade2 = 0.0f;
    if (densidade_populacional_carta2 != 0.0f) {
        inverso_densidade2 = 1.0f / densidade_populacional_carta2;
    }

    super_poder2 = (float)quantidade_carta2 + area_carta2 + pib_carta2 +
                   pib_per_capita_carta2 + inverso_densidade2 +
                   (float)pontos_turisticos_carta2;

    // RESULTADOS.
    printf("\n Carta 1 \n");
    printf("Letra da carta: %c\n", letra_carta1);
    printf("Código: %s\n", codigo_carta1);
    printf("Nome da cidade: %s\n", nome_cidade_carta1);
    printf("População: %lu\n", quantidade_carta1);
    printf("Área: %.2f km²\n", area_carta1);
    printf("PIB: %.2f bilhões\n", pib_carta1);
    printf("Pontos Turísticos: %d\n", pontos_turisticos_carta1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional_carta1);
    printf("PIB per capita: %.2f\n", pib_per_capita_carta1);
    printf("Super Poder: %.2f\n", super_poder1);

    printf("\n Carta 2 \n");
    printf("Letra da carta: %c\n", letra_carta2);
    printf("Código: %s\n", codigo_carta2);
    printf("Nome da cidade: %s\n", nome_cidade_carta2);
    printf("População: %lu\n", quantidade_carta2);
    printf("Área: %.2f km²\n", area_carta2);
    printf("PIB: %.2f bilhões\n", pib_carta2);
    printf("Pontos Turísticos: %d\n", pontos_turisticos_carta2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional_carta2);
    printf("PIB per capita: %.2f\n", pib_per_capita_carta2);
    printf("Super Poder: %.2f\n", super_poder2);

    // COMPARAÇÃO.
    printf("\n COMPARAÇÃO \n");
    printf("População: Carta 1 venceu (%d)\n", quantidade_carta1 > quantidade_carta2);
    printf("Área: Carta 1 venceu (%d)\n", area_carta1 > area_carta2);
    printf("PIB: Carta 1 venceu (%d)\n", pib_carta1 > pib_carta2);
    printf("Pontos Turísticos: Carta 1 venceu (%d)\n", pontos_turisticos_carta1 > pontos_turisticos_carta2);
    printf("Densidade Populacional (menor vence): Carta 1 venceu (%d)\n", densidade_populacional_carta1 < densidade_populacional_carta2);
    printf("PIB per capita: Carta 1 venceu (%d)\n", pib_per_capita_carta1 > pib_per_capita_carta2);
    printf("Super Poder: Carta 1 venceu (%d)\n", super_poder1 > super_poder2);

    return 0;
}