#include <stdio.h>
#include <stdlib.h>
#include <time.h>



int main (){


        // Variáveis carta 1
        char estado[50];
        char cidade[15];
        unsigned long int populacao;
        float area;
        int pturisticos;
        float pib;
        char codigo[5];
    

        // Variáveis carta 2
        char estado2[50];
        char cidade2[15];
        unsigned long int populacao2;
        float area2;
        int Pturisticos2;
        float pib2;
        char codigo2[5];


    // Leitura da carta 1
        printf("--- Carta 1 ---\n");
        printf("Estado: ");
        scanf("%s", estado);
        printf("Cidade: ");
        scanf("%s", cidade);
        printf("População: ");
        scanf("%lu", &populacao);
        printf("Área: ");
        scanf("%f", &area);
        printf("Ponto Turístico: ");
        scanf("%d", &pturisticos);
        printf("PIB: ");
        scanf("%f", &pib);
        printf("Código da Carta: ");
        scanf("%s", codigo);
    
        // Cálculo da densidade populacional e PIB per capita para a carta 1
        float densidadePopulacional = populacao / area;
        float pibPerCapita = (populacao > 0) ? (pib / populacao) : 0;
    
        // Exibição carta 1
        printf("\n--- Carta 1 ---\n");
        printf("Estado: %s \n", estado);
        printf("Cidade: %s \n", cidade);
        printf("População: %lu \n", populacao);
        printf("Área: %.2f \n", area);
        printf("Ponto Turístico: %d \n", pturisticos);
        printf("PIB: %.2f \n", pib);
        printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional);
        printf("PIB per Capita: %.2f reais\n", pibPerCapita);
        printf("Código: %s \n", codigo);

    // Leitura da carta 2
        printf("\n--- Carta 2 ---\n");
        printf("Estado: ");
        scanf("%s", estado2);
        printf("Cidade: ");
        scanf("%s", cidade2);
        printf("População: ");
        scanf("%lu", &populacao2);
        printf("Área: ");
        scanf("%f", &area2);
        printf("Ponto Turístico: ");
        scanf("%d", &Pturisticos2);
        printf("PIB: ");
        scanf("%f", &pib2);
        printf("Código da Carta: ");
        scanf("%s", codigo2);
    
        // Cálculo da densidade populacional e PIB per capita para a carta 2
        float densidadePopulacional2 = populacao2 / area2;
        float pibPerCapita2 = (populacao2 > 0) ? (pib2 / populacao2) : 0;
    
        // Exibição carta 2
        printf("\n--- Carta 2 ---\n");
        printf("Estado: %s \n", estado2);
        printf("Cidade: %s \n", cidade2);
        printf("População: %lu \n", populacao2);
        printf("Área: %.2f \n", area2);
        printf("Ponto Turístico: %d \n", Pturisticos2);
        printf("PIB: %.2f \n", pib2);
        printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional2);
        printf("PIB per  Capita: %.2f reais\n", pibPerCapita2);
        printf("Código: %s \n", codigo2);


    int opcao, opcao2, resultado, resultado2;

    printf("Escolha uma opção\n");
   
    printf("1. Área\n");
    printf("2. Ponto Turistico\n");
    printf("3. PIB\n");
    printf("4. Densidade populacional\n");
    printf("5. PIB percapita\n"); 
    printf("6. População\n");
    printf("Escolheu:");
    scanf("%d", &opcao);

 // Comparação com base na opção 1 escolhida
 switch (opcao) {
    case 1:
        printf("Comparando Área:\n");
        printf("Area1: %.2f\n", area);
        printf("Area2: %.2f\n", area2);
        resultado = area > area2 ? 1 : 0;
        break;
    case 2:
        printf("Comparando Ponto Turístico:\n");
        printf("Ponto Turístico1: %d\n", pturisticos);
        printf("Ponto Turístico2: %d\n", Pturisticos2);
        resultado = pturisticos > Pturisticos2 ? 1 : 0;
        break;
    case 3:
        printf("Comparando PIB:\n");
        printf("PIB1: %.2f\n", pib);
        printf("PIB2: %.2f\n", pib2);
        resultado = pib> pib2 ? 1 : 0;
        break;
    case 4:
        printf("Comparando Densidade Populacional:\n");
        printf("Densidade Populacional1: %.2f\n", densidadePopulacional);
        printf("Densidade Populacional2: %.2f\n", densidadePopulacional2);
        resultado = densidadePopulacional < densidadePopulacional2 ? 1 : 0;
        break;
    case 5:
        printf("Comparando Pib Percapita:\n");
        printf("Pib Percapita1: %.2f\n", pibPerCapita);
        printf("Pib Percapita2: %.2f\n", pibPerCapita2);
        resultado = pibPerCapita > pibPerCapita2 ? 1 : 0;
    break;
    case 6:
        printf("Comparando População:\n");
        printf("População1: %lu\n", populacao);
        printf("População2: %lu\n", populacao2);
        resultado = populacao > populacao2 ? 1 : 0;
        break;
        }

        printf("Escolha outra opção\n");
   
        printf("1. Área\n");
        printf("2. Ponto Turistico\n");
        printf("3. PIB\n");
        printf("4. Densidade populacional\n");
        printf("5. PIB percapita\n"); 
        printf("6. População\n");
        printf("Escolheu:");
        scanf("%d", &opcao2);
    if (opcao == opcao2){
        printf("###Ops, você escolheu a mesma opção!###");
    }else{// Comparação com base na opção 2 escolhida
        switch (opcao2) {
            case 1:
                printf("Comparando Área:\n");
                printf("Area1: %.2f\n", area);
                printf("Area2: %.2f\n", area2);
                resultado2 = area > area2 ? 1 : 0;
                break;
            case 2:
                printf("Comparando Ponto Turístico:\n");
                printf("Ponto Turístico1: %d\n", pturisticos);
                printf("Ponto Turístico2: %d\n", Pturisticos2);
                resultado2 = pturisticos > Pturisticos2 ? 1 : 0;
                break;
            case 3:
                printf("Comparando PIB:\n");
                printf("PIB1: %.2f\n", pib);
                printf("PIB2: %.2f\n", pib2);
                resultado2 = pib> pib2 ? 1 : 0;
                break;
            case 4:
                printf("Comparando Densidade Populacional:\n");
                printf("Densidade Populacional1: %.2f\n", densidadePopulacional);
                printf("Densidade Populacional2: %.2f\n", densidadePopulacional2);
                resultado2 = densidadePopulacional < densidadePopulacional2 ? 1 : 0;
                break;
            case 5:
                printf("Comparando Pib Percapita:\n");
                printf("Pib Percapita1: %.2f\n", pibPerCapita);
                printf("Pib Percapita2: %.2f\n", pibPerCapita2);
                resultado2 = pibPerCapita > pibPerCapita2 ? 1 : 0;
            break;
            case 6:
                printf("Comparando População:\n");
                printf("População1: %lu\n", populacao);
                printf("População2: %lu\n", populacao2);
                resultado2 = populacao > populacao2 ? 1 : 0;
            break;
            }
            // Comparação e Resultados do Vencendor
            if (resultado == 1 && resultado2 == 1) {
                printf("###Parabéns, carta 1 Venceu!###\n");
            } else if (resultado == 0 && resultado2 == 0) {
                printf("###Parabéns, carta 2 Venceu!###\n");
            } else {
                printf("###Ops, Deu Empate! Cada carta venceu em um critério.###\n");
            }
     }
        //Exibição das cartas
        printf("Estado1: %s \n", estado);
        printf("Cidade1: %s \n", cidade);
        printf("Código1: %s \n", codigo);
        printf("Estado2: %s \n", estado2);
        printf("Cidade2: %s \n", cidade2);
        printf("Código2: %s \n", codigo2);
        
return 0;

}
