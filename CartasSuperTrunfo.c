#include <stdio.h>

int main(){
    //variaveis para receber informações sobre cada cidade, divididas em int e float conforme necessário
    char estado1, estado2;
    char codigoCarta1[4], nomeCidade1[20], codigoCarta2[4], nomeCidade2[20];
    int populacao1, pontosTuristicos1, populacao2, pontosTuristicos2;
    float area1, pib1, area2, pib2;
    float densidadePop1, densidadePop2, pibPerCap1, pibPerCap2;

    //imprime na tela a informação que o usuário deve informar sobre a cidade e aloca na variável relacionada    
    printf("Digite o estado da primeira cidade: ");
    scanf("%c", &estado1);

    printf("Digite o código da primeira cidade: ");
    scanf("%s", &codigoCarta1);

    printf("Digite o nome da primeira cidade: ");
    scanf("%s", &nomeCidade1);

    printf("Digite a população da primeira cidade: ");
    scanf("%d", &populacao1);

    printf("Digite o número de pontos turísticos da primeira cidade: ");
    scanf("%d", &pontosTuristicos1);

    printf("Digite a área da primeira cidade: ");
    scanf("%f", &area1);

    printf("Digite o PIB da primeira cidade: ");
    scanf("%f", &pib1);

    printf("Digite o estado da segunda cidade: ");
    scanf(" %c", &estado2);

    printf("Digite o código da segunda cidade: ");
    scanf("%s", &codigoCarta2);

    printf("Digite o nome da segunda cidade: ");
    scanf("%s", &nomeCidade2);

    printf("Digite a população da segunda cidade: ");
    scanf("%d", &populacao2);

    printf("Digite o número de pontos turísticos da segunda cidade: ");
    scanf("%d", &pontosTuristicos2);

    printf("Digite a área da segunda cidade: ");
    scanf("%f", &area2);

    printf("Digite o PIB da segunda cidade: ");
    scanf("%f", &pib2);
    
    // calcula a densidade populacional e converte as informações para float, pois população é int
    densidadePop1 = (float)(populacao1/area1);
    densidadePop2 = (float)(populacao2/area2);

    // calcula o PIB per capita e converte as informações para float, pois população é int
    pibPerCap1 = (float)(pib1/populacao1);
    pibPerCap2 = (float)(pib2/populacao2);

    //imprime na tela as informações sobre as cartas fornecidas pelo usuário
    printf("Carta 1:\n Estado: %c\n Código: %s\n Nome da cidade: %s\n", estado1, codigoCarta1, nomeCidade1);
    printf(" População: %d\n Pontos Turísticos: %d\n", populacao1, pontosTuristicos1);
    printf(" Área: %.2f Km²\n PIB: %.2f bilhões de reais\n", area1, pib1);
    printf(" A densidade populacional é: %.2f hab/km2\n O PIB per Capita é: %.2f reais\n\n", densidadePop1, pibPerCap1);

    printf("Carta 2:\n Estado: %c\n Código: %s\n Nome da cidade: %s\n", estado2, codigoCarta2, nomeCidade2);
    printf(" População: %d\n Pontos Turísticos: %d\n", populacao2, pontosTuristicos2);
    printf(" Área: %.2f Km²\n PIB: %.2f bilhões de reais\n", area2, pib2);
    printf(" A densidade populacional é: %.2f hab/km2\n O PIB per Capita é: %.2f reais\n", densidadePop2, pibPerCap2);

    return 0;

}