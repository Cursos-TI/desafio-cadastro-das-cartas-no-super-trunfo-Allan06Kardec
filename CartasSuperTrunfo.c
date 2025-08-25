#include <stdio.h>
#include <string.h>

// Estrutura da carta
typedef struct {
    char estado;                 // Letra de 'A' a 'H'
    char codigo[5];              // Ex: "A01"
    char nomeCidade[50];         // Nome da cidade
    int populacao;               // Número de habitantes
    float area;                  // Área em km²
    float pib;                   // PIB em bilhões
    int pontosTuristicos;        // Número de pontos turísticos
    float densidadePopulacional; // População / Área
    float pibPerCapita;          // (PIB * 1.000.000.000) / População
} Carta;

int main() {
    Carta cartas[2];

    for (int i = 0; i < 2; i++) {
        printf("\n--- Cadastro da Carta %d ---\n", i + 1);

        printf("Estado (A-H): ");
        scanf(" %c", &cartas[i].estado);

        printf("Codigo da carta (ex: A01): ");
        scanf(" %4s", cartas[i].codigo);

        printf("Nome da cidade: ");
        scanf(" %[^\n]", cartas[i].nomeCidade);

        printf("Populacao: ");
        scanf("%d", &cartas[i].populacao);

        printf("Area (em km2): ");
        scanf("%f", &cartas[i].area);

        printf("PIB (em bilhoes de reais): ");
        scanf("%f", &cartas[i].pib);

        printf("Numero de pontos turisticos: ");
        scanf("%d", &cartas[i].pontosTuristicos);

        // Calcula automaticamente os novos atributos
        cartas[i].densidadePopulacional = cartas[i].populacao / cartas[i].area;
        cartas[i].pibPerCapita = (cartas[i].pib * 1000000000.0) / cartas[i].populacao;
    }

    // Exibe as cartas
    for (int i = 0; i < 2; i++) {
        printf("\n--- Carta %d ---\n", i + 1);
        printf("Estado: %c\n", cartas[i].estado);
        printf("Codigo: %s\n", cartas[i].codigo);
        printf("Nome da Cidade: %s\n", cartas[i].nomeCidade);
        printf("Populacao: %d\n", cartas[i].populacao);
        printf("Area: %.2f km²\n", cartas[i].area);
        printf("PIB: %.2f bilhoes de reais\n", cartas[i].pib);
        printf("Numero de Pontos Turisticos: %d\n", cartas[i].pontosTuristicos);
        printf("Densidade Populacional: %.2f hab/km²\n", cartas[i].densidadePopulacional);
        printf("PIB per Capita: %.2f reais\n", cartas[i].pibPerCapita);
    }

    return 0;
}
