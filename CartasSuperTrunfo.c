#include <stdio.h>

//Teste Maykele
//Nível Novato;

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
    printf("Digite o estado: \n");
    scanf( "%s", estado);

    printf("Digite o código da carta: \n");
    scanf( "%s", codigo_carta);

    printf("Digite o nome da cidade: \n");
    scanf("%s", nome);

    
    printf("Digite a população: \n");
    scanf("%d", &populacao);

    printf("Digite a área territorial: \n");
    scanf("%f", &area);

    printf("Digite o PIB: \n");
    scanf("%f", &pib);

    printf("Digite a quantidade de pontos turísticos: \n");
    scanf("%d", &pontos_turisticos);


    printf(" Estado: %s. \n Código da carta: %s. \n Cidade: %s. \n População: %d. \n Área Territorial: %f. \n PIB: %f. \n Pontos Turísticos: %d. \n", estado, codigo_carta, nome, populacao, area, pib, pontos_turisticos);

    return 0;
}
