#include<stdio.h>
#include<stdlib.h> // biblioteca para usar o system("clear");

int main(){ 

    char letra_estado1, letra_estado2;
    char cod_carta1 [5], cod_carta2[5];
    char nome_cidade1 [50], nome_cidade2 [50];
    int populacao1, populacao2;
    int pontos_turisticos1, pontos_turisticos2;
    float area_km1, area_km2;
    float pib1, pib2;
    float densidade_pop1, densidade_pop2;
    float pib_percapita1, pib_percapita2;
    int compararj1, compararj2;
    int soma1, soma2;
 

    //carta numero 1
    printf("Digite as informacões da carta número 1\n");

    printf("Digite uma letra: \n");
    scanf("%c", &letra_estado1);

    printf("código da carta: \n");
    scanf("%s", cod_carta1);

    //Digitar apenas sem espaço
    printf("Nome da cidade: \n");
    scanf("%s", nome_cidade1);

    printf("Quantidade da população: \n");
    scanf("%d", &populacao1);

    printf("Área em KM²: \n");
    scanf("%f", &area_km1);

    printf("Digite o PIB: \n");
    scanf("%f", &pib1);

    printf("Pontos turísticos: \n");
    scanf("%d", &pontos_turisticos1);

    system ("clear"); //limpar a tela carta 1

    //calculo da densidade populacional e do pib per capita
    densidade_pop1 = populacao1 / area_km1;
    pib_percapita1 = pib1 / populacao1;

    printf("--------------------------------\n\n");

    //carta numero 2
    printf("Digite as informacões da carta número 2\n");

    printf("Digite uma letra: \n");
    scanf(" %c", &letra_estado2);

    printf("código da carta: \n");
    scanf("%s", cod_carta2);

    //Digitar apenas sem espaço
    printf("Nome da cidade: \n");
    scanf(" %s", nome_cidade2);

    printf("Quantidade da população: \n");
    scanf("%d", &populacao2);

    printf("Área em KM²: \n");
    scanf("%f", &area_km2);

    printf("Digite o PIB: \n");
    scanf("%f", &pib2);

    printf("Pontos turísticos: \n");
    scanf("%d", &pontos_turisticos2);

    //calculo da densidade populacional e do pib per capita
    densidade_pop2 = populacao2 / area_km2;
    pib_percapita2 = pib2 / populacao2;

    printf("--------------------------------\n\n");

    

    printf("Escolha a categoria para comparar as cartas:\n");
    printf("1 - Pontos Turísticos\n");
    printf("2 - População\n");
    printf("3 - Área em KM²\n");
    printf("4 - PIB\n");
    scanf("%d", &compararj1);

    printf("Jogador 2, é a sua vez de escolher a categoria.\n");
    
    printf("Escolha a categoria para comparar as cartas:\n");
    printf("1 - Pontos Turísticos\n");
    printf("2 - População\n");
    printf("3 - Área em KM²\n");
    printf("4 - PIB\n");
    scanf("%d", &compararj2);

    switch (compararj1){
        case 1:
            printf("Carta escolhida: Pontos Turísticos\n");
            break;

            
        case 2:
            printf("Carta escolhida: População\n");
            break;

            
        case 3:
            printf("Carta escolhida: Área em KM²\n");
            break;

        case 4:
            printf("Carta escolhida: PIB\n");
            break;

        default:
            printf("Opção inválida!\n");
    }
    
    if (compararj1 == compararj2){
        printf("Empate na escolha da categoria! Escolha novamente.\n");
        
    } else{
        

    switch (compararj2){
        case 1:
        printf("Carta escolhida: Pontos Turísticos\n");
            if (pontos_turisticos1 > pontos_turisticos2)
            {
                printf("Jogador 1 venceu!\n");
            } else if (pontos_turisticos1 == pontos_turisticos2){
                printf("Empate!\n");
            } else {
                printf("Jogador 2 Venceu\n");
            }
            break;

        case 2:
        printf("Carta escolhida: População\n");
            if (populacao1 > populacao2)
            {
                printf("Jogador 1 venceu!\n");
            } else if (populacao1 == populacao2){
                printf("Empate!\n");
            } else {
                printf("Jogador 2 Venceu\n");
            }
        
            break;

        case 3:
        printf("Carta escolhida: Área em KM²\n");
            if (area_km1 > area_km2)
            {
                printf("Jogador 1 venceu!\n");
            } else if (area_km1 == area_km2){
                printf("Empate!\n");
            } else {
                printf("Jogador 2 Venceu\n");
            }
            break;

        case 4:
        printf("Carta escolhida: PIB\n");
            if (pib1 > pib2)
            {
                printf("Jogador 1 venceu!\n");
            } else if (pib1 == pib2){
                printf("Empate!\n");
            } else {
                printf("Jogador 2 Venceu\n");
            }
       
        default:
            printf("Opção inválida!\n");}}

        printf("--------------------------------\n\n");
    
    soma1 = pontos_turisticos1 + populacao1 + area_km1 + pib1;
    soma2 = pontos_turisticos2 + populacao2 + area_km2 + pib2;

    if (soma1 > soma2){
        printf("Jogador 1 é o grande vencedor com a soma total de %d pontos!\n", soma1);
    } else if (soma1 == soma2){
        printf("Empate na soma total de pontos: %d pontos!\n", soma1);
    } else {
        printf("Jogador 2 é o grande vencedor com a soma total de %d pontos!\n", soma2);
    }

    printf("--------------------------------\n\n");
    //mostrar os detalhes das cartas 
    printf("Detalhes da carta 1:\n");
    printf("Letra do estado: %c\n", letra_estado1);
    printf("Código da carta: %s\n", cod_carta1);
    printf("Nome da cidade: %s\n", nome_cidade1);
    printf("População: %d\n", populacao1);
    printf("Área em KM²: %.2f\n", area_km1);
    printf("PIB: %.2f\n", pib1);
    printf("Pontos turísticos: %d\n", pontos_turisticos1);
    printf("Densidade populacional: %.2f\n", densidade_pop1);
    printf("PIB per capita: %.2f\n", pib_percapita1);

    printf("--------------------------------\n\n");

    printf("Detalhes da carta 2:\n");
    printf("Letra do estado: %c\n", letra_estado2);
    printf("Código da carta: %s\n", cod_carta2);
    printf("Nome da cidade: %s\n", nome_cidade2);
    printf("População: %d\n", populacao2);
    printf("Área em KM²: %.2f\n", area_km2);
    printf("PIB: %.2f\n", pib2);
    printf("Pontos turísticos: %d\n", pontos_turisticos2);
    printf("Densidade populacional: %.2f\n", densidade_pop2);
    printf("PIB per capita: %.2f\n", pib_percapita2);
     




   


    return 0;
}