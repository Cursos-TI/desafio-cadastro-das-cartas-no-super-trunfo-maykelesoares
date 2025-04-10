#include <stdio.h>

//Teste Maykele
//Nível Aventureiro;

int main() {
    printf(" Desafio Cartas Super Trunfo!\n");
    
    //como o código possuia letra e número optei por colocar a variável no formato de "string";
    char estado1[20],estado2[20];
    char codigo_carta1[4], codigo_carta2[4];
    char nome1[20], nome2[20];
    unsigned long int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontos_turisticos1, pontos_turisticos2;    

    // retirei o & antes das variáveis tipo char pois estava dando erro
    // Solicitação de dados da carta 1
    printf("Digite os dados da carta 1!\n");

    printf("Digite uma letra de 'A' a 'H' que representa o estado: \n"); 
    scanf( "%s", estado1); 

    printf("Digite a letra do estado seguida de um número de 01 a 04. (ex: A01, B02): \n"); 
    scanf( "%s", codigo_carta1); 

    printf("Digite o nome da cidade: \n");
    scanf("%s", nome1);
    
    printf("Digite o número de habitantes da cidade: \n");
    scanf("%lu", &populacao1);

    printf("Digite a área da cidade em quilômetros quadrados: \n");
    scanf("%f", &area1);

    printf("Digite o Produto Interno Bruto da cidade: \n");
    scanf("%f", &pib1);

    printf("Digite a quantidade de pontos turísticos: \n");
    scanf("%d", &pontos_turisticos1);

    float densidade1 = (float)populacao1 / area1; //define a densidade através de uma operação aritmética entre duas variáveis
    float pib_per_capita1 = pib1 / (float)populacao1; //define pib per capita através de uma operação aritmética entre duas variáveis
    float inverso_densidade1 = 1 / densidade1; // calcula o inverso da densidade populacional    

    float superpoder1 = ((float)populacao1 + area1 + pib1 + (float)pontos_turisticos1 + inverso_densidade1);    
    
    //Solicita os dados da carta 2
    printf("\n Digite os dados da carta 2!\n");

    printf("Digite uma letra de 'A' a 'H' que representa o estado: \n");
    scanf( "%s", estado2);

    printf("Digite a letra do estado seguida de um número de 01 a 04. (ex: A01, B02): \n"); 
    scanf( "%s", codigo_carta2); 

    printf("Digite o nome da cidade: \n");
    scanf("%s", nome2);
    
    printf("Digite o número de habitantes da cidade: \n");
    scanf("%lu", &populacao2);

    printf("Digite a área da cidade em quilômetros quadrados: \n");
    scanf("%f", &area2);

    printf("Digite o Produto Interno Bruto da cidade: \n");
    scanf("%f", &pib2);

    printf("Digite a quantidade de pontos turísticos: \n");
    scanf("%d", &pontos_turisticos2);

    float densidade2 = (float)populacao2 / area2;
    float pib_per_capita2 = pib2 / (float)populacao2;

    float inverso_densidade2 = 1 / densidade2;    

    float superpoder2 = ((float)populacao2 + area2 + pib2 + (float)pontos_turisticos2 + inverso_densidade2);    

    //imprime os dados da carta 1
    printf("\n DADOS DA CARTA 1: \n Estado: %s. \n Código da carta: %s. \n Cidade: %s. \n População: %lu habitantes. \n Área Territorial: %.2f km². \n Densidade Populacional: %.2f hab/km². \n PIB: %.2f bilhões de reais. \n PIB per Capita: %.2f reais. \n Pontos Turísticos: %d. \n Super Poder: %.4f. \n", 
        estado1, codigo_carta1, nome1, populacao1, area1, densidade1, pib1, pib_per_capita1, pontos_turisticos1, superpoder1);

    //imprime os dados da carta 2
    printf("\n DADOS DA CARTA 2: \n Estado: %s. \n Código da carta: %s. \n Cidade: %s. \n População: %lu habitantes. \n Área Territorial: %.2f km². \n Densidade Populacional: %.2f hab/km². \n PIB: %.2f bilhões de reais. \n PIB per Capita: %.2f reais. \n Pontos Turísticos: %d. \n Super Poder: %.4f \n", 
        estado2, codigo_carta2, nome2, populacao2, area2, densidade2, pib2, pib_per_capita2, pontos_turisticos2, superpoder2);


    return 0; //Informa que o código foi executado com sucesso.
}
