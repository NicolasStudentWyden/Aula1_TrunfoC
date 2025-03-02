#include <stdio.h>

int main() {
    // Declaração de variáveis
    char estado;
    char codigo_carta[4];
    char nome_cidade[50];
    int populacao;
    float area_km;
    float pib;
    int qtd_pontos_turisticos;

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

    // Saída de dados primeira carta
    printf("\nDados da Cidade:\n");
    printf("Estado: %c\n", estado);
    printf("Código da Carta: %s\n", codigo_carta);
    printf("Nome da Cidade: %s\n", nome_cidade);
    printf("População: %d habitantes\n", populacao);
    printf("Área: %.2f km²\n", area_km);
    printf("PIB: %.2f \n", pib);
    printf("Quantidade de pontos Turísticos: %d\n", qtd_pontos_turisticos);
    
    
    // Entradas de dados segunda carta
    printf("\n\nDigite a sigla do estado (apenas uma letra): ");
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

    // Saída de dados segunda carta
    printf("\nDados da Cidade:\n");
    printf("Estado: %c\n", estado);
    printf("Código da Carta: %s\n", codigo_carta);
    printf("Nome da Cidade: %s\n", nome_cidade);
    printf("População: %d habitantes\n", populacao);
    printf("Área: %.2f km²\n", area_km);
    printf("PIB: %.2f \n", pib);
    printf("Quantidade de pontos Turísticos: %d\n", qtd_pontos_turisticos);

    return 0;
}
