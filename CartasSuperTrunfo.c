// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas

#include <stdio.h>

int main() {

// Variáveis para armazenar as informações da Carta 1

    char Pais [20], Estado [10], Codigo [10], Cidade[50];
    float Area, Pib;
    int  Populacao, Pontos;

// Variáveis para armazenar as informações da Carta 2

     char Pais2[20], Estado2[10], Codigo2[10], Cidade2[50];
     float Area2, Pib2;
     int Populacao2, Pontos2;

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
    scanf("%f", &Area);

    printf("Digite o PIB \n");
    scanf("%f", &Pib);

    printf("Digite Os Pontos Turisticos \n");
    scanf("%d", &Pontos);

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
    scanf("%f", &Area2);

    printf("Digite o PIB \n");
    scanf("%f", &Pib2);

    printf("Digite Os Pontos Turisticos \n");
    scanf("%d", &Pontos2);

// Exibe as informações da Carta 1    

    printf("\nCarta 1:\n");
    printf("Estado: %s \n", Estado);
    printf("Código: %s \n", Codigo);
    printf("Nome da Cidade: %s \n", Cidade);
    printf("População: %d \n", Populacao);
    printf("Àrea: %f km² \n", Area);
    printf("PIB: %f bilhões de reais \n", Pib);
    printf("Número de Pontos Turísticos %d \n", Pontos);

    printf("\n"); // Pula Uma Linha

// Exibe as informações da Carta 2 
 
    printf("\nCarta 2:\n");
    printf("Estado: %s \n", Estado2);
    printf("Código: %s \n", Codigo2);
    printf("Nome da Cidade: %s \n", Cidade2);
    printf("População: %d \n", Populacao2);
    printf("Àrea: %f km² \n", Area2);
    printf("PIB: %f bilhões de reais \n", Pib2);
    printf("Número de Pontos Turísticos %d \n", Pontos2);
    printf("\n"); // Pula Uma Linha


    return 0;
}
