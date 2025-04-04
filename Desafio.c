#include <stdio.h>
#include <stdlib.h>
#include <time.h>



int main (){


        // Variáveis carta 1
        char Estado[50];
        char cidade[15];
        unsigned long int Populacao;
        float area;
        int pturisticos;
        float pib;
        char codigo[5];
    

        // Variáveis carta 2
        char Estado2[50];
        char cidade2[15];
        unsigned long int Populacao2;
        float area2;
        int Pturisticos2;
        float pib2;
        char codigo2[5];


    // Leitura da carta 1
        printf("--- Carta 1 ---\n");
        printf("Estado: ");
        scanf("%s", Estado);
        printf("Cidade: ");
        scanf("%s", cidade);
        printf("População: ");
        scanf("%lu", &Populacao);
        printf("Área: ");
        scanf("%f", &area);
        printf("Ponto Turístico: ");
        scanf("%d", &pturisticos);
        printf("PIB: ");
        scanf("%f", &pib);
        printf("Código da Carta: ");
        scanf("%s", codigo);
    
        // Cálculo da densidade populacional e PIB per capita para a carta 1
        float densidadePopulacional = Populacao / area;
        float pibPerCapita = (Populacao > 0) ? (pib / Populacao) : 0;
    
        // Exibição carta 1
        printf("\n--- Carta 1 ---\n");
        printf("Estado: %s \n", Estado);
        printf("Cidade: %s \n", cidade);
        printf("População: %lu \n", Populacao);
        printf("Área: %.2f \n", area);
        printf("Ponto Turístico: %d \n", pturisticos);
        printf("PIB: %.2f \n", pib);
        printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional);
        printf("PIB per Capita: %.2f reais\n", pibPerCapita);
        printf("Código: %s \n", codigo);
    // Leitura da carta 2
        printf("\n--- Carta 2 ---\n");
        printf("Estado: ");
        scanf("%s", Estado2);
        printf("Cidade: ");
        scanf("%s", cidade2);
        printf("População: ");
        scanf("%lu", &Populacao2);
        printf("Área: ");
        scanf("%f", &area2);
        printf("Ponto Turístico: ");
        scanf("%d", &Pturisticos2);
        printf("PIB: ");
        scanf("%f", &pib2);
        printf("Código da Carta: ");
        scanf("%s", codigo2);
    
        // Cálculo da densidade populacional e PIB per capita para a carta 2
        float densidadePopulacional2 = Populacao2 / area2;
        float pibPerCapita2 = (Populacao2 > 0) ? (pib2 / Populacao2) : 0;
    
        // Exibição carta 2
        printf("\n--- Carta 2 ---\n");
        printf("Estado: %s \n", Estado2);
        printf("Cidade: %s \n", cidade2);
        printf("População: %lu \n", Populacao2);
        printf("Área: %.2f \n", area2);
        printf("Ponto Turístico: %d \n", Pturisticos2);
        printf("PIB: %.2f \n", pib2);
        printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional2);
        printf("PIB per  Capita: %.2f reais\n", pibPerCapita2);
        printf("Código: %s \n", codigo2);




    int opcao;

    printf("Esccolha uma opção\n");
   
    printf("1. Area\n");
    printf("2. Ponto Turistico\n");
    printf("3. PIB\n");
    printf("4. Densidade populacional\n");
    printf("5. PIB percapita\n"); 
    printf("6. População\n");
    printf("Escolheu:");
    scanf("%d", &opcao);

 // Comparação com base na opção escolhida
 switch (opcao) {
    case 1:
        printf("Comparando Área:\n");
        printf("Area1: %.2f\n", area);
        printf("Area2: %.2f\n", area2);
        if (area > area2) {
            printf("### Carta 1 venceu ###\n");
        } else if (area < area2) {
            printf("### Carta 2 venceu ###\n");
        } else {
            printf("### Empate ###\n");
        }
        break;
    case 2:
        printf("Comparando Ponto Turístico:\n");
        printf("Ponto Turístico1: %d\n", pturisticos);
        printf("Ponto Turístico2: %d\n", Pturisticos2);
        if (pturisticos > Pturisticos2) {
            printf("### Carta 1 venceu ###\n");
        } else if (pturisticos < Pturisticos2) {
            printf("### Carta 2 venceu ###\n");
        } else {
            printf("### Empate ###\n");
        }
        break;
    case 3:
        printf("Comparando PIB:\n");
        printf("PIB1: %.2f\n", pib);
        printf("PIB2: %.2f\n", pib2);
        if (pib > pib2) {
            printf("### Carta 1 venceu ###\n");
        } else if (pib < pib2) {
            printf("### Carta 2 venceu ###\n");
        } else {
            printf("### Empate ###\n");
        }
        break;
    case 4:
        printf("Comparando Densidade Populacional:\n");
        printf("Densidade Populacional1: %.2f\n", densidadePopulacional);
        printf("Densidade Populacional2: %.2f\n", densidadePopulacional2);
        if (densidadePopulacional < densidadePopulacional2) {
            printf("### Carta 1 venceu ###\n");
        } else if (densidadePopulacional > densidadePopulacional2) {
            printf("### Carta 2 venceu ###\n");
        } else {
            printf("### Empate ###\n");}
        break;
    case 5:
        printf("Comparando Pib Percapita:\n");
        printf("Pib Percapita1: %.2f\n", pibPerCapita);
        printf("Pib Percapita2: %.2f\n", pibPerCapita2);
        if (pibPerCapita > pibPerCapita2) {
            printf("### Carta 1 venceu ###\n");
        } else if (pibPerCapita < pibPerCapita2) {
            printf("### Carta 2 venceu ###\n");
        } else {
            printf("### Empate ###\n");}
            break;
    case 6:
        printf("Comparando População:\n");
        printf("População1: %lu\n", Populacao);
        printf("População2: %lu\n", Populacao2);
        if (Populacao > Populacao2) {
            printf("### Carta 1 venceu ###\n");
        } else if (Populacao < Populacao2) {
            printf("### Carta 2 venceu ###\n");
        } else {
            printf("### Empate ###\n");}
        }

        printf("Estado1: %s \n", Estado);
        printf("Cidade1: %s \n", cidade);
        printf("Código1: %s \n", codigo);
        printf("Estado2: %s \n", Estado2);
        printf("Cidade2: %s \n", cidade2);
        printf("Código2: %s \n", codigo2);

return 0;

}