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
    int resultado1, resultado2, resultado3, resultado4;
 

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
    
    if (compararj1 == compararj2){
        printf("Empate na escolha da categoria! Escolha novamente.\n");
        
    } else{
        printf("Jogador 2, é a sua vez de escolher a categoria.\n");
    
       printf("Escolha a categoria para comparar as cartas:\n");
        printf("1 - Pontos Turísticos\n");
        printf("2 - População\n");
        printf("3 - Área em KM²\n");
        printf("4 - PIB\n");
        scanf("%d", &compararj2);

    switch (compararj2){
        case 1:
        printf("Carta escolhida: Pontos Turísticos\n");
        resultado1 = pontos_turisticos1 > pontos_turisticos2 ? 1 : 0; 

       
            break;

        case 2:
            printf("Carta escolhida: População\n");
            resultado2 = populacao1 > populacao2 ? 1 : 0;

        
            break;

        case 3:
            printf("Carta escolhida: Área em KM²\n");
            resultado3 = area_km1 > area_km2 ? 1 : 0;

        
            break;
        case 4:
            printf("Carta escolhida: PIB\n");
            resultado4 = pib1 > pib2 ? 1 : 0;

       
        default:
            printf("Opção inválida!\n");}}
        
        if (compararj1 == compararj2){
            printf("Empate na escolha da categoria! Escolha novamente.\n");
            return 0;
        }

        if (resultado1 == 1){
            printf("Jogador 1 venceu!\n");
        } else if (resultado2 == 1){
            printf("Jogador 1 venceu!\n");
        } else if (resultado3 == 1){
            printf("Jogador 1 venceu!\n");
        } else if (resultado4 == 1){
            printf("Jogador 1 venceu!\n");
        } else {
            printf("Jogador 2 venceu!\n");
        }





   


    return 0;
}