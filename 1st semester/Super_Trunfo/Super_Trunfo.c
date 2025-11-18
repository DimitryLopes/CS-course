#include <stdio.h>

float CalculatePIBPerCapta(float pib, int population) {
    return pib / (float)population;
}

float CalculatePopulationalDensity(int population, float area) {
    return (float)population / area;
}

void CompareValue(float value1, float value2, char message[], int menorVence, char nome1[], char nome2[]) {
    printf("\n--- Comparando atributo: %s ---\n", message);
    printf("%s: %.2f\n", nome1, value1);
    printf("%s: %.2f\n", nome2, value2);

    if (!menorVence) {
        if (value1 > value2)
            printf("Resultado: Carta 1 (%s) venceu!\n", nome1);
        else if (value1 < value2)
            printf("Resultado: Carta 2 (%s) venceu!\n", nome2);
        else
            printf("Resultado: Empate!\n");
    } else {
        if (value1 < value2)
            printf("Resultado: Carta 1 (%s) venceu!\n", nome1);
        else if (value1 > value2)
            printf("Resultado: Carta 2 (%s) venceu!\n", nome2);
        else
            printf("Resultado: Empate!\n");
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

    int opcao;

    do {
        printf("\n===== MENU DE COMPARACAO =====\n");
        printf("1 - Populacao\n");
        printf("2 - Area\n");
        printf("3 - PIB\n");
        printf("4 - Numero de pontos turisticos\n");
        printf("5 - Densidade demografica\n");
        printf("0 - Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                CompareValue(populacao1, populacao2, "Populacao", 0, nome1, nome2);
                break;
            case 2:
                CompareValue(area1, area2, "Area", 0, nome1, nome2);
                break;
            case 3:
                CompareValue(pib1, pib2, "PIB", 0, nome1, nome2);
                break;
            case 4:
                CompareValue(pontosTuristicos1, pontosTuristicos2, "Pontos Turisticos", 0, nome1, nome2);
                break;
            case 5:
                CompareValue(densidade1, densidade2, "Densidade Demografica", 1, nome1, nome2);
                break;
            case 0:
                printf("Encerrando o programa...\n");
                break;
            default:
                printf("Opcao invalida! Tente novamente.\n");
        }
    } while (opcao != 0);

    return 0;
}