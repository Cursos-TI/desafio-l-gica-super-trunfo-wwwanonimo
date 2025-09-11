#include <stdio.h>

int main(){

    int opcao, opcao_2;
    float soma1,soma2;

    // Declaração das variáveis para a carta 01
    char estado01[3], codigo01[4], nomeCidade01[50];
    unsigned long int populacao01;
    float area01, pib01;
    int pontosTuristicos01;
    float quocientedensidade01, quocientepib01, superPoder01;

    // Declaração das variáveis para a carta 02
    char estado02[3], codigo02[4], nomeCidade02[50];
    unsigned long int populacao02;
    float area02, pib02;
    int pontosTuristicos02;
    float quocientedensidade02, quocientepib02, superPoder02;

    // Leitura dos dados da carta 01
    printf("Insira os dados da carta 01:\n");

    printf("Estado: ");
    scanf("%3s", estado01);

    printf("Codigo: ");
    scanf("%3s", codigo01);  // Limita a 3 caracteres + '\0'

    printf("Cidade: ");
    scanf("%s", nomeCidade01);

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
    superPoder01 = (float)populacao01 + area01 + pib01 + (float)pontosTuristicos01 + quocientepib01 + (1.0f / quocientedensidade01);

    // Leitura dos dados da carta 02
    printf("\nInsira os dados da carta 02:\n");

    printf("Estado: ");
    scanf("%3s", estado02);

    printf("Codigo: ");
    scanf("%3s", codigo02);

    printf("Cidade: ");
    scanf("%s", nomeCidade02);

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
    superPoder02 = (float)populacao02 + area02 + pib02 + (float)pontosTuristicos02 + quocientepib02 + (1.0f / quocientedensidade02);
    
    // Exibição dos dados da Carta 01
    printf("\nCarta 01\n");
    printf("Estado: %s\n", estado01);
    printf("Codigo da Carta: %s\n", codigo01);
    printf("Cidade: %s\n", nomeCidade01);
    printf("Populacao: %lu\n", populacao01);
    printf("Area: %.2f km\n", area01);
    printf("PIB: %.2f bilhoes de reais\n", pib01);
    printf("Pontos turisticos: %d\n", pontosTuristicos01);
    printf("PIB per capita: %.6f\n", quocientepib01);
    printf("Densidade Populacional: %.6f habitantes/km\n", quocientedensidade01);
    printf("Super Poder: %.6f\n", superPoder01);

    // Exibição dos dados da Carta 02
    printf("\nCarta 02\n");
    printf("Estado: %s\n", estado02);
    printf("Codigo: %s\n", codigo02);
    printf("Cidade: %s\n", nomeCidade02);
    printf("Populacao: %lu\n", populacao02);
    printf("Area: %.2f km\n", area02);
    printf("PIB: %.2f bilhoes de reais\n", pib02);
    printf("Pontos turisticos: %d\n", pontosTuristicos02);
    printf("PIB per capita: %.6f\n", quocientepib02);
    printf("Densidade Populacional: %.6f habitantes/km\n", quocientedensidade02);
    printf("Super Poder: %.6f\n", superPoder02);

    //Menu interativo
    printf("\n====Escolha o primeiro Atributo para comparacao====\n");
    printf("1. Populacao\n");
    printf("2. Area\n");
    printf("3. PIB\n");
    printf("4. Ponto Turistico\n");
    printf("5. Densidade Populacional\n");
    printf("6. PIB per Capita\n");
    printf("7. Super poder\n");
    printf(">");
    scanf("%d", &opcao);

    //Menu Interativo 2
    printf("\n====Escolha o segundo Atributo para comparacao====\n");
    if (opcao != 1){
        printf("1. Populacao\n");
    }

    if (opcao != 2){
        printf("2. Area\n");
    }

    if (opcao != 3){
        printf("3. PIB\n");
    }

    if (opcao != 4){
        printf("4. Ponto Turistico\n");
    }

    if (opcao != 5){
        printf("5. Densidade Populacional\n");
    }

    if (opcao != 6){
        printf("6. PIB per Capita\n");
    }

    if (opcao != 7){
        printf("7. Super Poder\n");
    }
    printf(">");
    scanf("%d", &opcao_2);

    //RESULTADO PRIMEIRO ATRIBUTO
    printf("===Resultado do primeiro Atributo===\n");    
    switch (opcao)
    {
        case 1:
            // População maior vence
            if (populacao01 > populacao02){
                soma1 += populacao01;
                printf("Populacao: Carta 01 venceu\n");
            }else if (populacao01 < populacao02){
                soma2 += pontosTuristicos02;
                printf("Populacao: Carta 02 venceu\n");
            }else {
                soma1 += populacao01;
                soma2 += populacao02;
                printf("Populacao: Empate!\n");
            }
            break;
    
        case 2:
            // Área maior vence
            if (area01 > area02){
                soma1 += area01;
                printf("Area: Carta 01 venceu\n");
            }else if (area01 < area02){
                soma2 += area02;
                printf("Area: Carta 02 veneceu\n");
            }else {
                soma1 += area01;
                soma2 += area02;
                printf("Area: Empate!\n");
            }
            break;
        
        case 3:
            // PIB maior vence
            if (pib01 > pib02){
                soma1 += pib01;
                printf("PIB: Carta 01 venceu\n");
            }else if (pib01 < pib02){
                soma2 += pib02;
                printf("PIB: Carta 02 venceu\n");
            } else {
                soma1 += pib01;
                soma2 += pib02;
                printf("PIB: Empate!\n");
            }
            break;

        case 4:
            // Pontos Turísticos maior vence
            if (pontosTuristicos01 > pontosTuristicos02){
                soma1 += pontosTuristicos01;
                printf("Pontos Turisticos: Carta 01 venceu\n");
            }else if (pontosTuristicos01 < pontosTuristicos02){
                soma2 += pontosTuristicos02;
                printf("Ponto Turisticos: Carta 02 venceu\n");
            }else {
                soma1 += pontosTuristicos01;
                soma2 += pontosTuristicos02;
                printf("Ponto Turisticos: Empate!\n");
            }
            break;

        case 5:
            // Densidade Populacional menor vence
            if (quocientedensidade01 < quocientedensidade02){
                soma1 += quocientedensidade01;
                printf("Densidade Populacional: Carta 01 venceu\n");
            }else if (quocientedensidade01 > quocientedensidade02){
                soma2 += quocientedensidade02;
                printf("Densidade Populacional: Carta 02 venceu\n");
            }else {
                soma1 += quocientedensidade01;
                soma2 += quocientedensidade02;
                printf("Densidade Populacional: Empate!\n");
            }
            break;

        case 6:
            // PIB per Capita maior vence
            if (quocientepib01 > quocientepib02){
                soma1 += quocientepib01;
                printf("PIB per Capita: Carta 01 venceu\n");
            }else if (quocientepib01 < quocientepib02){
                soma2 += quocientepib02;
                printf("PIB per Capita: Carta 02 venceu\n");
            }else {
                soma1 += quocientepib01;
                soma2 += quocientepib02;
                printf("PIB per Capita: Empate!\n");
            }
        
            break;

        case 7:
            // Super Poder maior vence
            if (superPoder01 > superPoder02){
                soma1 += superPoder01;
                printf("Super Poder: Carta 01 venceu\n");
            }else if (superPoder01 < superPoder02){
                soma2 += superPoder02;
                printf("Super Poder: Carta 02 venceu\n");
            }else {
                soma1 += superPoder01;
                soma2 += superPoder02;
                printf("Super Poder: Empate!\n");
            }
            break;

        default:
            printf("Opcao invalida\n");

            break;
    }

    //RESULTADO SEGUNDO ATRIBUTO
    printf("===Resultado do segundo Atributo===\n");    
    switch (opcao_2)
    {
        case 1:
            // População maior vence
            if (populacao01 > populacao02){
                soma1 += populacao01;
                printf("Populacao: Carta 01 venceu\n");
            }else if (populacao01 < populacao02){
                soma2 += pontosTuristicos02;
                printf("Populacao: Carta 02 venceu\n");
            }else {
                soma1 += populacao01;
                soma2 += populacao02;
                printf("Populacao: Empate!\n");
            }
            break;
    
        case 2:
            // Área maior vence
            if (area01 > area02){
                soma1 += area01;
                printf("Area: Carta 01 venceu\n");
            }else if (area01 < area02){
                soma2 += area02;
                printf("Area: Carta 02 veneceu\n");
            }else {
                soma1 += area01;
                soma2 += area02;
                printf("Area: Empate!\n");
            }
            break;
        
        case 3:
            // PIB maior vence
            if (pib01 > pib02){
                soma1 += pib01;
                printf("PIB: Carta 01 venceu\n");
            }else if (pib01 < pib02){
                soma2 += pib02;
                printf("PIB: Carta 02 venceu\n");
            } else {
                soma1 += pib01;
                soma2 += pib02;
                printf("PIB: Empate!\n");
            }
            break;

        case 4:
            // Pontos Turísticos maior vence
            if (pontosTuristicos01 > pontosTuristicos02){
                soma1 += pontosTuristicos01;
                printf("Pontos Turisticos: Carta 01 venceu\n");
            }else if (pontosTuristicos01 < pontosTuristicos02){
                soma2 += pontosTuristicos02;
                printf("Ponto Turisticos: Carta 02 venceu\n");
            }else {
                soma1 += pontosTuristicos01;
                soma2 += pontosTuristicos02;
                printf("Ponto Turisticos: Empate!\n");
            }
            break;

        case 5:
            // Densidade Populacional menor vence
            if (quocientedensidade01 < quocientedensidade02){
                soma1 += quocientedensidade01;
                printf("Densidade Populacional: Carta 01 venceu\n");
            }else if (quocientedensidade01 > quocientedensidade02){
                soma2 += quocientedensidade02;
                printf("Densidade Populacional: Carta 02 venceu\n");
            }else {
                soma1 += quocientedensidade01;
                soma2 += quocientedensidade02;
                printf("Densidade Populacional: Empate!\n");
            }
            break;

        case 6:
            // PIB per Capita maior vence
            if (quocientepib01 > quocientepib02){
                soma1 += quocientepib01;
                printf("PIB per Capita: Carta 01 venceu\n");
            }else if (quocientepib01 < quocientepib02){
                soma2 += quocientepib02;
                printf("PIB per Capita: Carta 02 venceu\n");
            }else {
                soma1 += quocientepib01;
                soma2 += quocientepib02;
                printf("PIB per Capita: Empate!\n");
            }
        
            break;

        case 7:
            // Super Poder maior vence
            if (superPoder01 > superPoder02){
                soma1 += superPoder01;
                printf("Super Poder: Carta 01 venceu");
            }else if (superPoder01 < superPoder02){
                soma2 += superPoder02;
                printf("Super Poder: Carta 02 venceu\n");
            }else {
                soma1 += superPoder01;
                soma2 += superPoder02;
                printf("Super Poder: Empate!\n");
            }
            break;

        default:
            printf("Opcao invalida\n");
        break;
    }
        //Resultado Final
        printf("\n==SOMA DOS ATRIBUTOS==\n");
        printf("Soma Carta 01:%.2f\n", soma1);
        printf("Soma Carta 02:%.2f\n", soma2);
        if (soma1 > soma2){
            printf("Carta 1 Venceu\n"); 
        }else if (soma1 < soma2){
            printf("Carta 2 Venceu\n");
        }else{
            printf("Empate!\n");
        }
    
    
    return 0;

}
