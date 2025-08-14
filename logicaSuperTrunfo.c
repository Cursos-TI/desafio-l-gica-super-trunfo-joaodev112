#include <stdio.h>

int main() {
    //variaveis:

    char estado = 'A', estado2 = 'A';
    char codigo[4], codigo2[4];
    char cidade[20], cidade2[20];
    unsigned long int populacao, populacao2;
    float area, area2;
    float pib, pib2;
    int pontos_turisticos, pontos_turisticos2;
    float densidade_populacional, densidade_populacional2;
    float per_capita, per_capita2;
    float superPoder, superPoder2;

    // Carta 1 

    printf("===== ESCREVA A CARTA 1 =====\n\n");

    printf("Digite uma letra de A a H: \n");
    scanf(" %c", &estado); // Corrigido: espaço antes de %c para ignorar \n

    printf("Digite o código da carta: \n");
    scanf("%s", codigo);

    printf("Digite o nome da cidade: \n");
    scanf("%s", cidade);

    printf("Digite a população da cidade: \n");
    scanf("%lu", &populacao);

    printf("Digite a área da cidade em Km²: \n");
    scanf("%f", &area);

    printf("Digite o PIB da cidade em bilhões de reais: \n");
    scanf("%f", &pib);

    printf("Digite o número de pontos turísticos da cidade: \n");
    scanf("%d", &pontos_turisticos);

    // Calcúlos referente a carta 1

    densidade_populacional = populacao / area;
    per_capita = (pib * 1000000000.0f) / (float)populacao;

    superPoder = (float)populacao + area + pib + pontos_turisticos + per_capita + (1.0f / densidade_populacional);

    // Carta 2

    printf("\n===== ESCREVA A CARTA 2 =====\n\n");

    printf("Digite uma letra de A a H: \n");
    scanf(" %c", &estado2);

    printf("Digite o código da carta: \n");
    scanf("%s", codigo2);

    printf("Digite o nome da cidade: \n");
    scanf("%s", cidade2);

    printf("Digite a população da cidade: \n");
    scanf("%lu", &populacao2);

    printf("Digite a área da cidade em Km²: \n");
    scanf("%f", &area2);

    printf("Digite o PIB da cidade em bilhões de reais: \n");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turísticos da cidade: \n");
    scanf("%d", &pontos_turisticos2);

    // Calcúlos referente a carta 2

    densidade_populacional2 = populacao2 / area2;
    per_capita2 = (pib2 * 1000000000.0f) / (float)populacao2;

    superPoder2 = (float)populacao2 + area2 + pib2 + pontos_turisticos2 + per_capita2 + (1.0f / densidade_populacional2);

    // Informações carta 1

    printf("\n===== CARTA 1 =====\n");
    printf("Estado: %c\n", estado);
    printf("Código: %s\n", codigo);
    printf("Nome da Cidade: %s\n", cidade);
    printf("População: %lu\n", populacao);
    printf("Área: %.2f\n", area);
    printf("PIB: %.2f bilhões de reais\n", pib);
    printf("Pontos Turísticos: %d\n", pontos_turisticos);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional);
    printf("PIB per Capita: %.2f reais\n", per_capita);
    printf("Super Poder: %.2f\n", superPoder);

    // Informações carta 2

    printf("\n===== CARTA 2 =====\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Pontos Turísticos: %d\n", pontos_turisticos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional2);
    printf("PIB per Capita: %.2f reais\n", per_capita2);
    printf("Super Poder: %.2f\n", superPoder2);

    // Comparação 
    
    printf("\n===== COMPARAÇÃO DE CARTAS (ATRIBUTO: POPULAÇÃO) =====\n");
    printf("Carta 1 - %s: %lu\n", cidade, populacao);
    printf("Carta 2 - %s: %lu\n", cidade2, populacao2);

    // Comandos if e else

    if (populacao > populacao2) {
        printf("Resultado: Carta 1 (%s) venceu!!!\n", cidade);
    } else if (populacao2 > populacao) {
        printf("Resultado: Carta 2 (%s) venceu!!!\n", cidade2);
    } else {
        printf("Resultado: Empate!!!\n");
    }
       
    return 0;
}