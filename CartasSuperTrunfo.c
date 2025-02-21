#include <stdio.h>

int main() {
    //variaveis para receber informações sobre cada cidade, divididas em int e float conforme necessário
    int populacao1, pontosTuristicos1, populacao2, pontosTuristicos2;
    float area1, pib1, area2, pib2;

    //imprime na tela a informação que o usuário deve informar sobre a cidade e aloca na variável relacionada
    printf("Digite a população da primeira cidade: ");
    scanf("%d", &populacao1);

    printf("Digite o número de pontos turísticos da primeira cidade: ");
    scanf("%d", &pontosTuristicos1);

    printf("Digite a área da primeira cidade: ");
    scanf("%f", &area1);

    printf("Digite o PIB da primeira cidade: ");
    scanf("%f", &pib1);

    printf("Digite a população da segunda cidade: ");
    scanf("%d", &populacao2);

    printf("Digite o número de pontos turísticos da segunda cidade: ");
    scanf("%d", &pontosTuristicos2);

    printf("Digite a área da segunda cidade: ");
    scanf("%f", &area2);

    printf("Digite o PIB da segunda cidade: ");
    scanf("%f", &pib2);
    
    //imprime na tela as informações sobre as cartas fornecidas pelo usuário
    printf("Carta 1:\n População: %d\n Pontos Turísticos: %d\n", populacao1, pontosTuristicos1);
    printf(" Área: %.2f Km²\n PIB: %.2f bilhões de reais\n\n", area1, pib1);

    printf("Carta 2:\n População: %d\n Pontos Turísticos: %d\n", populacao2, pontosTuristicos2);
    printf(" Área: %.2f Km²\n PIB: %.2f bilhões de reais\n", area2, pib2);

    return 0;
}
