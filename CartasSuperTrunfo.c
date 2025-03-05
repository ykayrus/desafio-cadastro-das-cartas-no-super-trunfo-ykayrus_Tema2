#include <stdio.h>

int main(){
    
    //variáveis
    char estado_carta1[30], estado_carta2[30];
    int codigo_carta1, codigo_carta2;
    char cidade_carta1[30], cidade_carta2[30];
    unsigned int populacao_carta1, populacao_carta2;
    float area_carta1, area_carta2;
    float pib_carta1, pib_carta2;
    unsigned int pontos_turisticos_carta1, pontos_turisticos_carta2;

    float densidade_populacional_carta1, densidade_populacional_carta2;
    float pib_per_capita_carta1, pib_per_capita_carta2;

    //Entrada de dados da carta 1
    printf("\n### SUPER TRUNFO - PAÍSES - MATECHECK ###\n"); //CABEÇALHO
    printf(" \n########## CARTA 1 ###########\n\n");//cabeçalho
    printf("Estado (sem espaços): ");
    scanf("%s", &estado_carta1);
    printf("Código da carta (numeros): ");
    scanf("%d", &codigo_carta1);
    printf("Cidade (sem espaços): ");
    scanf("%s", &cidade_carta1);
    printf("População: ");
    scanf("%u", &populacao_carta1);
    printf("Área: ");
    scanf("%f", &area_carta1);
    printf("PIB: ");
    scanf("%f", &pib_carta1);
    printf("Pontos Turísticos: ");
    scanf("%u", &pontos_turisticos_carta1);

    //Entrada de dados da carta 2
    printf(" \n########## CARTA 2 ###########\n\n");//cabeçalho
    printf("Estado (sem espaços): ");
    scanf("%s", &estado_carta2);
    printf("Código da carta (numeros): ");
    scanf("%d", &codigo_carta2);
    printf("Cidade (sem espaços): ");
    scanf("%s", &cidade_carta2);
    printf("População: ");
    scanf("%u", &populacao_carta2);
    printf("Área: ");
    scanf("%f", &area_carta2);
    printf("PIB: ");
    scanf("%f", &pib_carta2);
    printf("Pontos Turísticos: ");
    scanf("%u", &pontos_turisticos_carta2);

    //Operadores matemáticos carta 1
    densidade_populacional_carta1 = (float)populacao_carta1 / area_carta1;
    pib_per_capita_carta1 = pib_carta1 / populacao_carta1;

    //Operadores matemáticos carta 2
    densidade_populacional_carta2 = (float)populacao_carta2 / area_carta2;
    pib_per_capita_carta2 = pib_carta2 / populacao_carta2;

    //Exibição de dados carta 01
    printf("\n######### EXIBIÇÃO CARTA 01 ###########\n\n ");//cabeçalho
    printf("Estado: %s\n", estado_carta1);
    printf("Código da carta: %d\n", codigo_carta1);
    printf("Cidade: %s\n", cidade_carta1);
    printf("Populaçaõ: %u\n", populacao_carta1);
    printf("Área: %f\n", area_carta1);
    printf("PIB: %f\n", pib_carta1);
    printf("Pontos Turísticos: %u\n", pontos_turisticos_carta1);
    printf("Densidade Populacional: %f\n", densidade_populacional_carta1);
    printf("PIB_per_capita: %f\n", pib_per_capita_carta1);

    //Exibição de dados carta 02
    printf("\n######### EXIBIÇÃO CARTA 02 ###########\n\n ");//cabeçalho
    printf("Estado: %s\n", estado_carta2);
    printf("Código da carta: %d\n", codigo_carta2);
    printf("Cidade: %s\n", cidade_carta2);
    printf("Populaçaõ: %u\n", populacao_carta2);
    printf("Área: %f\n", area_carta2);
    printf("PIB: %f\n", pib_carta2);
    printf("Pontos Turísticos: %u\n", pontos_turisticos_carta2);
    printf("Densidade Populacional: %f\n", densidade_populacional_carta2);
    printf("PIB_per_capita: %f\n", pib_per_capita_carta2);

    // Exibição da comparação dos resultados utilzando operadores relacionais e estruturas de decisões
    printf("\n######### COMPARAÇÃO ###########\n\n"); //Cabeçalho
    printf("Comparando População:\n");
    if (populacao_carta1 > populacao_carta2) {
        printf("Vencedor: %d %s\n\n", codigo_carta1, estado_carta1);//Exibe como vencedor código e estado da carta
    } else {
        printf("Vencedor: %d %s\n\n", codigo_carta2, estado_carta2);
    }
    
    printf("Comparando área:\n");
    if (area_carta1 > area_carta2) {
        printf("Vencedor: %d %s\n\n", codigo_carta1, estado_carta1);
    } else {
        printf("Vencedor: %d %s\n\n", codigo_carta2, estado_carta2);
    }

    printf("Comparando PIB:\n");
    if (pib_carta1 > pib_carta2) {
        printf("Vencedor: %d %s\n\n", codigo_carta1, estado_carta1);
    } else {
        printf("Vencedor: %d %s\n\n", codigo_carta2, estado_carta2);
    }

    printf("Comparando PIB:\n");
    if (pib_carta1 > pib_carta2) {
        printf("Vencedor: %d %s\n\n", codigo_carta1, estado_carta1);
    } else {
        printf("Vencedor: %d %s\n\n", codigo_carta2, estado_carta2);
    }

    printf("Comparando Densidade Populacional:\n");
    if (densidade_populacional_carta1 < densidade_populacional_carta2) { 
        printf("Vencedor: %d %s\n\n", codigo_carta1, estado_carta1);
    } else {
        printf("Vencedor: %d %s\n\n", codigo_carta2, estado_carta2);
    }

    printf("Comparando PIB Per Capita:\n");
    if (pib_per_capita_carta1 < pib_per_capita_carta2) {
        printf("Vencedor: %d %s\n\n", codigo_carta1, estado_carta1);
    } else {
        printf("Vencedor: %d %s\n\n", codigo_carta2, estado_carta2);
    }

    return 0;
}
