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
    float densidade1, densidade2, pib_per_capita1, pib_per_capita2;
    float super_poder1, super_poder2;

    // Entradas de dados primeira carta
    printf("Digite a sigla do estado (apenas uma letra): ");
    scanf(" %c", &estado);
    
    printf("Digite a sigla do estado com uma única letra, seguida de um número de 01 a 04: ");
    scanf(" %3s", codigo_carta);
    
    getchar(); 
    
    printf("Digite o nome da cidade: ");
    scanf(" %49[^\n]", nome_cidade);
    
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
    
    getchar(); 
    
    printf("Digite o nome da cidade 2: ");
    scanf(" %49[^\n]", nome_cidade2);
    
    printf("Digite a população da cidade: ");
    scanf(" %d", &populacao2);
    
    printf("Digite a área da cidade 2 em km²: ");
    scanf(" %f", &area_km2);
    
    printf("Digite o PIB da cidade 2: ");
    scanf(" %f", &pib2);
    
    printf("Digite a quantidade de pontos turísticos na cidade 2: ");
    scanf(" %d", &qtd_pontos_turisticos2);
    
    // Cálculos
    densidade1 = populacao / area_km;
    densidade2 = populacao2 / area_km2;
    pib_per_capita1 = pib / populacao;
    pib_per_capita2 = pib2 / populacao2;
    
    super_poder1 = populacao + area_km + pib + qtd_pontos_turisticos + pib_per_capita1 + (1.0 / densidade1);
    super_poder2 = populacao2 + area_km2 + pib2 + qtd_pontos_turisticos2 + pib_per_capita2 + (1.0 / densidade2);
    
    // Saída de dados primeira carta
    printf("\nDados da Cidade 1:\n");
    printf("Estado: %c\n", estado);
    printf("Código da Carta: %s\n", codigo_carta);
    printf("Nome da Cidade: %s\n", nome_cidade);
    printf("População: %d habitantes\n", populacao);
    printf("Área: %.2f km²\n", area_km);
    printf("PIB: %.2f \n", pib);
    printf("Quantidade de pontos Turísticos: %d\n", qtd_pontos_turisticos);
    printf("Densidade populacional: %.2f\n", densidade1);
    printf("Pib per capita: %.2f\n", pib_per_capita1);
    printf("Super poder: %.2f\n", super_poder1);
    

    // Saída de dados segunda carta
    printf("\nDados da Cidade 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código da Carta: %s\n", codigo_carta2);
    printf("Nome da Cidade: %s\n", nome_cidade2);
    printf("População: %d habitantes\n", populacao2);
    printf("Área: %.2f km²\n", area_km2);
    printf("PIB: %.2f \n", pib2);
    printf("Quantidade de pontos Turísticos: %d\n", qtd_pontos_turisticos2);
    printf("Densidade populacional: %.2f\n", densidade2);
    printf("Pib per capita: %.2f\n", pib_per_capita2);
    printf("Super poder: %.2f\n", super_poder2);
    
    
    // Saída de dados
    printf("\nComparação de Cartas:\n");
    
    if (populacao > populacao2)
        printf("População: Carta 1 venceu (1)\n");
    else
        printf("População: Carta 2 venceu (0)\n");
    
    if (area_km > area_km2)
        printf("Área: Carta 1 venceu (1)\n");
    else
        printf("Área: Carta 2 venceu (0)\n");
    
    if (pib > pib2)
        printf("PIB: Carta 1 venceu (1)\n");
    else
        printf("PIB: Carta 2 venceu (0)\n");
    
    if (qtd_pontos_turisticos > qtd_pontos_turisticos2)
        printf("Pontos Turísticos: Carta 1 venceu (1)\n");
    else
        printf("Pontos Turísticos: Carta 2 venceu (0)\n");
    
    if (densidade1 < densidade2)
        printf("Densidade Populacional: Carta 1 venceu (1)\n");
    else
        printf("Densidade Populacional: Carta 2 venceu (0)\n");
    
    if (pib_per_capita1 > pib_per_capita2)
        printf("PIB per Capita: Carta 1 venceu (1)\n");
    else
        printf("PIB per Capita: Carta 2 venceu (0)\n");
    
    if (super_poder1 > super_poder2)
        printf("Super Poder: Carta 1 venceu (1)\n");
    else
        printf("Super Poder: Carta 2 venceu (0)\n");
    
    return 0;
}
