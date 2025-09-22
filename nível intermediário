#include <stdio.h>
#include <string.h>

// Estrutura da carta
typedef struct {
    char estado[3];             // Ex: "SP"
    char codigo[5];             // Ex: "A01"
    char nomeCidade[50];        // Nome da cidade
    int populacao;              // Número de habitantes
    float area;                 // Área em km²
    float pib;                  // PIB em bilhões
    int pontosTuristicos;       // Número de pontos turísticos
    float densidadePopulacional;
    float pibPerCapita;
} Carta;

// Função para comparar dois valores inteiros
void compararInt(char atributo[], int valor1, int valor2, char nome1[], char nome2[]) {
    printf("\nComparacao de cartas (Atributo: %s)\n", atributo);
    printf("%s: %d\n", nome1, valor1);
    printf("%s: %d\n", nome2, valor2);

    if (valor1 > valor2)
        printf("Resultado: %s venceu!\n", nome1);
    else if (valor2 > valor1)
        printf("Resultado: %s venceu!\n", nome2);
    else
        printf("Resultado: Empate!\n");
}

// Função para comparar dois valores float (maior vence)
void compararFloatMaior(char atributo[], float valor1, float valor2, char nome1[], char nome2[]) {
    printf("\nComparacao de cartas (Atributo: %s)\n", atributo);
    printf("%s: %.2f\n", nome1, valor1);
    printf("%s: %.2f\n", nome2, valor2);

    if (valor1 > valor2)
        printf("Resultado: %s venceu!\n", nome1);
    else if (valor2 > valor1)
        printf("Resultado: %s venceu!\n", nome2);
    else
        printf("Resultado: Empate!\n");
}

// Função para comparar densidade (menor vence)
void compararFloatMenor(char atributo[], float valor1, float valor2, char nome1[], char nome2[]) {
    printf("\nComparacao de cartas (Atributo: %s)\n", atributo);
    printf("%s: %.2f\n", nome1, valor1);
    printf("%s: %.2f\n", nome2, valor2);

    if (valor1 < valor2)
        printf("Resultado: %s venceu!\n", nome1);
    else if (valor2 < valor1)
        printf("Resultado: %s venceu!\n", nome2);
    else
        printf("Resultado: Empate!\n");
}

int main() {
    // Cadastro das duas cartas
    Carta carta1 = {"SP", "A01", "São Paulo", 12300000, 1521.11, 2300.50, 50};
    Carta carta2 = {"RJ", "A02", "Rio de Janeiro", 6000000, 1200.30, 400.75, 30};

    // Cálculos adicionais
    carta1.densidadePopulacional = carta1.populacao / carta1.area;
    carta1.pibPerCapita = carta1.pib * 1000000000 / carta1.populacao;
    carta2.densidadePopulacional = carta2.populacao / carta2.area;
    carta2.pibPerCapita = carta2.pib * 1000000000 / carta2.populacao;

    int opcao;
    do {
        printf("\n=== Menu de Comparacao ===\n");
        printf("1. Populacao\n");
        printf("2. Area\n");
        printf("3. PIB\n");
        printf("4. Pontos Turisticos\n");
        printf("5. Densidade Populacional\n");
        printf("6. PIB per capita\n");
        printf("0. Sair\n");
        printf("Escolha um atributo: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                compararInt("Populacao", carta1.populacao, carta2.populacao, carta1.nomeCidade, carta2.nomeCidade);
                break;
            case 2:
                compararFloatMaior("Area", carta1.area, carta2.area, carta1.nomeCidade, carta2.nomeCidade);
                break;
            case 3:
                compararFloatMaior("PIB", carta1.pib, carta2.pib, carta1.nomeCidade, carta2.nomeCidade);
                break;
            case 4:
                compararInt("Pontos Turisticos", carta1.pontosTuristicos, carta2.pontosTuristicos, carta1.nomeCidade, carta2.nomeCidade);
                break;
            case 5:
                compararFloatMenor("Densidade Populacional", carta1.densidadePopulacional, carta2.densidadePopulacional, carta1.nomeCidade, carta2.nomeCidade);
                break;
            case 6:
                compararFloatMaior("PIB per capita", carta1.pibPerCapita, carta2.pibPerCapita, carta1.nomeCidade, carta2.nomeCidade);
                break;
            case 0:
                printf("Saindo...\n");
                break;
            default:
                printf("Opcao invalida! Tente novamente.\n");
        }
    } while (opcao != 0);

    return 0;
}
