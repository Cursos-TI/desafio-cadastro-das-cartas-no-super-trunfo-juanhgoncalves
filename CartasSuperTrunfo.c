#include <stdio.h>
#include <stdlib.h>

int main()
{ 
    char carta1_estado;
    char carta1_codigo[4];
    char carta1_nome[20];
    int carta1_populacao;
    float carta1_area;
    float carta1_PIB;
    int carta1_numero_pontos_turisticos;

    char carta2_estado;
    char carta2_codigo[3];
    char carta2_nome[20];
    int carta2_populacao;
    float carta2_area;
    float carta2_PIB;
    int carta2_numero_pontos_turisticos;

    // Entrada de dados carta 1
    printf("Estado carta 1: ");
    scanf(" %c", &carta1_estado);
    printf("Codigo carta 1: ");
    scanf("%s", carta1_codigo);

    getchar(); // Limpar residuos nos buffer deixados pela scanf anterior

    printf("Nome da carta 1: ");
    fgets(carta1_nome, sizeof(carta1_nome), stdin);

    printf("Populacao carta 1: ");
    scanf("%d", &carta1_populacao);
    printf("Area Carta 1: ");
    scanf("%f", &carta1_area);
    printf("PIB carta 1: ");
    scanf("%f", &carta1_PIB);
    printf("Numero de pontos turisiticos da carta 1: ");
    scanf("%d", &carta1_numero_pontos_turisticos);

    // Entrada de dados carta 2

    printf("Estado carta 2: ");
    scanf(" %c", &carta2_estado);
    printf("Codigo carta 2: ");
    scanf("%s", carta2_codigo);

    getchar(); // Limpar residuos nos buffer deixados pela scanf anterior

    printf("Nome da carta 2: ");
    fgets(carta2_nome, sizeof(carta2_nome), stdin);

    printf("Populacao carta 2: ");
    scanf("%d", &carta2_populacao);
    printf("Area Carta 2: ");
    scanf("%f", &carta2_area);
    printf("PIB carta 2: ");
    scanf("%f", &carta2_PIB);
    printf("Numero de pontos turisiticos da carta 2: ");
    scanf("%d", &carta2_numero_pontos_turisticos);

    // Saida de dados 

    printf("\n\nCarta 1: ");
    printf("\nEstado: %c", carta1_estado);
    printf("\nCodigo: %s", carta1_codigo);
    printf("\nNome: %s", carta1_nome);
    printf("Populacao: %d", carta1_populacao);
    printf("\nArea: %.2f km²", carta1_area); // .2f indica que o float tera apenas duas casas decimais
    printf("\nPIB: %.2f bilhões de reais", carta1_PIB);
    printf("\nNumero de pontos turisticos: %d", carta1_numero_pontos_turisticos);

    printf("\n\nCarta 2: ");
    printf("\nEstado: %c", carta2_estado);
    printf("\nCodigo: %s", carta2_codigo);
    printf("\nNome: %s", carta2_nome);
    printf("Populacao: %d", carta2_populacao);
    printf("\nArea: %.2f km²", carta2_area); // .2f indica que o float tera apenas duas casas decimais
    printf("\nPIB: %.2f bilhões de reais", carta2_PIB);
    printf("\nNumero de pontos turisticos: %d", carta2_numero_pontos_turisticos);

    printf("\n");
    system("PAUSE");
    return 0;
}