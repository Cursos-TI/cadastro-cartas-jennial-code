#include <stdio.h>

int main() {
    /* ── Carta 1 ── */
    char estado1, codigo1[4], nome1[50];
    unsigned long int populacao1;
    float area1, pib1, densidade1, pib_per_capita1, super_poder1;
    int pontos_turisticos1;

    /* ── Carta 2 ── */
    char estado2, codigo2[4], nome2[50];
    unsigned long int populacao2;
    float area2, pib2, densidade2, pib_per_capita2, super_poder2;
    int pontos_turisticos2;

    /* ════════════════════════════════════════
       LEITURA — CARTA 1
    ════════════════════════════════════════ */
    printf("=== CADASTRO DA CARTA 1 ===\n");

    printf("Estado (letra A-H): ");
    scanf(" %c", &estado1);

    printf("Codigo da carta (ex: A01): ");
    scanf("%s", codigo1);

    printf("Nome da cidade: ");
    scanf(" %[^\n]", nome1);

    printf("Populacao: ");
    scanf("%lu", &populacao1);

    printf("Area (km2): ");
    scanf("%f", &area1);

    printf("PIB (em bilhoes de reais): ");
    scanf("%f", &pib1);

    printf("Numero de pontos turisticos: ");
    scanf("%d", &pontos_turisticos1);

    /* ════════════════════════════════════════
       LEITURA — CARTA 2
    ════════════════════════════════════════ */
    printf("\n=== CADASTRO DA CARTA 2 ===\n");

    printf("Estado (letra A-H): ");
    scanf(" %c", &estado2);

    printf("Codigo da carta (ex: B01): ");
    scanf("%s", codigo2);

    printf("Nome da cidade: ");
    scanf(" %[^\n]", nome2);

    printf("Populacao: ");
    scanf("%lu", &populacao2);

    printf("Area (km2): ");
    scanf("%f", &area2);

    printf("PIB (em bilhoes de reais): ");
    scanf("%f", &pib2);

    printf("Numero de pontos turisticos: ");
    scanf("%d", &pontos_turisticos2);

    /* ════════════════════════════════════════
       CÁLCULOS — DENSIDADE E PIB PER CAPITA
    ════════════════════════════════════════ */

    /* densidade = populacao / area
       Atenção: populacao é unsigned long int → cast para float */
    densidade1      = (float)populacao1 / area1;
    densidade2      = (float)populacao2 / area2;

    /* pib per capita = PIB (em bilhoes) * 1e9 / populacao */
    pib_per_capita1 = (pib1 * 1e9f) / (float)populacao1;
    pib_per_capita2 = (pib2 * 1e9f) / (float)populacao2;

    /* ════════════════════════════════════════
       CÁLCULO — SUPER PODER
       soma: populacao + area + pib + pontos_turisticos
             + pib_per_capita + (1 / densidade)
       Regra: 1/densidade — menor densidade → maior poder
    ════════════════════════════════════════ */
    super_poder1 = (float)populacao1
                 + area1
                 + pib1
                 + (float)pontos_turisticos1
                 + pib_per_capita1
                 + (1.0f / densidade1);

    super_poder2 = (float)populacao2
                 + area2
                 + pib2
                 + (float)pontos_turisticos2
                 + pib_per_capita2
                 + (1.0f / densidade2);

    /* ════════════════════════════════════════
       EXIBIÇÃO DOS DADOS DAS CARTAS
    ════════════════════════════════════════ */
    printf("\n=== DADOS DA CARTA 1 ===\n");
    printf("Estado:                %c\n",     estado1);
    printf("Codigo:                %s\n",     codigo1);
    printf("Nome:                  %s\n",     nome1);
    printf("Populacao:             %lu hab\n",populacao1);
    printf("Area:                  %.2f km2\n",area1);
    printf("PIB:                   %.2f bilhoes de reais\n", pib1);
    printf("Pontos turisticos:     %d\n",     pontos_turisticos1);
    printf("Densidade populacional:%.2f hab/km2\n", densidade1);
    printf("PIB per capita:        R$ %.2f\n", pib_per_capita1);
    printf("Super Poder:           %.2f\n",   super_poder1);

    printf("\n=== DADOS DA CARTA 2 ===\n");
    printf("Estado:                %c\n",     estado2);
    printf("Codigo:                %s\n",     codigo2);
    printf("Nome:                  %s\n",     nome2);
    printf("Populacao:             %lu hab\n",populacao2);
    printf("Area:                  %.2f km2\n",area2);
    printf("PIB:                   %.2f bilhoes de reais\n", pib2);
    printf("Pontos turisticos:     %d\n",     pontos_turisticos2);
    printf("Densidade populacional:%.2f hab/km2\n", densidade2);
    printf("PIB per capita:        R$ %.2f\n", pib_per_capita2);
    printf("Super Poder:           %.2f\n",   super_poder2);

    /* ════════════════════════════════════════
       COMPARAÇÕES ATRIBUTO A ATRIBUTO
       Convenção de saída:
         1 = Carta 1 vence
         0 = Carta 2 vence
       Regra especial: densidade → MENOR vence
    ════════════════════════════════════════ */
    printf("\n=== Comparacao de Cartas ===\n");

    /* Cada expressão relacional retorna 1 (verdadeiro) ou 0 (falso).
       Para densidade invertemos: Carta 1 vence se densidade1 < densidade2. */

    printf("Populacao:              Carta %d venceu (%d)\n",
           (populacao1 > populacao2) ? 1 : 2,
           populacao1 > populacao2);

    printf("Area:                   Carta %d venceu (%d)\n",
           (area1 > area2) ? 1 : 2,
           area1 > area2);

    printf("PIB:                    Carta %d venceu (%d)\n",
           (pib1 > pib2) ? 1 : 2,
           pib1 > pib2);

    printf("Pontos Turisticos:      Carta %d venceu (%d)\n",
           (pontos_turisticos1 > pontos_turisticos2) ? 1 : 2,
           pontos_turisticos1 > pontos_turisticos2);

    /* Densidade: menor valor vence → Carta 1 vence se densidade1 < densidade2 */
    printf("Densidade Populacional: Carta %d venceu (%d)\n",
           (densidade1 < densidade2) ? 1 : 2,
           densidade1 < densidade2);

    printf("PIB per Capita:         Carta %d venceu (%d)\n",
           (pib_per_capita1 > pib_per_capita2) ? 1 : 2,
           pib_per_capita1 > pib_per_capita2);

    printf("Super Poder:            Carta %d venceu (%d)\n",
           (super_poder1 > super_poder2) ? 1 : 2,
           super_poder1 > super_poder2);

    return 0;
}