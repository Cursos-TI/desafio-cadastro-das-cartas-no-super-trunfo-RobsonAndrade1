#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {

    char Pais [50];
    char Estado [50];
    char Codigo [50];
    int Populacao;
    float Area;
    float Pib;
    int Pontos[20];

    printf("*** Países ***\n");

    printf("Digite o País \n");
    scanf("%s", &Pais);

    printf("Digite o Estado \n");
    scanf("%s", &Estado);

    printf("Digite o Códio da Carta \n");
    scanf("%s", &Codigo);

    printf("Digite o Numero De Habitantes \n");
    scanf("%s", &Populacao);

    printf("Digite a Àrea \n");
    scanf("%f", &Area);

    printf("Digite o PIB \n");
    scanf("%f", &Pib);

    printf("Digite Os Pontos Turisticos \n");
    scanf("%d", &Pontos);

    printf("País: %s \n" , Pais);
    printf("Estado: %s \n", Estado);
    printf("Código: %s \n", Codigo);
    printf("População: %d \n", Populacao);

    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
