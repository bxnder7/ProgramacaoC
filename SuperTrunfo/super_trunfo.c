#include <stdio.h>

int main(){
    // Carta 1
    char estado1 = 'C';
    char codigo1[4] = "C02";
    char nome1[50] = "Belo Horizonte";
    int populacao1 = 2523000;
    float area1 = 331.4;
    float pib1 = 104.3;
    int pontosTuristicos1 = 25;
    float densidadePopulacional1;
    float pibPerCapta1;

    // Carta 2
    char estado2 = 'F';
    char codigo2[4] = "F01";
    char nome2[50] = "Florianópólis";
    int populacao2 = 516524;
    float area2 = 675.4;
    float pib2 = 24.5;
    int pontosTuristicos2 = 40;
    float densidadePopulacional2;
    float pibPerCapta2;

    //Título do projeto
    printf("Desafio Super Trunfo Cidades!\n");

    // Leitura da Carta 1
    printf("\nDigite os dados da Carta 1:\n");
    printf("Estado (Letra de A a H): ");
    scanf(" %c", &estado1);

    printf("Código da Carta (ex: A01): ");
    scanf("%s", codigo1);

    printf("Nome da Cidade: ");
    scanf("%s", nome1);

    printf("População: ");
    scanf("%d", &populacao1);

    printf("Área (em km²): ");
    scanf("%f", &area1);

    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib1);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos1);

    densidadePopulacional1 = populacao1 / area1;

    pibPerCapta1 = pib1 / populacao1;

    // Leitura da Carta 2
    printf("\nDigite os dados da Carta 2:\n");
    printf("Estado (Letra de A a H): ");
    scanf(" %c", &estado2);

    printf("Código da Carta (ex: A01): ");
    scanf("%s", codigo2);

    printf("Nome da Cidade: ");
    scanf("%s", nome2);

    printf("População: ");
    scanf("%d", &populacao2);

    printf("Área (em km²): ");
    scanf("%f", &area2);

    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib2);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos2);

    densidadePopulacional2 = populacao2 / area2;

    pibPerCapta2 = pib2 / populacao2;

    // Exibição da Carta 1
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da cidade: %s\n", nome1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Pontos turísticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.1f hab/km²\n", densidadePopulacional1);
    printf("PIB per Capta: %.2f mil reais\n", pibPerCapta1 * 1000);

    // Exibição da Carta 2
    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da cidade: %s\n", nome2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Pontos turísticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.1f hab/km²\n", densidadePopulacional2);
    printf("PIB per Capta: %.2f mil reais\n", pibPerCapta2 * 1000);

    return 0;
}