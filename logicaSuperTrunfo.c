#include <stdio.h>

int main() {

    char pais[20], pais2[20];
    unsigned long int populacao, populacao2;
    float area, area2;
    float pib, pib2;
    int pontos_turisticos, pontos_turisticos2;
    float densidade_populacional, densidade_populacional2;
    float per_capita, per_capita2;
    int atributo, atributo2;

    printf("===== ESCREVA A CARTA 1 =====\n");

    printf("Digite o nome do país: \n");
    scanf(" %[^\n]", pais);

    printf("Digite a população do país: \n");
    scanf("%lu", &populacao);

    printf("Digite a área do país em Km²: \n");
    scanf("%f", &area);

    printf("Digite o PIB do país em bilhões de reais: \n");
    scanf("%f", &pib);

    printf("Digite o número de pontos turísticos do país: \n");
    scanf("%d", &pontos_turisticos);

    densidade_populacional = populacao / area;
    per_capita = (pib * 1000000000.0f) / (float)populacao;


    printf("===== ESCREVA A CARTA 2 =====\n");

    printf("Digite o nome do país: \n");
    scanf(" %[^\n]", pais2);

    printf("Digite a população do país: \n");
    scanf("%lu", &populacao2);

    printf("Digite a área do país em Km²: \n");
    scanf("%f", &area2);

    printf("Digite o PIB do país em bilhões de reais: \n");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turísticos do país: \n");
    scanf("%d", &pontos_turisticos2);

    densidade_populacional2 = populacao2 / area2;
    per_capita2 = (pib2 * 1000000000.0f) / (float)populacao2;


    printf("===== CARTA 1 =====\n");
    printf("Nome do país: %s\n", pais);
    printf("População: %lu\n", populacao);
    printf("Área: %.2f\n", area);
    printf("PIB: %.2f bilhões de reais\n", pib);
    printf("Pontos Turísticos: %d\n", pontos_turisticos);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional);
    printf("PIB per Capita: %.2f reais\n", per_capita);

    printf("===== CARTA 2 =====\n");
    printf("Nome do país: %s\n", pais2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Pontos Turísticos: %d\n", pontos_turisticos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional2);
    printf("PIB per Capita: %.2f reais\n", per_capita2);

    printf("\n");

    printf("COMPARAÇÃO DE CARTAS\n");
    printf("Atributos disponíveis para a comparação\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Número de Pontos Turísticos\n");
    printf("5. Densidade Populacional\n");
    printf("Escolha o primeiro atributo: ");
    scanf("%d", &atributo);

    printf("ATRIBUTOS RESTANTES\n");

    switch (atributo)
    {
    case 1:
        printf("2. Área\n");
        printf("3. PIB\n");
        printf("4. Número de Pontos Turísticos\n");
        printf("5. Densidade Populacional\n");
        break;
    case 2:
        printf("1. População\n");
        printf("3. PIB\n");
        printf("4. Número de Pontos Turísticos\n");
        printf("5. Densidade Populacional\n");
        break;
    case 3:
        printf("1. População\n");
        printf("2. Área\n");
        printf("4. Número de Pontos Turísticos\n");
        printf("5. Densidade Populacional\n");
        break;
    case 4:
        printf("1. População\n");
        printf("2. Área\n");
        printf("3. PIB\n");
        printf("5. Densidade Populacional\n");
        break;
    case 5:
        printf("1. População\n");
        printf("2. Área\n");
        printf("3. PIB\n");
        printf("4. Número de Pontos Turísticos\n");
        break;
    
    default:

    printf("Opção Inválida");
        break;
    }

    printf("Escolha o segundo atributo: ");
    scanf("%d", &atributo2);

    if (atributo == atributo2){
        printf("Escolha Atributos Diferentes");
    }

    float carta1Atributo1 = (atributo == 1) ? populacao :
                   (atributo == 2) ? area :
                   (atributo == 3) ? pib :
                   (atributo == 4) ? pontos_turisticos : densidade_populacional;

    float carta2Atributo1 = (atributo2 == 1) ? populacao2 :
                   (atributo2 == 2) ? area2 :
                   (atributo2 == 3) ? pib2 :
                   (atributo2 == 4) ? pontos_turisticos2 : densidade_populacional2;

    float carta1Atributo2 = (atributo2 == 1) ? populacao :
                   (atributo2 == 2) ? area :
                   (atributo2 == 3) ? pib :
                   (atributo2 == 4) ? pontos_turisticos : densidade_populacional;

    float carta2Atributo2 = (atributo2 == 1) ? populacao2 :
                   (atributo2 == 2) ? area2 :
                   (atributo2 == 3) ? pib2 :
                   (atributo2 == 4) ? pontos_turisticos2 : densidade_populacional2;
            
    printf("ATRIBUTO 1: ");

    switch (atributo)
    {
    case 1:
        printf("População\n");
        break;
    case 2:
        printf("Área\n");
        break;
    case 3:
        printf("PIB\n");
        break;
    case 4:
        printf("Pontos Turísticos\n");
        break;
    case 5:
        printf("Densidade Populacional\n");
        break;
    
    default:
        break;
    }

    printf("%s: %.2f\n", pais, carta1Atributo1);
    printf("%s: %.2f\n", pais2, carta2Atributo1);

    printf("ATRIBUTO 2: ");

    switch (atributo2)
    {
    case 1:
        printf("População\n");
        break;
    case 2:
        printf("Área\n");
        break;
    case 3:
        printf("PIB\n");
        break;
    case 4:
        printf("Pontos Turísticos\n");
        break;
    case 5:
        printf("Densidade Populacional\n");
        break;
    
    default:
        break;
    }

    printf("%s: %.2f\n", pais, carta1Atributo2);
    printf("%s: %.2f\n", pais2, carta2Atributo2);

    float soma1 = (atributo == 5 ? -carta1Atributo1 : carta1Atributo1) + (atributo2 == 5 ? -carta1Atributo2 : carta1Atributo2);
    float soma2 = (atributo == 5 ? -carta2Atributo1 : carta2Atributo1) + (atributo2 == 5 ? -carta2Atributo2 : carta2Atributo2);

    printf("\nSoma dos atributos:\n");
    printf("%s: %.2f\n", pais, soma1);
    printf("%s: %.2f\n", pais2, soma2);

    if (soma1 == soma2) {
        printf("\nResultado: Empate!\n");
    } else if (soma1 > soma2) {
        printf("\nResultado: Carta 1 (%s) venceu!\n", pais);
    } else {
        printf("\nResultado: Carta 2 (%s) venceu!\n", pais2);
    }

    return 0;
}