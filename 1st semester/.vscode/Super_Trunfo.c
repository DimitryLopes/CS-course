#include <stdio.h>

float CalculatePIBPerCapta(float pib, int population)
{
   return pib / (float)population;
}

float CalculatePopulationalDensity(int population, float area)
{
    return (float)population / area;
}

float CalculatePower(float population, float area, float pib, int touristicSpots, float density, float pibPerCapta)
{
    float inverseDensity = 1/density;
    return  population + area + pib + (float)touristicSpots + pibPerCapta + inverseDensity;
}

void CompareValue(float value1, float value2, char message[])
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
    //Carta 1
    char estadoCarta1;
    printf("Digite o estado da carta 1: ");
    scanf(" %c", &estadoCarta1);

    int codigoCarta1;
    printf("Digite o codigo da carta 1: ");
    scanf("%d", &codigoCarta1);

    char nome1[50];
    printf("Digite o nome da carta 1: ");
    scanf("%S", nome1);

    int populacaoCarta1;
    printf("Digite a populacao da carta 1: ");
    scanf("%d", &populacaoCarta1);

    float tamanhoCarta1;
    printf("Digite o tamanho da cidade 1: ");
    scanf("%f", &tamanhoCarta1);

    float pibCarta1;
    printf("Digite o PIB da cidade 1: ");
    scanf("%f", &pibCarta1);

    int pontosTuristicosCarta1;
    printf("Digite a quantidade de pontos turisticos da carta 1: ");
    scanf("%d", &pontosTuristicosCarta1);

    //Carta 2
    char estadoCarta2;
    printf("Digite o estado da carta 2: ");
    scanf(" %c", &estadoCarta2);

    int codigoCarta2;
    printf("Digite o codigo da carta 2: ");
    scanf("%d", &codigoCarta2);

    char nome2[50];
    printf("Digite o nome da carta 2: ");
    scanf("%S", nome2);

    int populacaoCarta2;
    printf("Digite a populacao da carta 2: ");
    scanf("%d", &populacaoCarta2);

    float tamanhoCarta2;
    printf("Digite o tamanho da cidade 2: ");
    scanf("%f", &tamanhoCarta2);

    float pibCarta2;
    printf("Digite o PIB da cidade 2: ");
    scanf("%f", &pibCarta2);

    int pontosTuristicosCarta2;
    printf("Digite a quantidade de pontos turisticos da carta 2: ");
    scanf("%d", &pontosTuristicosCarta2);

    float pibPerCaptaCarta1 = CalculatePIBPerCapta(pibCarta1, populacaoCarta1);
    float pibPerCaptaCarta2 = CalculatePIBPerCapta(pibCarta2, populacaoCarta2);
    float densityCarta1 = CalculatePopulationalDensity(populacaoCarta1, tamanhoCarta1);
    float densityCarta2 = CalculatePopulationalDensity(populacaoCarta2, tamanhoCarta2);

    //Display
    printf("-- Carta 1:\n --");
    printf("Estado: %c\n", estadoCarta1);
    printf("Codigo: %d\n", codigoCarta1);
    printf("Nome da Cidade: %s\n", nome1);
    printf("Populacao: %d\n", populacaoCarta1);
    printf("Area: %.2f km quadrados\n", tamanhoCarta1);
    printf("PIB: %.2f bilhoes de reais \n", pibCarta1);
    printf("Pontos Turisticos: %d\n", pontosTuristicosCarta1);
    printf("Densidade populacional: %.3f hab/km quadrado \n", densityCarta1);
    printf("PIB per capta: %.2f reais \n", pibPerCaptaCarta1);

    printf("-- Carta 2:\n -- ");
    printf("Estado: %c\n", estadoCarta2);
    printf("Codigo: %d\n", codigoCarta2);
    printf("Nome da Cidade: %s\n", nome2);
    printf("Populacao: %d\n", populacaoCarta2);
    printf("Area: %.2f km quadrados\n", tamanhoCarta2);
    printf("PIB: %.2f bilhoes de reais\n", pibCarta2);
    printf("Pontos Turisticos: %d\n", pontosTuristicosCarta2);
    printf("Densidade populacional: %.3f hab/km quadrado \n", densityCarta2);
    printf("PIB per capta: %.2f reais \n", pibPerCaptaCarta2);

    //jogo
printf("-- Jogo --\n");
    CompareValue(populacaoCarta1, populacaoCarta2, "Populacao");
    CompareValue(codigoCarta1, codigoCarta2, "Codigo");
    CompareValue(tamanhoCarta1, tamanhoCarta2, "Tamanho");
    CompareValue(pibCarta1, pibCarta2, "PIB");
    CompareValue(pontosTuristicosCarta1, pontosTuristicosCarta2, "Pontos Turisticos");
    CompareValue(densityCarta2, densityCarta1, "Densidade");
    CompareValue(pibPerCaptaCarta1, pibPerCaptaCarta2, "PIB per capta");
}