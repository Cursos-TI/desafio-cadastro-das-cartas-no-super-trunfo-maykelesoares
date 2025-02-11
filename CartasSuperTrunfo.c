#include <stdio.h>

//Teste Maykele
//Nível Novato;

int main() {
    printf("Desafio Cartas Super Trunfo!\n");
    
    //como o código possuia letra e número optei por colocar a variável no formato de "string";
    char codigo_carta[10];
    char nome[30];
    double populacao;
    double area;
    double pib;
    int pontos_turisticos;


    printf("Digite o código da carta: \n");
    scanf( "%s", &codigo_carta);

    printf("Digite o nome da cidade: \n");
    scanf("%s", &nome);

    //percebi que com o %f não estava retornando o valor que o usuário declarava, então decidi colocar o %lf para retornar com sucesso o valor
    printf("Digite a população: \n");
    scanf("%lf", &populacao);

    printf("Digite a área territorial: \n");
    scanf("%lf", &area);

    printf("Digite o PIB: \n");
    scanf("%lf", &pib);

    printf("Digite a quantidade de pontos turísticos: \n");
    scanf("%d", &pontos_turisticos);


    printf("Código da carta: %s. \n Cidade: %s. \n População: %lf. \n Área Territorial: %lf. \n PIB: %lf. \n Pontos Turísticos: %d. \n", codigo_carta, nome, populacao, area, pib, pontos_turisticos);

    return 0;
}
