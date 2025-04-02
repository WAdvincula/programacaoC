#include <stdio.h>
#include <string.h>

// Definição da estrutura da carta
struct Carta {
    char codigo[4]; // Código do estado e cidade (ex: A01, B02)
    int populacao;
    float area;
    float pib;
    int pontos_turisticos;
};

int main() {
    struct Carta carta1, carta2;
    
    // Cadastro da primeira carta
    printf("Cadastro da primeira carta:\n");
    printf("Código (ex: A01): ");
    scanf("%s", carta1.codigo);
    printf("População: ");
    scanf("%d", &carta1.populacao);
    printf("Área (km²): ");
    scanf("%f", &carta1.area);
    printf("PIB (em bilhões): ");
    scanf("%f", &carta1.pib);
    printf("Número de pontos turísticos: ");
    scanf("%d", &carta1.pontos_turisticos);
    
    // Cadastro da segunda carta
    printf("\nCadastro da segunda carta:\n");
    printf("Código (ex: B02): ");
    scanf("%s", carta2.codigo);
    printf("População: ");
    scanf("%d", &carta2.populacao);
    printf("Área (km²): ");
    scanf("%f", &carta2.area);
    printf("PIB (em bilhões): ");
    scanf("%f", &carta2.pib);
    printf("Número de pontos turísticos: ");
    scanf("%d", &carta2.pontos_turisticos);
    
    // Exibir as cartas cadastradas
    printf("\nCartas cadastradas:\n");
    printf("\nCarta 1 - Código: %s\nPopulação: %d\nÁrea: %.2f km²\nPIB: %.2f bilhões\nPontos turísticos: %d\n", 
            carta1.codigo, carta1.populacao, carta1.area, carta1.pib, carta1.pontos_turisticos);
    printf("\nCarta 2 - Código: %s\nPopulação: %d\nÁrea: %.2f km²\nPIB: %.2f bilhões\nPontos turísticos: %d\n", 
            carta2.codigo, carta2.populacao, carta2.area, carta2.pib, carta2.pontos_turisticos);
    
    return 0;
}
