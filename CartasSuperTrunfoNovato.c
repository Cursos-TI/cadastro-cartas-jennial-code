#include <stdio.h>

int main() {
    /* ---------- Variáveis da Carta 1 ---------- */
    char  estado1;                 /* Letra de 'A' a 'H'                 */
    char  codigo1[4];              /* Ex.: "A01" (3 chars + '\0')        */
    char  nomeCidade1[50];         /* Nome da cidade                     */
    int   populacao1;              /* Número de habitantes               */
    float area1;                   /* Área em km²                        */
    float pib1;                    /* PIB em bilhões de reais            */
    int   pontosTuristicos1;       /* Quantidade de pontos turísticos    */

    /* ---------- Variáveis da Carta 2 ---------- */
    char  estado2;
    char  codigo2[4];
    char  nomeCidade2[50];
    int   populacao2;
    float area2;
    float pib2;
    int   pontosTuristicos2;

    /* =====================================================
     *                  CADASTRO DA CARTA 1
     * ===================================================== */
    printf("=============================================\n");
    printf("       SUPER TRUNFO DE PAISES - CADASTRO     \n");
    printf("=============================================\n\n");

    printf("--- Cadastro da Carta 1 ---\n");

    printf("Digite a letra do Estado (A-H): ");
    scanf(" %c", &estado1);

    printf("Digite o Codigo da Carta (ex: A01): ");
    scanf("%s", codigo1);

    printf("Digite o Nome da Cidade: ");
    scanf(" %[^\n]", nomeCidade1);

    printf("Digite a Populacao: ");
    scanf("%d", &populacao1);

    printf("Digite a Area (em km2): ");
    scanf("%f", &area1);

    printf("Digite o PIB (em bilhoes de reais): ");
    scanf("%f", &pib1);

    printf("Digite o Numero de Pontos Turisticos: ");
    scanf("%d", &pontosTuristicos1);

    /* =====================================================
     *                  CADASTRO DA CARTA 2
     * ===================================================== */
    printf("\n--- Cadastro da Carta 2 ---\n");

    printf("Digite a letra do Estado (A-H): ");
    scanf(" %c", &estado2);

    printf("Digite o Codigo da Carta (ex: B02): ");
    scanf("%s", codigo2);

    printf("Digite o Nome da Cidade: ");
    scanf(" %[^\n]", nomeCidade2);

    printf("Digite a Populacao: ");
    scanf("%d", &populacao2);

    printf("Digite a Area (em km2): ");
    scanf("%f", &area2);

    printf("Digite o PIB (em bilhoes de reais): ");
    scanf("%f", &pib2);

    printf("Digite o Numero de Pontos Turisticos: ");
    scanf("%d", &pontosTuristicos2);

    /* =====================================================
     *                  EXIBIÇÃO DOS DADOS
     * ===================================================== */
    printf("\n=============================================\n");
    printf("           CARTAS CADASTRADAS                \n");
    printf("=============================================\n");

    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km2\n", area1);
    printf("PIB: %.2f bilhoes de reais\n", pib1);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos1);

    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km2\n", area2);
    printf("PIB: %.2f bilhoes de reais\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos2);

    return 0;
}