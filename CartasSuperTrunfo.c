
#include <stdio.h>

int main() {
     printf("=== Cartas Super Trunfo - Cidades Brasileiras ===\n\n"); 
  
  // Definição das cartas Super Trunfo para cidades brasileiras
    char estado1[30] = "RS";
    int codigo_carta1 = '1';
    char nome_da_cidade1[30] = "Porto Alegre";
    int populacao1 = 1400000;
    float area1 = 495.0; // em km²
    float pib1 = 104.74; //bilhões
    int pontos_turisticos1 = 18;
// Exibição dos dados da carta 1
    printf("Carta Super Trunfo - Cidade Brasileira\n");
    printf("Estado: %s\n", estado1);
    printf("Código da Carta: %c\n", codigo_carta1);
    printf("Nome da Cidade: %s\n", nome_da_cidade1);
    printf("População: %d habitantes\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: R$ %.2f bilhões\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos1);
    printf("\n"); 
// Definição das cartas Super Trunfo para cidades brasileiras
    char estado2[30] = "SP";
    int codigo_carta2 = '2'; 
    char nome_da_cidade2[30] = "São Paulo";
    int populacao2 = 12300000;
    float area2 = 1521.11; // em km²
    float pib2 = 699.21; //bilhões
    int pontos_turisticos2 = 25;
    // Exibição dos dados da carta 2
    printf("Carta Super Trunfo - Cidade Brasileira\n");
    printf("Estado: %s\n", estado2);
    printf("Código da Carta: %c\n", codigo_carta2);
    printf("Nome da Cidade: %s\n", nome_da_cidade2);
    printf("População: %d habitantes\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: R$ %.2f bilhões\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos2);
// Fim do programa
  return 0;
}
