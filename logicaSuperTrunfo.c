#include <stdio.h>

int main() {
    int opcao;
    // Declaração das variáveis para a carta 01
    char estado01;
    char codigo01[4];
    char nomeCidade01[50];
    unsigned long int populacao01;
    float area01;
    float pib01;
    int pontosTuristicos01;
    float quocientedensidade01;
    float quocientepib01;
    float superPoder01;

    // Declaração das variáveis para a carta 02
    char estado02;
    char codigo02[4];
    char nomeCidade02[50];
    unsigned long int populacao02;
    float area02;
    float pib02;
    int pontosTuristicos02;
    float quocientedensidade02;
    float quocientepib02;
    float superPoder02;

    // Leitura dos dados da carta 01
    printf("Insira os dados da carta 01:\n");

    printf("Estado: ");
    scanf(" %s", &estado01);

    printf("Codigo: ");
    scanf("%3s", codigo01);  // Limita a 3 caracteres + '\0'

    printf("Cidade: ");
    scanf("%s\n]", nomeCidade01);

    printf("Populacao: ");
    scanf("%lu", &populacao01);  // %lu para unsigned long int

    printf("Area: ");
    scanf("%f", &area01);

    printf("PIB: ");
    scanf("%f", &pib01);

    printf("Pontos turisticos: ");
    scanf("%d", &pontosTuristicos01);

    // Cálculos para carta 01
    quocientepib01 = pib01 / (float)populacao01;
    quocientedensidade01 = (float)populacao01 / area01;

    // Leitura dos dados da carta 02
    printf("\nInsira os dados da carta 02:\n");

    printf("Estado: ");
    scanf(" %s", &estado02);

    printf("Codigo: ");
    scanf("%3s", codigo02);

    printf("Cidade: ");
    scanf("%s\n]", nomeCidade02);

    printf("Populacao: ");
    scanf("%lu", &populacao02);

    printf("Area: ");
    scanf("%f", &area02);

    printf("PIB: ");
    scanf("%f", &pib02);

    printf("Pontos turisticos: ");
    scanf("%d", &pontosTuristicos02);

    // Cálculos para carta 02
    quocientepib02 = pib02 / (float)populacao02;
    quocientedensidade02 = (float)populacao02 / area02;

    // Cálculo do Super Poder (soma dos atributos numéricos)
    superPoder01 = (float)populacao01 + area01 + pib01 + (float)pontosTuristicos01 + quocientepib01 + (1.0f / quocientedensidade01);
    superPoder02 = (float)populacao02 + area02 + pib02 + (float)pontosTuristicos02 + quocientepib02 + (1.0f / quocientedensidade02);

    // Exibição dos dados da Carta 01
    printf("\nCarta 01\n");
    printf("Estado: %c\n", estado01);
    printf("Codigo da Carta: %s\n", codigo01);
    printf("Cidade: %s\n", nomeCidade01);
    printf("Populacao: %lu\n", populacao01);
    printf("Area: %.2f km²\n", area01);
    printf("PIB: %.2f bilhões de reais\n", pib01);
    printf("Pontos turísticos: %d\n", pontosTuristicos01);
    printf("PIB per capita: %.6f\n", quocientepib01);
    printf("Densidade Populacional: %.6f habitantes/km\n", quocientedensidade01);
    printf("Super Poder: %.6f\n", superPoder01);

    // Exibição dos dados da Carta 02
    printf("\nCarta 02\n");
    printf("Estado: %c\n", estado02);
    printf("Código: %s\n", codigo02);
    printf("Cidade: %s\n", nomeCidade02);
    printf("Populacao: %lu\n", populacao02);
    printf("Area: %.2f km²\n", area02);
    printf("PIB: %.2f bilhões de reais\n", pib02);
    printf("Pontos turísticos: %d\n", pontosTuristicos02);
    printf("PIB per capita: %.6f\n", quocientepib02);
    printf("Densidade Populacional: %.6f habitantes/km\n", quocientedensidade02);
    printf("Super Poder: %.6f\n", superPoder02);

    //Menu interativo
    printf("Escolha o Atributo para comparação\n");
    printf("1. Populacao\n");
    printf("2. Area\n");
    printf("3. PIB\n");
    printf("4. Ponto Turistico\n");
    printf("5. Densidade Populacional\n");
    printf("6. PIB per Capita\n");
    printf("7. Super poder\n");
    printf(">");
    scanf("%d", &opcao);

    switch (opcao)
    {
        case 1:
            // População maior vence
            if (populacao01 > populacao02){
                printf("Populacao: Carta 01 venceu\n");
            }else if (populacao01 < populacao01){
                printf("Populacao: Carta 02 venceu\n");
            }else {
                printf("Empate!");
            }
        break;
    
        case 2:
            // Área maior vence
            if (area01 > area02){
                printf("Área: Carta 01 venceu\n");
            }else if (area01 < area02){
                printf("Área: Carta 02 veneceu\n");
            }else {
                printf("Empate!");
            }
        break;
        
        case 3:
            // PIB maior vence
            if (pib01 > pib02){
                printf("PIB: Carta 01 venceu\n");
            }else if (pib01 < pib02){
                printf("PIB: Carta 02 venceu\n");
            } else {
                printf("Empate!");
            }
        break;

        case 4:
            // Pontos Turísticos maior vence
            if (pontosTuristicos01 > pontosTuristicos02){
                printf("Pontos Turísticos: Carta 01 venceu\n");
            }else if (pontosTuristicos01 < pontosTuristicos02){
                printf("Ponto Turísticos: Carta 02 venceu\n");
            }else {
                printf("Empate!");
            }
        break;

        case 5:
            // Densidade Populacional menor vence
            if (quocientedensidade01 < quocientedensidade02){
                printf("Densidade Populacional: Carta 01 venceu\n");
            }else if (quocientedensidade01 > quocientedensidade01){
                printf("Densidade Populacional: Carta 02 venceu\n");
            }else {
                printf("Empate!");
            }
        break;

        case 6:
            // PIB per Capita maior vence
            if (quocientepib01 > quocientepib02){
                printf("PIB per Capita: Carta 01 venceu\n");
            }else if (quocientepib01 < quocientepib02){
                printf("PIB per Capita: Carta 02 venceu\n");
            }else {
                printf("Empate!");
            }
        
        break;

        case 7:
            // Super Poder maior vence
            if (superPoder01 > superPoder02){
                printf("Super Poder: Carta 01 venceu");
            }else if (superPoder01 < superPoder02){
                printf("Super Poder: Carta 02 venceu");
            }else {
                printf("Empate!");
            }
        break;
    }
    
    return 0;
}
