// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas

#include <stdio.h>

int main() {

// Variáveis para armazenar as informações da Carta 1

    char Pais [20], Estado [10], Codigo [10], Cidade[50];
    float Area, Pib, DensidadePopulacional, PibPerCapita, SuperPoder;
    int  Populacao, Pontos, escolha;

// Variáveis para armazenar as informações da Carta 2

     char Pais2[20], Estado2[10], Codigo2[10], Cidade2[50];
     float Area2, Pib2, DensidadePopulacional2, PibPerCapita2, SuperPoder2;
     int  Populacao2, Pontos2;

// Cadastro da Carta 1

    printf("*** Países ***\n");

    printf("*** Carta 1 ***\n");

    printf("Digite o País \n");
    scanf("%s", &Pais); 

    printf("Digite o Código do Estado \n");
    scanf("%s", &Estado);

    printf("Digite o Códio da Carta \n");
    scanf("%s", &Codigo);

    printf("Digite o Nome da Cidade \n");
    scanf(" %[^\n]", &Cidade); // Alteração para aceitar espaços

    printf("Digite o Numero De Habitantes \n");
    scanf("%d", &Populacao);

    printf("Digite a Àrea \n");
    scanf(" %f", &Area);

    printf("Digite o PIB \n");
    scanf(" %f", &Pib);

    printf("Digite Os Pontos Turisticos \n");
    scanf("%d", &Pontos);

// Cálculo da Densidade Populacional e PIB per capita

    DensidadePopulacional = Populacao / Area;
    PibPerCapita = (Pib *1e9) / (float)Populacao; 

// Cálculo do Super Poder da Carta 1

    SuperPoder = Populacao + Area + (Pib * 1e9) + Pontos + PibPerCapita + (1 / DensidadePopulacional);

    printf("\n"); // Pula Uma Linha entre as cartas

// Cadastro da Carta 2    

    printf("*** Carta 2 ***\n");

    printf("Digite o País \n");
    scanf("%s", &Pais2); 

    printf("Digite o Código do Estado \n");
    scanf("%s", &Estado2);

    printf("Digite o Códio da Carta \n");
    scanf("%s", &Codigo2);

    printf("Digite o Nome da Cidade \n");
    scanf(" %[^\n]", &Cidade2); // Alteração para aceitar espaços

    printf("Digite o Numero De Habitantes \n");
    scanf("%d", &Populacao2);

    printf("Digite a Àrea \n");
    scanf(" %f", &Area2);

    printf("Digite o PIB \n");
    scanf(" %f", &Pib2);

    printf("Digite Os Pontos Turisticos \n");
    scanf("%d", &Pontos2);

// Cálculo da Densidade Populacional e PIB per capita 

    DensidadePopulacional2 = Populacao2 / Area2; 
    PibPerCapita2 = (Pib2 *1e9) / (float)Populacao2;
    
// Cálculo do Super Poder da Carta 2

    SuperPoder2 = Populacao2 + Area2 + (Pib2 * 1e9) + Pontos2 + PibPerCapita2 + (1 / DensidadePopulacional2);

// Exibe as informações da Carta 1    

    printf("\nCarta 1:\n");
    printf("Estado: %s \n", Estado);
    printf("Código: %s \n", Codigo);
    printf("Nome da Cidade: %s \n", Cidade);
    printf("População: %d \n", Populacao);
    printf("Àrea: %.2f km² \n", Area);
    printf("PIB: %.2f bilhões de reais \n", Pib);
    printf("Número de Pontos Turísticos %d \n", Pontos);
    printf("Densidade Populacional: %.2f hab/km² \n", DensidadePopulacional);
    printf("PIB per capita: %.2f reais \n", PibPerCapita);

// Exibe as informações da Carta 2 
 
    printf("\nCarta 2:\n");
    printf("Estado: %s \n", Estado2);
    printf("Código: %s \n", Codigo2);
    printf("Nome da Cidade: %s \n", Cidade2);
    printf("População: %d \n", Populacao2);
    printf("Àrea: %.2f km² \n", Area2);
    printf("PIB: %.2f bilhões de reais \n", Pib2);
    printf("Número de Pontos Turísticos %d \n", Pontos2);
    printf("Densidade Populacional: %.2f hab/km² \n", DensidadePopulacional2);
    printf("PIB per capita: %.2f reais \n", PibPerCapita2);

    printf("\n"); // Pula Uma Linha

// Comparação dos atributos

    printf("***Comparação de Cartas***\n");
    printf("População: Carta %d venceu (%d)\n", Populacao > Populacao2 ? 1 : 2, Populacao > Populacao2);
    printf("Área: Carta %d venceu (%d)\n", Area > Area2 ? 1 : 2, Area > Area2);
    printf("PIB: Carta %d venceu (%d)\n", Pib > Pib2 ? 1 : 2, Pib > Pib2);
    printf("Pontos Turísticos: Carta %d venceu (%d)\n", Pontos > Pontos2 ? 1 : 2, Pontos > Pontos2);
    printf("Densidade Populacional: Carta %d venceu (%d)\n", DensidadePopulacional < DensidadePopulacional2 ? 1 : 2, DensidadePopulacional < DensidadePopulacional2);
    printf("PIB per Capita: Carta %d venceu (%d)\n", PibPerCapita > PibPerCapita2 ? 1 : 2, PibPerCapita > PibPerCapita2);
    printf("Super Poder: Carta %d venceu (%d)\n", SuperPoder > SuperPoder2 ? 1 : 2, SuperPoder > SuperPoder2);
 
    printf("\n"); // Pula Uma Linha

// Comparação dos pontos turísticos

    printf("***Comparação de Cartas (Atributo: Pontos Turísticos)***\n");
    printf("Carta 1 - %s (%s): %d pontos\n", Cidade, Estado, Pontos);
    printf("Carta 2 - %s (%s): %d pontos\n", Cidade2, Estado2, Pontos2);
  
// Determinar a carta vencedora

    if (Pontos > Pontos2) {
        printf("\nResultado: Carta 1 (%s) venceu!\n", Cidade);
    } else if (Pontos < Pontos2) {
        printf("\nResultado: Carta 2 (%s) venceu!\n", Cidade2);
    } else {
        printf("\nResultado: Empate! Ambas têm %d pontos turísticos.\n", Pontos);
    }

    printf("\n"); // Pula Uma Linha

// Menu de Comparação de Atributos

    printf("*** Menu de Comparação de Atributos ***\n");
    printf("Escolha o atributo para comparar:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Número de Pontos Turísticos\n");
    printf("5 - Densidade Populacional\n");
    printf("Escolha: ");
    scanf("%d", &escolha);

// Lógica de Comparação com base no atributo selecionado

    switch (escolha) {
        case 1: // Comparação de População
            printf("\nComparando População:\n");
            printf("%s: %d habitantes\n", Pais, Populacao);
            printf("%s: %d habitantes\n", Pais2, Populacao2);
            if (Populacao > Populacao2) {
                printf("Carta 1 (%s) venceu!\n", Pais);
            } else if (Populacao < Populacao2) {
                printf("Carta 2 (%s) venceu!\n", Pais2);
            } else {
                printf("Empate! Ambas têm %d habitantes.\n", Populacao);
            }
            break;

        case 2: // Comparação de Área
            printf("\nComparando Área:\n");
            printf("%s: %.2f km²\n", Pais, Area);
            printf("%s: %.2f km²\n", Pais2, Area2);
            if (Area > Area2) {
                printf("Carta 1 (%s) venceu!\n", Pais);
            } else if (Area < Area2) {
                printf("Carta 2 (%s) venceu!\n", Pais2);
            } else {
                printf("Empate! Ambas têm %.2f km².\n", Area);
            }
            break;

        case 3: // Comparação de PIB
            printf("\nComparando PIB:\n");
            printf("%s: %.2f bilhões de reais\n", Pais, Pib);
            printf("%s: %.2f bilhões de reais\n", Pais2, Pib2);
            if (Pib > Pib2) {
                printf("Carta 1 (%s) venceu!\n", Pais);
            } else if (Pib < Pib2) {
                printf("Carta 2 (%s) venceu!\n", Pais2);
            } else {
                printf("Empate! Ambos têm %.2f bilhões de reais.\n", Pib);
            }
            break;

        case 4: // Comparação de Pontos Turísticos
            printf("\nComparando Pontos Turísticos:\n");
            printf("%s: %d pontos\n", Pais, Pontos);
            printf("%s: %d pontos\n", Pais2, Pontos2);
            if (Pontos > Pontos2) {
                printf("Carta 1 (%s) venceu!\n", Pais);
            } else if (Pontos < Pontos2) {
                printf("Carta 2 (%s) venceu!\n", Pais2);
            } else {
                printf("Empate! Ambas têm %d pontos turísticos.\n", Pontos);
            }
            break;

        case 5: // Comparação de Densidade Populacional
            printf("\nComparando Densidade Populacional:\n");
            printf("%s: %.2f hab/km²\n", Pais, DensidadePopulacional);
            printf("%s: %.2f hab/km²\n", Pais2, DensidadePopulacional2);
            if (DensidadePopulacional < DensidadePopulacional2) {
                printf("Carta 1 (%s) venceu!\n", Pais);
            } else if (DensidadePopulacional > DensidadePopulacional2) {
                printf("Carta 2 (%s) venceu!\n", Pais2);
            } else {
                printf("Empate! Ambas têm %.2f hab/km².\n", DensidadePopulacional);
            }
            break;

        default:
            printf("Opção inválida!\n");
    }

    return 0;
}
