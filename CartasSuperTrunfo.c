#include <stdio.h>

int main() {

    int populacao = 1000000;
    float area = 2000.5;
    float PIB = 50000.75;
    char nome[50] = "Pernambuco";
    char pontos_turisticos[100] = "Praia de Boa Viagem, Parque da Jaqueira, Museu do Frevo";
    char codigo[10] = "PE123"; 
    int numero_pontos_turisticos = 3;   

    printf("Estado: %s\n", nome);
    printf("População: %d\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: R$ %.2f\n", PIB);
    printf("Código: %s\n", codigo);
    printf("Número de Pontos Turísticos: %d\n", numero_pontos_turisticos);
    printf("Pontos Turísticos: %s\n", pontos_turisticos);   
    return 0;
}
