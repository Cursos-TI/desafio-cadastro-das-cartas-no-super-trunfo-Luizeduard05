#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Declarando as variaveis
    char estado;
    char codigoDaCarta[3];
    char nomeDaCidade[20];
    int populacao, nPontosTuristicos;
    float areaEmKm, pib;
    
    // Pedindo dados no prompt e atribuindo as variaveis
    printf("Digite o Estado (A-H): \n");
    scanf("%c", &estado);

    printf("Digite o código da carta: \n");
    scanf("%s", &codigoDaCarta);

    printf("Digite o nome da cidade: \n");
    scanf("%s", &nomeDaCidade);

    printf("Digite a população: \n");
    scanf("%i", &populacao);

    printf("Digite a area em KM: \n");
    scanf("%f", &areaEmKm);

    printf("Digite o PIB: \n");
    scanf("%f", &pib);

    printf("Digite o numero de pontos turisicos: \n");
    scanf("%i", &nPontosTuristicos);

    // Informando que a carta foi cadastrada
    printf("Carta cadastrada com sucesso!!!: \n");

    // Informando os dados da carta cadastrada
    printf("Estado: %c \n", estado);
    printf("Código da carta: %s \n", codigoDaCarta);
    printf("Nome da cidade: %s \n", nomeDaCidade);
    printf("População: %i \n", populacao);
    printf("Área em km²: %f \n", areaEmKm);
    printf("PIB: %f \n", pib);
    printf("Número de pontos turísticos: %i \n", nPontosTuristicos);

    return 0;
}

// Estado (char)
// Código da carta (char[])
// Nome da cidade (char[])
// População (int)
// Área em km² (float)
// PIB (float)
// Número de pontos turísticos (int)