#include <stdio.h>

int main() {
    // Declaração de variáveis
    char estado, estado2;
    char codigo_carta[4], codigo_carta2[4];
    char nome_cidade[50], nome_cidade2[50];
    int populacao, populacao2;
    float area_km, area_km2;
    float pib, pib2;
    int qtd_pontos_turisticos, qtd_pontos_turisticos2;

    // Entradas de dados primeira carta
    printf("Digite a sigla do estado (apenas uma letra): ");
    scanf(" %c", &estado);
    
    printf("Digite a sigla do estado com uma única letra, seguida de um número de 01 a 04: ");
    scanf(" %3s", codigo_carta);
    
    getchar(); // Limpa o buffer do teclado para evitar problemas na próxima entrada
    
    printf("Digite o nome da cidade: ");
    scanf(" %49[^\n]", nome_cidade); // Lê a linha inteira, garantindo que espaços sejam considerados
    
    printf("Digite a população da cidade: ");
    scanf(" %d", &populacao);
    
    printf("Digite a área da cidade em km²: ");
    scanf(" %f", &area_km);
    
    printf("Digite o PIB da cidade: ");
    scanf(" %f", &pib);
    
    printf("Digite a quantidade de pontos turísticos: ");
    scanf(" %d", &qtd_pontos_turisticos);
    
    
    // Entradas de dados segunda carta
    printf("\n\nDigite a sigla do estado da cidade 2 (apenas uma letra): ");
    scanf(" %c", &estado2);
    
    printf("Digite a sigla do estado da cidade 2 com uma única letra, seguida de um número de 01 a 04: ");
    scanf(" %3s", codigo_carta2);
    
    getchar(); // Limpa o buffer do teclado para evitar problemas na próxima entrada
    
    printf("Digite o nome da cidade 2: ");
    scanf(" %49[^\n]", nome_cidade2); // Lê a linha inteira, garantindo que espaços sejam considerados
    
    printf("Digite a população da cidade: ");
    scanf(" %d", &populacao2);
    
    printf("Digite a área da cidade 2 em km²: ");
    scanf(" %f", &area_km2);
    
    printf("Digite o PIB da cidade 2: ");
    scanf(" %f", &pib2);
    
    printf("Digite a quantidade de pontos turísticos na cidade 2: ");
    scanf(" %d", &qtd_pontos_turisticos2);
    
    
    // Saída de dados primeira carta
    printf("\nDados da Cidade 1:\n");
    printf("Estado: %c\n", estado);
    printf("Código da Carta: %s\n", codigo_carta);
    printf("Nome da Cidade: %s\n", nome_cidade);
    printf("População: %d habitantes\n", populacao);
    printf("Área: %.2f km²\n", area_km);
    printf("PIB: %.2f \n", pib);
    printf("Quantidade de pontos Turísticos: %d\n", qtd_pontos_turisticos);
    

    // Saída de dados segunda carta
    printf("\nDados da Cidade 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código da Carta: %s\n", codigo_carta2);
    printf("Nome da Cidade: %s\n", nome_cidade2);
    printf("População: %d habitantes\n", populacao2);
    printf("Área: %.2f km²\n", area_km2);
    printf("PIB: %.2f \n", pib2);
    printf("Quantidade de pontos Turísticos: %d\n", qtd_pontos_turisticos2);

    return 0;
}
