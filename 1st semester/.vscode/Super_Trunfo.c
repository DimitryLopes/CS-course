#include <stdio.h>
 
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

    //Display
    printf("Carta 1:\n");
    printf("Estado: %c\n", estadoCarta1);
    printf("Codigo: %d\n", codigoCarta1);
    printf("Nome da Cidade: %s\n", nome1);
    printf("Populacao: %d\n", populacaoCarta1);
    printf("Area: %.2f\n", tamanhoCarta1);
    printf("PIB: %.2f\n", pibCarta1);
    printf("Pontos Turisticos: %d\n\n", pontosTuristicosCarta1);

    printf("Carta 2:\n");
    printf("Estado: %c\n", estadoCarta2);
    printf("Codigo: %d\n", codigoCarta2);
    printf("Nome da Cidade: %s\n", nome2);
    printf("Populacao: %d\n", populacaoCarta2);
    printf("Area: %.2f\n", tamanhoCarta2);
    printf("PIB: %.2f\n", pibCarta2);
    printf("Pontos Turisticos: %d\n", pontosTuristicosCarta2);
}