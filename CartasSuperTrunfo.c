#include <stdio.h>

int main() {
    // declarando variáveis carta 1
    char estado1; 
    char codigo1[5];
    char nomeEstado1[12];
    int populacao1, pontosTuristicos1;
    float area1, pib1;

    // declarando variáveis carta 2
    char estado2;
    char codigo2[5]; 
    char nomeEstado2[12];
    int populacao2, pontosTuristicos2;
    float area2, pib2;

    // entrada de dados para a primeira carta
    printf("Insira os dados da Carta 1:\n");
    printf("Estado: ");
    scanf(" %s", &estado1);
    printf("Código da Carta: ");
    scanf("%s", codigo1);
    printf("Nome do Estado: ");
    scanf(" %s", nomeEstado1); 
    printf("População: ");
    scanf("%d", &populacao1);
    printf("Área em km²: ");
    scanf("%f", &area1);
    printf("PIB: ");
    scanf("%f", &pib1);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos1);

    // entrada de dados para a segunda carta
    printf("\nInsira os dados da Carta 2:\n");
    printf("Estado: ");
    scanf(" %s", &estado2);
    printf("Código da Carta: ");
    scanf("%s", codigo2);
    printf("Nome do Estado: ");
    scanf(" %[^\n]", nomeEstado2);
    printf("População: ");
    scanf("%d", &populacao2);
    printf("Área em km²: ");
    scanf("%f", &area2);
    printf("PIB: ");
    scanf("%f", &pib2);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos2);

    // exibição dos dados das cartas
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome do Estado: %s\n", nomeEstado1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f \n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);

    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome do Estado: %s\n", nomeEstado2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f \n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);

    return 0;
}
