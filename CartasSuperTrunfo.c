#include <stdio.h>

//Teste Maykele
//Nível Aventureiro;

int main() {
    printf("Desafio Cartas Super Trunfo!\n");
    
    //como o código possuia letra e número optei por colocar a variável no formato de "string";
    char estado[20];
    char codigo_carta[10];
    char nome[30];
    int populacao;
    float area;
    float pib;
    int pontos_turisticos;
    

    // retirei o & antes das variáveis tipo char pois estava dando erro
    printf("Digite uma letra de 'A' a 'H' que representa o estado: \n");
    scanf( "%s", estado);

    printf("Digite a letra do estado seguida de um número de 01 a 04: \n");
    scanf( "%s", codigo_carta);

    printf("Digite o nome da cidade: \n");
    scanf("%s", nome);

    
    printf("Digite o número de habitantes da cidade: \n");
    scanf("%d", &populacao);

    printf("Digite a área da cidade em quilômetros quadrados: \n");
    scanf("%f", &area);

    printf("Digite o Produto Interno Bruto da cidade: \n");
    scanf("%f", &pib);

    printf("Digite a quantidade de pontos turísticos: \n");
    scanf("%d", &pontos_turisticos);

    float densidade = populacao / area;
    float pib_per_capita = pib / (float)populacao;

    printf(" DADOS DA CARTA \n Estado: %s. \n Código da carta: %s. \n Cidade: %s. \n População: %d habitantes. \n Área Territorial: %.2f km². \n Densidade Populacional: %.2f hab/km². \n PIB: %.2f bilhões de reais. \n PIB per Capita: %.2f reais. \n Pontos Turísticos: %d. \n", 
        estado, codigo_carta, nome, populacao, area, densidade, pib, pib_per_capita, pontos_turisticos);

    return 0;
}
