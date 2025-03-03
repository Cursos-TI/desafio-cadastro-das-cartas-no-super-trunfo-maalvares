#include <stdio.h>

int main(){
    //variaveis para receber informações sobre cada cidade, divididas em int e float conforme necessário
    unsigned long int populacao1 = 2500000, populacao2 = 2500000;
    char nomeCidade1[20] = "Brasilia", nomeCidade2[20] =  "Florianópolis";
    int pontosTuristicos1 = 32, pontosTuristicos2 = 15;
    float area1 = 5761, pib1 = 257, area2 = 5762.8, pib2 = 253.4; 
    float densidadeDemo1, densidadeDemo2;
    int atributo1, atributo2; //variaveis usadas para escolher os atributos que serão usados
    float valorAtributo1, valorAtributo2;// variaveis usadas para determinar a soma dos atributos
    
    // calcula a densidade populacional e converte as informações para float
    densidadeDemo1 = (float)(populacao1/area1);
    densidadeDemo2 = (float)(populacao2/area2);

    //menu onde o usuário pode escolher quais atributos deseja comparar
    printf("Escolha o primeiro atributo que deseja comparar: \n");
    printf("1. POPULAÇÃO.\n");
    printf("2. ÁREA.\n");
    printf("3. PIB.\n");
    printf("4. NÚMERO DE PONTOS TURÍSTICOS.\n");
    printf("5. DENSIDADE DEMOGRÁFICA.\n");
    scanf("%d", &atributo1);

    printf("\nEscolha o segundo atributo que deseja comparar: \n");
    printf("1. POPULAÇÃO.\n");
    printf("2. ÁREA.\n");
    printf("3. PIB.\n");
    printf("4. NÚMERO DE PONTOS TURÍSTICOS.\n");
    printf("5. DENSIDADE DEMOGRÁFICA.\n");
    scanf("%d", &atributo2);

    //condicional usada para impedir o uso de atributos repetidos
    if (atributo1 != atributo2){
        switch (atributo1){
        case 1:
            printf("O primero atributo escolhido foi: População\n");
            printf("A população de %s é: %lu\n", nomeCidade1, populacao1);
            printf("A população de %s é: %lu\n", nomeCidade2, populacao2);
            printf("Resultado: ");
            
            //atribui o valor do primeiro atributo escolhido para se obter a soma
            valorAtributo1 = populacao1;
            valorAtributo2 = populacao2;

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
            printf("O primeiro atributo escolhido foi: Área\n");
            printf("A área de %s é: %.2f\n", nomeCidade1, area1);
            printf("A área de %s é: %.2f\n", nomeCidade2, area2);
            printf("Resultado: ");

            //atribui o valor do primeiro atributo escolhido para se obter a soma
            valorAtributo1 = area1;
            valorAtributo2 = area2;

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
            printf("O primeiro atributo escolhido foi: PIB\n");
            printf("O PIB de %s é: %.2f\n", nomeCidade1, pib1);
            printf("O PIB de %s é: %.2f\n", nomeCidade2, pib2);
            printf("Resultado: ");

            //atribui o valor do primeiro atributo escolhido para se obter a soma
            valorAtributo1 = pib1;
            valorAtributo2 = pib2;

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
            printf("O primeiro atributo escolhido foi: Número de Pontos Turísticos\n");
            printf("O Número de Pontos Turísticos de %s é: %d\n", nomeCidade1, pontosTuristicos1);
            printf("O Número de Pontos Turísticos de %s é: %d\n", nomeCidade2, pontosTuristicos2);
            printf("Resultado: ");

            //atribui o valor do primeiro atributo escolhido para se obter a soma
            valorAtributo1 = pontosTuristicos1;
            valorAtributo2 = pontosTuristicos2;

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
            printf("O primeiro atributo escolhido foi: Densidade Demográfica\n");
            printf("A Densidade Demográfica de %s é: %.2f\n", nomeCidade1, densidadeDemo1);
            printf("A Densidade Demográfica de %s é: %.2f\n", nomeCidade2, densidadeDemo2);
            printf("Resultado: ");

            //atribui o valor do primeiro atributo escolhido para se obter a soma
            valorAtributo1 = densidadeDemo1;
            valorAtributo2 = densidadeDemo2;

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
        switch (atributo2){
        case 1:
            printf("O segundo atributo escolhido foi: População\n");
            printf("A população de %s é: %lu\n", nomeCidade1, populacao1);
            printf("A população de %s é: %lu\n", nomeCidade2, populacao2);
            printf("Resultado: ");

            //soma o valor so segundo atributo escolhido ao primeiro
            valorAtributo1 += populacao1;
            valorAtributo2 += populacao2;

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
            printf("O segundo atributo escolhido foi: Área\n");
            printf("A área de %s é: %.2f\n", nomeCidade1, area1);
            printf("A área de %s é: %.2f\n", nomeCidade2, area2);
            printf("Resultado: ");

            //soma o valor so segundo atributo escolhido ao primeiro
            valorAtributo1 += area1;
            valorAtributo2 += area2;

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
            printf("O segundo atributo escolhido foi: PIB\n");
            printf("O PIB de %s é: %.2f\n", nomeCidade1, pib1);
            printf("O PIB de %s é: %.2f\n", nomeCidade2, pib2);
            printf("Resultado: ");

            //soma o valor so segundo atributo escolhido ao primeiro
            valorAtributo1 += pib1;
            valorAtributo2 += pib2;

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
            printf("O segundo atributo escolhido foi: Número de Pontos Turísticos\n");
            printf("O Número de Pontos Turísticos de %s é: %d\n", nomeCidade1, pontosTuristicos1);
            printf("O Número de Pontos Turísticos de %s é: %d\n", nomeCidade2, pontosTuristicos2);
            printf("Resultado: ");

            //soma o valor so segundo atributo escolhido ao primeiro
            valorAtributo1 += pontosTuristicos1;
            valorAtributo2 += pontosTuristicos2;

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
            printf("O segundo atributo escolhido foi: Densidade Demográfica\n");
            printf("A Densidade Demográfica de %s é: %.2f\n", nomeCidade1, densidadeDemo1);
            printf("A Densidade Demográfica de %s é: %.2f\n", nomeCidade2, densidadeDemo2);
            printf("Resultado: ");

            //soma o valor so segundo atributo escolhido ao primeiro
            valorAtributo1 += densidadeDemo1;
            valorAtributo2 += densidadeDemo2;

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
    }
    else{
        printf("Opção Inválida.\n");
    }

    if(valorAtributo1 == valorAtributo2){
        printf("Rodade empatada\n");
        printf("A soma da cidade %s é: %.2f\n", nomeCidade1, valorAtributo1);
        printf("A soma da cidade %s é: %.2f\n", nomeCidade2, valorAtributo2);
    }
    else if(valorAtributo1 > valorAtributo2){
        printf("A cidade %s venceu a rodade.\n", nomeCidade1);
        printf("A soma da cidade %s é: %.2f\n", nomeCidade1, valorAtributo1);
        printf("A soma da cidade %s é: %.2f\n", nomeCidade2, valorAtributo2);
    }
    else{
        printf("A cidade %s venceu a rodade.\n", nomeCidade2);
        printf("A soma da cidade %s é: %.2f\n", nomeCidade1, valorAtributo1);
        printf("A soma da cidade %s é: %.2f\n", nomeCidade2, valorAtributo2);
    }
    
    return 0;

}