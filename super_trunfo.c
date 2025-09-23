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
    scanf("%s", nome_cidade2);

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

    if (pontos_turisticos1 > pontos_turisticos2){
        printf("Vencedor: Carta número 1:\n%s é a vencedora!\n", nome_cidade1);
    } 
    else{
        printf("Vencedor: Carta numero 2:\n%s é a vencedora!\n", nome_cidade2);
    }

    




    return 0;
}