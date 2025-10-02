#include<stdio.h>

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

    switch (compararj1){
        case 1:
            printf("Carta escolhida: Pontos Turísticos\n");
            break;

            
        case 2:
            printf("Carta escolhida: População\n");

            
        case 3:
            printf("Carta escolhida: Área em KM²\n");
            break;

        case 4:
            printf("Carta escolhida: PIB\n");
            break;

        default:
            printf("Opção inválida!\n");
    }


        printf("Escolha a categoria para comparar as cartas:\n");
        printf("1 - Pontos Turísticos\n");
        printf("2 - População\n");
        printf("3 - Área em KM²\n");
        printf("4 - PIB\n");
        scanf("%d", &compararj2);

    switch (compararj2){
        case 1:
        printf("Carta escolhida: Pontos Turísticos\n");

        if (pontos_turisticos1 > pontos_turisticos2){
                printf("Vencedor: Carta número 1:\n%s é a vencedora!\n", nome_cidade1);
            }else if (pontos_turisticos2 > pontos_turisticos1){
                printf("Vencedor: Carta numero 2:\n%s é a vencedora!\n", nome_cidade2);
            } else {
                printf("Empate! Nenhuma carta vence!\n");}
            break;

        case 2:
            printf("Carta escolhida: População\n");

        if (populacao1 > populacao2){
                printf("Vencedor: Carta número 1:\n%s é a vencedora!\n", nome_cidade1);
            }else if (populacao2 > populacao1){
                printf("Vencedor: Carta numero 2:\n%s é a vencedora!\n", nome_cidade2);
            } else {
                printf("Empate! Nenhuma carta vence!\n");}
            break;

        case 3:
            printf("Carta escolhida: Área em KM²\n");

        if (area_km1 > area_km2){
                printf("Vencedor: Carta número 1:\n%s é a vencedora!\n", nome_cidade1);
            }else if (area_km2 > area_km1){
                printf("Vencedor: Carta numero 2:\n%s é a vencedora!\n", nome_cidade2);
            } else {
                printf("Empate! Nenhuma carta vence!\n");}    
            break;
        case 4:
            printf("Carta escolhida: PIB\n");

        if (pib1 > pib2){
                printf("Vencedor: Carta número 1:\n%s é a vencedora!\n", nome_cidade1);
            }else if (pib2 > pib1){
                printf("Vencedor: Carta numero 2:\n%s é a vencedora!\n", nome_cidade2);
            } else {
                printf("Empate! Nenhuma carta vence!\n");}
            break;
        
        default:
            printf("Opção inválida!\n");}
        
      
    printf("Placar: Jogador 1: %d x Jogador 2: %d", compararj1, compararj2);
    

    


    return 0;
}