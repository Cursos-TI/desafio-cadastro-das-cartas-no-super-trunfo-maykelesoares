#include <stdio.h>

//Teste Maykele
//Nível Aventureiro;

int main() {
    printf(" Desafio Cartas Super Trunfo!\n");
    
    //como o código possuia letra e número optei por colocar a variável no formato de "string";
    char estado[20],estado2[20];
    char codigo_carta[4], codigo_carta2[4];
    char nome[20], nome2[20];
    int populacao, populacao2;
    float area, area2;
    float pib, pib2;
    int pontos_turisticos, pontos_turisticos2;
    

    // retirei o & antes das variáveis tipo char pois estava dando erro
    // Solicitação de dados da carta 1
    printf("Digite os dados da carta 1!\n");

    printf("Digite uma letra de 'A' a 'H' que representa o estado: \n"); 
    scanf( "%s", estado); 

    printf("Digite a letra do estado seguida de um número de 01 a 04. (ex: A01, B02): \n"); 
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

    float densidade = (float)populacao / area; //define a densidade através de uma operação aritmética entre duas variáveis
    float pib_per_capita = pib / (float)populacao; //define pib per capita através de uma operação aritmética entre duas variáveis

    
    //Solicita os dados da carta 2
    printf("\n Digite os dados da carta 2!\n");

    printf("Digite uma letra de 'A' a 'H' que representa o estado: \n");
    scanf( "%s", estado2);

    printf("Digite a letra do estado seguida de um número de 01 a 04. (ex: A01, B02): \n"); 
    scanf( "%s", codigo_carta2); 

    printf("Digite o nome da cidade: \n");
    scanf("%s", nome2);
    
    printf("Digite o número de habitantes da cidade: \n");
    scanf("%d", &populacao2);

    printf("Digite a área da cidade em quilômetros quadrados: \n");
    scanf("%f", &area2);

    printf("Digite o Produto Interno Bruto da cidade: \n");
    scanf("%f", &pib2);

    printf("Digite a quantidade de pontos turísticos: \n");
    scanf("%d", &pontos_turisticos2);

    float densidade2 = (float)populacao2 / area2;
    float pib_per_capita2 = pib2 / (float)populacao2;


    //imprime os dados da carta 1
    printf("\n DADOS DA CARTA 1: \n Estado: %s. \n Código da carta: %s. \n Cidade: %s. \n População: %d habitantes. \n Área Territorial: %.2f km². \n Densidade Populacional: %.2f hab/km². \n PIB: %.2f bilhões de reais. \n PIB per Capita: %.2f reais. \n Pontos Turísticos: %d. \n", 
        estado, codigo_carta, nome, populacao, area, densidade, pib, pib_per_capita, pontos_turisticos);

    //imprime os dados da carta 2
    printf("\n DADOS DA CARTA 2: \n Estado: %s. \n Código da carta: %s. \n Cidade: %s. \n População: %d habitantes. \n Área Territorial: %.2f km². \n Densidade Populacional: %.2f hab/km². \n PIB: %.2f bilhões de reais. \n PIB per Capita: %.2f reais. \n Pontos Turísticos: %d. \n", 
        estado2, codigo_carta2, nome2, populacao2, area2, densidade2, pib2, pib_per_capita2, pontos_turisticos2);


    return 0; //Informa que o código foi executado com sucesso.
}
