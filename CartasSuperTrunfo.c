#include <stdio.h>

int main() {
    char nome[50];
    int populacao;
    double area;
    float pib;
    float turista;

    printf("Digite o nome da cidade: \n");
    scanf("%s", &nome);

    printf("Digite a população existente: \n");
    scanf("%d", &populacao);

    printf("Digite a área da cidade: \n");
    scanf("%f", &area);
    
    printf("Digite o PIB da cidade: \n");
    scanf("%f", &pib);

    printf("Digite a quantidade de pontos turísticos da cidade: \n");
    scanf("%f", &turista);

    printf("Nome da cidade: %s\n", nome);
    printf("Numero de habitantes: %d\n Área da cidade: %.2f km²\n PIB da cidade: %f\n", populacao, area, pib);
    printf("Pontos turísticos: %f", turista);

    return 0;
}