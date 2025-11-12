#include <stdio.h>

float CalculatePIBPerCapta(float pib, int population) {
    return pib / (float)population;
}

float CalculatePopulationalDensity(int population, float area) {
    return (float)population / area;
}

void CompareValue(float value1, float value2, char message[], int menorVence) {
    if (!menorVence) {
        if (value1 > value2)
            printf("%s: Carta 1 venceu!\n", message);
        else if (value1 < value2)
            printf("%s: Carta 2 venceu!\n", message);
        else
            printf("%s: Empate!\n", message);
    } else {
        if (value1 < value2)
            printf("%s: Carta 1 venceu!\n", message);
        else if (value1 > value2)
            printf("%s: Carta 2 venceu!\n", message);
        else
            printf("%s: Empate!\n", message);
    }
}

void CompareFloatValue(float value1, float value2, char message[])
{
    if (value1 > value2)
    {
        printf("%s: Carta 1 venceu\n", message);
    }
    else if (value1 < value2)
    {
        printf("%s: Carta 2 venceu\n", message);
    }
    else
    {
        printf("%s: Empate\n", message);
    }
}


int main()
{
    // Carta 1
    char estado1[3];
    char codigo1[10];
    char nome1[50];
    int populacao1, pontosTuristicos1;
    float area1, pib1;

    printf("Digite o estado da carta 1: ");
    scanf("%s", estado1);

    printf("Digite o codigo da carta 1: ");
    scanf("%s", codigo1);

    printf("Digite o nome da cidade da carta 1: ");
    scanf("%50s", nome1);

    printf("Digite a populacao: ");
    scanf("%i", &populacao1);

    printf("Digite a area: ");
    scanf("%f", &area1);

    printf("Digite o PIB: ");
    scanf("%f", &pib1);

    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontosTuristicos1);

    // Carta 2
    char estado2[3];
    char codigo2[10];
    char nome2[50];
    int populacao2, pontosTuristicos2;
    float area2, pib2;

    printf("\nDigite o estado da carta 2: ");
    scanf("%s", estado2);

    printf("Digite o codigo da carta 2: ");
    scanf("%9s", codigo2);

    printf("Digite o nome da cidade da carta 2: ");
    scanf("%s", nome2);

    printf("Digite a populacao: ");
    scanf("%d", &populacao2);

    printf("Digite a area: ");
    scanf("%f", &area2);

    printf("Digite o PIB: ");
    scanf("%f", &pib2);

    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontosTuristicos2);

    // Cálculos
    float densidade1 = CalculatePopulationalDensity(populacao1, area1);
    float densidade2 = CalculatePopulationalDensity(populacao2, area2);
    float pibPerCapta1 = CalculatePIBPerCapta(pib1, populacao1);
    float pibPerCapta2 = CalculatePIBPerCapta(pib2, populacao2);

    // Exibição das cartas
    printf("\n===== Carta 1 =====\n");
    printf("Estado: %s\nCodigo: %s\n"
           "Cidade: %s\n"
           "Populacao: %d\n"
           "Area: %.2f km quadrados\n"
           "PIB: %.2f\n"
           "Pontos Turisticos: %d\n"
           "Densidade: %.2f hab/km quadrados\n"
           "PIB per capita: %.2f\n",
           estado1, codigo1, nome1, populacao1, area1, pib1, pontosTuristicos1, densidade1, pibPerCapta1);

    printf("\n===== Carta 2 =====\n");
    printf("Estado: %s\nCodigo: %s\n"
           "Cidade: %s\nPopulacao: %d\n"
           "Area: %.2f km quadrados\n"
           "PIB: %.2f\n"
           "Pontos Turisticos: %d\n"
           "Densidade: %.2f hab/km quadrados\n"
           "PIB per capita: %.2f\n",
           estado2, codigo2, nome2, populacao2, area2, pib2, pontosTuristicos2, densidade2, pibPerCapta2);

    // Comparação
    printf("\n===== Comparacao =====\n");
    CompareValue(pib1, pib2, "PIB", 0);
    CompareValue(densidade1, densidade2, "Densidade Populacional", 1);
    CompareValue(pibPerCapta1, pibPerCapta2, "PIB per Capita", 0);

    return 0;
}