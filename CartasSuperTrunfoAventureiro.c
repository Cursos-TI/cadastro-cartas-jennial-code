#include <stdio.h>
 
int main() {
    // Carta 1
    char estado1;
    char codigo1[10];
    char cidade1[100];
    long int populacao1;
    float area1;
    float pib1;
    int pontos_turisticos1;
    float densidade1;
    float pib_per_capita1;
 
    // Carta 2
    char estado2;
    char codigo2[10];
    char cidade2[100];
    long int populacao2;
    float area2;
    float pib2;
    int pontos_turisticos2;
    float densidade2;
    float pib_per_capita2;
 
    // Leitura da Carta 1
    printf("=== Cadastro da Carta 1 ===\n");
    printf("Estado (letra): ");
    scanf(" %c", &estado1);
    printf("Código da carta: ");
    scanf("%s", codigo1);
    printf("Nome da cidade: ");
    scanf(" %[^\n]", cidade1);
    printf("População: ");
    scanf("%ld", &populacao1);
    printf("Área (km²): ");
    scanf("%f", &area1);
    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib1);
    printf("Número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos1);
 
    // Leitura da Carta 2
    printf("\n=== Cadastro da Carta 2 ===\n");
    printf("Estado (letra): ");
    scanf(" %c", &estado2);
    printf("Código da carta: ");
    scanf("%s", codigo2);
    printf("Nome da cidade: ");
    scanf(" %[^\n]", cidade2);
    printf("População: ");
    scanf("%ld", &populacao2);
    printf("Área (km²): ");
    scanf("%f", &area2);
    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib2);
    printf("Número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos2);
 
    // Cálculos da Carta 1
    densidade1       = populacao1 / area1;
    pib_per_capita1  = (pib1 * 1e9f) / populacao1;
 
    // Cálculos da Carta 2
    densidade2       = populacao2 / area2;
    pib_per_capita2  = (pib2 * 1e9f) / populacao2;
 
    // Exibição da Carta 1
    printf("\n=== Carta 1 ===\n");
    printf("Estado: %c\n",               estado1);
    printf("Código: %s\n",               codigo1);
    printf("Nome da Cidade: %s\n",       cidade1);
    printf("População: %ld\n",           populacao1);
    printf("Área: %.2f km²\n",           area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", pib_per_capita1);
 
    // Exibição da Carta 2
    printf("\n=== Carta 2 ===\n");
    printf("Estado: %c\n",               estado2);
    printf("Código: %s\n",               codigo2);
    printf("Nome da Cidade: %s\n",       cidade2);
    printf("População: %ld\n",           populacao2);
    printf("Área: %.2f km²\n",           area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pib_per_capita2);
 
    return 0;
}