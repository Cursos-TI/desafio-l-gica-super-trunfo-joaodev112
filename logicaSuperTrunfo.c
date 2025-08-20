#include <stdio.h>

int main() {

    char pais[20], pais2[20];
    unsigned long int populacao, populacao2;
    float area, area2;
    float pib, pib2;
    int pontos_turisticos, pontos_turisticos2;
    float densidade_populacional, densidade_populacional2;
    float per_capita, per_capita2;
    int comparacaoCartas;

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
    printf("Escolha o atributo: ");
    scanf("%d", &comparacaoCartas);

    switch (comparacaoCartas)
    {
    case 1:
        printf("COMPARAÇÃO POR POPULAÇÃO\n");
        printf("%s: %lu\n", pais, populacao);
        printf("%s: %lu\n", pais2, populacao2);

        if ( populacao == populacao2){
            printf("Empate!");
        } else if (populacao > populacao2){
            printf("Carta 1 (%s) venceu!", pais);
        }else{
            printf("Carta 2 (%s) venceu!", pais2);
        }

        break;
    case 2:
        printf("COMPARAÇÃO POR ÁREA\n");
        printf("%s: %.2f\n", pais, area);
        printf("%s: %.2f\n", pais2, area2);

        if(area == area2){
        printf("Empate!");
        } else if (area > area2){
            printf("Carta 1 (%s) venceu!", pais);
        }else{
            printf("Carta 2 (%s) venceu!", pais2);
        }

        break;
    case 3:
        printf("COMPARAÇÃO POR PIB\n");
        printf("%s: %.2f\n", pais, pib);
        printf("%s: %.2f\n", pais2, pib2);

        if (pib == pib2){
            printf("Empate!");
        } else if (pib > pib2){
            printf("Carta 1 (%s) venceu!", pais);
        }else{
            printf("Carta 1 (%s) venceu!", pais2);
        }

        break;
    case 4:
        printf("COMPARAÇÃO POR NÚMERO DE PONTOS TURÍSTICOS\n");
        printf("%s: %d\n", pais, pontos_turisticos);
        printf("%s: %d\n", pais2, pontos_turisticos2);

        if (pontos_turisticos == pontos_turisticos2){
            printf("Empate!");
        } else if (pontos_turisticos > pontos_turisticos2){
            printf("Carta 1 (%s) venceu!", pais);
        }else{
            printf("Carta 1 (%s) venceu!", pais2);
        }
    
        break;
    case 5:
        printf("COMPARAÇÃO POR DENSIDADE POPULACIONAL\n");
        printf("%s: %.2f\n", pais, densidade_populacional);
        printf("%s: %.2f\n", pais2, densidade_populacional2);

        if (densidade_populacional == densidade_populacional2){
            printf("Empate!");
        } else if (densidade_populacional < densidade_populacional2){
            printf("Carta 1 (%s) venceu!", pais);
        }else{
            printf("Carta 2 (%s) venceu!", pais2);
        }

        break;
    default:
        printf("OPÇÃO INVÁLIDA");
        break;
    }
  
    return 0;
}