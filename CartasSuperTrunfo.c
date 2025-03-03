#include <stdio.h>

int main(){
    //variaveis para receber informações sobre cada cidade, divididas em int e float conforme necessário
    unsigned long int populacao1 = 2500000, populacao2 = 2500000;
    char nomeCidade1[20] = "Brasilia", nomeCidade2[20] =  "Florianópolis";
    int pontosTuristicos1 = 32, pontosTuristicos2 = 15;
    float area1 = 5761, pib1 = 257, area2 = 5762.8, pib2 = 253.4; 
    float densidadeDemo1, densidadeDemo2;
    int escolha;
    
    // calcula a densidade populacional e converte as informações para float
    densidadeDemo1 = (float)(populacao1/area1);
    densidadeDemo2 = (float)(populacao2/area2);

    //menu onde o usuário pode escolher qual atributo deseja comparar
    printf("Escolha o atributo que deseja comparar: \n");
    printf("1. POPULAÇÃO.\n");
    printf("2. ÁREA.\n");
    printf("3. PIB.\n");
    printf("4. NÚMERO DE PONTOS TURÍSTICOS.\n");
    printf("5. DENSIDADE DEMOGRÁFICA.\n");
    scanf("%d", &escolha);

    printf("As cidades são: %s e %s\n", nomeCidade1, nomeCidade2);


    // menu switch que compara os atributos e imprime o resultado da comparação
    switch (escolha){
    case 1:
        printf("O atributo escolhido foi: População\n");
        printf("A população de %s é: %lu\n", nomeCidade1, populacao1);
        printf("A população de %s é: %lu\n", nomeCidade2, populacao2);
        printf("Resultado: ");

        if(populacao1 == populacao2){
            printf("Empate!\n");
        }
        else if (populacao1 > populacao2){
            printf("Vencedora %s!\n", nomeCidade1);
        }
        else{
            printf("Vencedora %s!\n", nomeCidade2);
        }        
        break;
    case 2:
        printf("O atributo escolhido foi: Área\n");
        printf("A área de %s é: %.2f\n", nomeCidade1, area1);
        printf("A área de %s é: %.2f\n", nomeCidade2, area2);
        printf("Resultado: ");

        if(area1 == area2){
            printf("Empate!\n");
        }
        else if (area1 > area2){
            printf("Vencedora %s!\n", nomeCidade1);
        }
        else{
            printf("Vencedora %s!\n", nomeCidade2);
        }   
        break;
    case 3:
        printf("O atributo escolhido foi: PIB\n");
        printf("O PIB de %s é: %.2f\n", nomeCidade1, pib1);
        printf("O PIB de %s é: %.2f\n", nomeCidade2, pib2);
        printf("Resultado: ");

        if(pib1 == pib2){
            printf("Empate!\n");
        }
        else if (pib1 > pib2){
            printf("Vencedora %s!\n", nomeCidade1);
        }
        else{
            printf("Vencedora %s!\n", nomeCidade2);
        }
         break;
    case 4:
        printf("O atributo escolhido foi: Número de Pontos Turísticos\n");
        printf("O Número de Pontos Turísticos de %s é: %d\n", nomeCidade1, pontosTuristicos1);
        printf("O Número de Pontos Turísticos de %s é: %d\n", nomeCidade2, pontosTuristicos2);
        printf("Resultado: ");

        if(pontosTuristicos1 == pontosTuristicos2){
            printf("Empate!\n");
        }
        else if (pontosTuristicos1 > pontosTuristicos2){
            printf("Vencedora %s!\n", nomeCidade1);
        }
        else{
            printf("Vencedora %s!\n", nomeCidade2);
        }
        break;
    case 5:
        printf("O atributo escolhido foi: Densidade Demográfica\n");
        printf("A Densidade Demográfica de %s é: %.2f\n", nomeCidade1, densidadeDemo1);
        printf("A Densidade Demográfica de %s é: %.2f\n", nomeCidade2, densidadeDemo2);
        printf("Resultado: ");
        
        if(densidadeDemo1 == densidadeDemo2){
            printf("Empate!\n");
        }
        else if (densidadeDemo1 < densidadeDemo2){
            printf("Vencedora %s!\n", nomeCidade1);
        }
        else{
            printf("Vencedora %s!\n", nomeCidade2);
        }
        break;    
    default:
        printf("Opção Inválida.\n");
        break;
    }

    return 0;

}